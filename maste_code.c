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
        fprintf(stderr, "���� ���� ����: %s\n", mysql_error(conn));
        return;
    }
}
void ListEntries(MYSQL* conn) {
    if (mysql_query(conn, "SELECT * FROM board.c_project")) {
        fprintf(stderr, "���� ���� ����: %s\n", mysql_error(conn));
        return;
    }

    MYSQL_RES* result = mysql_store_result(conn);
    if (result == NULL) {
        fprintf(stderr, "��� ���� ����: %s\n", mysql_error(conn));
        return;
    }

    printf("��ϵ� �׸� ���:\n");
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        if (row[0] == NULL)
            puts("��ϵ� �׸��� �����ϴ�!");
        printf("%s - %s\n", row[0], row[1]);
    }

    mysql_free_result(result);
}

void AddEntry(MYSQL* conn) {
    char content[255], title[50];
    printf("�Խñ��� ������ �Է��ϼ���: ");
    scanf(" %[^\n]", title);
    getchar();
    printf("�߰��� �׸� ������ �Է��ϼ���: ");
    scanf(" %[^\n]", content);
    char query[255];
    sprintf(query, "INSERT INTO board.c_project(title, contect) VALUES('%s', '%s')", title, content);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "���� ���� ����: %s\n", mysql_error(conn));
        return;
    }
    printf("�� �׸��� ���������� �߰��Ǿ����ϴ�.\n");
}

void ViewEntry(MYSQL* conn) {
    printf("������ �Խñ��� id�� �Է��ϼ���: ");
    char id[100];
    scanf("%s", id);
    char query[255];
    sprintf(query, "SELECT id,title,contect FROM board.c_project WHERE id = '%s'",id);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "���� ���� ����: %s\n", mysql_error(conn));
        return;
    }
    MYSQL_RES* result = mysql_store_result(conn);
    MYSQL_ROW row;
    row = mysql_fetch_row(result);
    printf("�� ��ȣ: %s\n����: %s\n�� ����: %s\n", row[0], row[1], row[2]);
    mysql_free_result(result);
}
void DB_Output(MYSQL_RES* result,MYSQL_ROW row) {
    while ((row = mysql_fetch_row(result))) {
        if (row[0] == NULL)
            puts("��ϵ� �׸��� �����ϴ�!");
        printf("%s - %s\n", row[0], row[1]);
    }
}
void SearchEntry(MYSQL* conn) {
    printf("�˻�� �Է����ּ���: ");
    char keyword[100];
    scanf("%s", keyword);
    printf("�˻�� �ش��ϴ� ������ �ִ� �Խñ�:");
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
    printf("������ �׸��� ID�� �Է��ϼ���: ");
    scanf("%d", &id);

    char query[255];
    sprintf(query, "DELETE FROM board.c_project WHERE id = %d", id);
    if (mysql_query(conn, query)) {
        fprintf(stderr, "���� ���� ����: %s\n", mysql_error(conn));
        return;
    }

    printf("�׸��� ���������� �����Ǿ����ϴ�.\n");
}

int main() {
    WelcomeMessage();
    MYSQL mysql;
    mysql_init(&mysql);

    if (!mysql_real_connect(&mysql, "localhost", "root", "123456", "board", 0, NULL, 0)) {
        fprintf(stderr, "MySQL ���� ����: %s\n", mysql_error(&mysql));
        return 1;
    }
    else {
        printf("DB�� ����Ǿ����ϴ�.\n");
    }

    char command[10];
    while (1) {
        printf("��ɾ �Է��ϼ��� (list, view, search, add, delete, exit): ");
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
            printf("�߸��� ��ɾ��Դϴ�.\n");
        }
    }

    mysql_close(&mysql);
    return 0;
}
