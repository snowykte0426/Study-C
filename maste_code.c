#define _CRT_SECURE_NO_WARNINGS 
#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>



void WelcomeMessage() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    printf(" _____   _                            _   _         _         \n"
        "/  __ \\ | |                          | \\ | |       | |        \n"
        "| /  \\/ | |      __ _  _ __    __ _  |  \\| |  ___  | |_   ___ \n"
        "| |     | |     / _` || '_ \\  / _` | | . ` | / _ \\ | __| / _ \\\n"
        "| \\__/\\ | |____| (_| || | | || (_| | | |\\  || (_) || |_ |  __/\n"
        " \\____/ \\_____/ \\__,_||_| |_| \\__, | \\_| \\_/ \\___/  \\__| \\___|\n"
        "                               __/ |                          \n"
        "                              |___/                           \n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void QueryExamination(MYSQL* conn, char query[]) {
    if (mysql_query(conn, query)) {
        fprintf(stderr, "쿼리 실행 실패: %s\n", mysql_error(conn));
        return;
    }
}
void ListEntries(MYSQL* conn) {
    if (mysql_query(conn, "SELECT * FROM board.c_project")) {
        fprintf(stderr, "쿼리 실행 실패: %s\n", mysql_error(conn));
        return;
    }

    MYSQL_RES* result = mysql_store_result(conn);
    if (result == NULL) {
        fprintf(stderr, "결과 저장 실패: %s\n", mysql_error(conn));
        return;
    }

    printf("등록된 항목 목록:\n");
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        if (row[0] == NULL)
            puts("등록된 항목이 없습니다!");
        printf("%s - %s\n", row[0], row[1]);
    }

    mysql_free_result(result);
}

void AddEntry(MYSQL* conn) {
    char content[255], title[50];
    printf("게시글의 제목을 입력하세요: ");
    scanf(" %[^\n]", title);
    getchar();
    printf("추가할 항목 내용을 입력하세요: ");
    scanf(" %[^\n]", content);
    char query[255];
    sprintf(query, "INSERT INTO board.c_project(title, contect) VALUES('%s', '%s')", title, content);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "쿼리 실행 실패: %s\n", mysql_error(conn));
        return;
    }
    printf("새 항목이 성공적으로 추가되었습니다.\n");
}

void ViewEntry(MYSQL* conn) {
    printf("열람할 게시글의 id을 입력하세요: ");
    char id[100];
    scanf("%s", id);
    char query[255];
    sprintf(query, "SELECT id,title,contect FROM board.c_project WHERE id = '%s'",id);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "쿼리 실행 실패: %s\n", mysql_error(conn));
        return;
    }
    MYSQL_RES* result = mysql_store_result(conn);
    MYSQL_ROW row;
    row = mysql_fetch_row(result);
    printf("글 번호: %s\n제목: %s\n글 내용: %s\n", row[0], row[1], row[2]);
    mysql_free_result(result);
}
void DB_Output(MYSQL_RES* result,MYSQL_ROW row) {
    while ((row = mysql_fetch_row(result))) {
        if (row[0] == NULL)
            puts("등록된 항목이 없습니다!");
        printf("%s - %s\n", row[0], row[1]);
    }
}
void SearchEntry(MYSQL* conn) {
    printf("검색어를 입력해주세요: ");
    char keyword[100];
    scanf("%s", keyword);
    printf("검색어에 해당하는 내용이 있는 게시글:");
    char query[255];
    MYSQL_RES* result = mysql_store_result(conn);
    MYSQL_ROW row={0,};
    sprintf(query, "SELECT * FROM board.c_project WHERE contect LIKE '%s'", keyword);
    QueryExamination(conn, query);
    DB_Output(result, row);
    sprintf(query, "SELECT * FROM board.c_project WHERE id LIKE '%s'", keyword);
    QueryExamination(conn, query);
    DB_Output(result, row);
    sprintf(query, "SELECT * FROM board.c_project WHERE title LIKE '%s'", keyword);
    QueryExamination(conn, query);
    DB_Output(result, row);
    mysql_free_result(result);
}

void DeleteEntry(MYSQL* conn) {
    int id;
    printf("삭제할 항목의 ID를 입력하세요: ");
    scanf("%d", &id);

    char query[255];
    sprintf(query, "DELETE FROM board.c_project WHERE id = %d", id);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "쿼리 실행 실패: %s\n", mysql_error(conn));
        return;
    }

    printf("항목이 성공적으로 삭제되었습니다.\n");
}

int main() {
    WelcomeMessage();
    MYSQL mysql;
    mysql_init(&mysql);

    if (!mysql_real_connect(&mysql, "localhost", "root", "123456", "board", 0, NULL, 0)) {
        fprintf(stderr, "MySQL 연결 실패: %s\n", mysql_error(&mysql));
        return 1;
    }
    else {
        printf("DB에 연결되었습니다.\n");
    }

    char command[10];
    while (1) {
        printf("명령어를 입력하세요 (list, view, search, add, delete, exit): ");
        scanf("%s", command);

        if (strcmp(command, "list") == 0) {
            ListEntries(&mysql);
        }
        else if (strcmp(command, "add") == 0) {
            AddEntry(&mysql);
        }
        else if (strcmp(command, "delete") == 0) {
            DeleteEntry(&mysql);
        }
        else if (strcmp(command, "exit") == 0) {
            break;
        }
        else if (strcmp(command, "search") == 0) {
            SearchEntry(&mysql);
        }
        else if (strcmp(command, "view") == 0) {
            ViewEntry(&mysql);
        }
        else {
            printf("잘못된 명령어입니다.\n");
        }
    }

    mysql_close(&mysql);
    return 0;
}
