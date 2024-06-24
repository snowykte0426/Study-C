#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

#define SMTP_SERVER "smtp.gmail.com"
#define SMTP_PORT 465
#define USER_EMAIL "dataarchlve20231130@gmail.com"
#define USER_PASSWORD "jdhp qxon mfjy ikyh"
#define RECIPIENT_EMAIL "snowykte@gmail.com"

static const char* payload_text[] = {
  "To: " RECIPIENT_EMAIL "\r\n",
  "From: " USER_EMAIL "\r\n",
  "Subject: Test Email\r\n",
  "\r\n", /* empty line to divide headers from body, see RFC5322 */
  "This is a test email sent from C program using libcurl.\r\n",
  NULL
};

struct upload_status {
    int lines_read;
};

static size_t payload_source(void* ptr, size_t size, size_t nmemb, void* userp) {
    struct upload_status* upload_ctx = (struct upload_status*)userp;
    const char* data;

    if ((size == 0) || (nmemb == 0) || ((size * nmemb) < 1)) {
        return 0;
    }

    data = payload_text[upload_ctx->lines_read];

    if (data) {
        size_t len = strlen(data);
        memcpy(ptr, data, len);
        upload_ctx->lines_read++;
        return len;
    }

    return 0;
}

int main(void) {
    CURL* curl;
    CURLcode res = CURLE_OK;
    struct curl_slist* recipients = NULL;
    struct upload_status upload_ctx = { 0 };

    curl_global_init(CURL_GLOBAL_DEFAULT);

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_USERNAME, USER_EMAIL);
        curl_easy_setopt(curl, CURLOPT_PASSWORD, USER_PASSWORD);
        curl_easy_setopt(curl, CURLOPT_URL, "smtps://" SMTP_SERVER);

        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, USER_EMAIL);
        recipients = curl_slist_append(recipients, RECIPIENT_EMAIL);
        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);

        curl_easy_setopt(curl, CURLOPT_READFUNCTION, payload_source);
        curl_easy_setopt(curl, CURLOPT_READDATA, &upload_ctx);
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

        // CA 인증서 파일 경로 설정
        curl_easy_setopt(curl, CURLOPT_CAINFO, "C:\\Users\\USER\\Downloads\\cacert.pem");

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        curl_slist_free_all(recipients);
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();

    return (int)res;
}
