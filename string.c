#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int Has_Final_Consonant(wchar_t last_char) {
    if (last_char >= 0xAC00 && last_char <= 0xD7A3) {
        int relative_code = last_char - 0xAC00;
        int final_consonant = relative_code % 28;
        return final_consonant != 0;
    }
    return 0;
}

void Add_Subject_Marker(const wchar_t* word, wchar_t* result) {
    wchar_t last_char = word[wcslen(word) - 1];
    if (Has_Final_Consonant(last_char)) {
        swprintf(result, 100, L"%ls%ls", word, L"이");
    }
    else {
        swprintf(result, 100, L"%ls%ls", word, L"가");
    }
}

void Generate_Message(const wchar_t* name, wchar_t* result) {
    wchar_t wresult[200];
    Add_Subject_Marker(name, wresult);
    swprintf(result, 300, L"%ls 튀어나왔다!", wresult);
}

int main() {
    setlocale(LC_ALL, "ko_KR.UTF-8");
    setlocale(LC_CTYPE, "ko_KR.UTF-8");
    wchar_t wname[100];
    wchar_t result[300];

    wprintf(L"이름을 입력하세요: ");
    fgetws(wname, 100, stdin);
    // Remove newline character from input if present
    size_t len = wcslen(wname);
    if (len > 0 && wname[len - 1] == L'\n') {
        wname[len - 1] = L'\0';
    }

    Generate_Message(wname, result);

    wprintf(L"결과: %ls\n", result);

    return 0;
}
