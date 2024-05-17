#define _CRT_SECURE_NO_WARNINGS
#include "main.h"
#include "db.h"
#pragma comment (lib,"libmariadb.lib")
#pragma comment(lib, "user32.lib")

void loginMenu(void);
void login(void);
void signup(void);
void mainMenu(void);
void gameMenu(void);

void clearInputBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    CursorView(0);
    system("COLOR 0F");
    loginMenu();
    int POS = 0;
    int prevPOS = -1; // ���� POS ��
    while (true) {
        if (GetAsyncKeyState(VK_LEFT) & 0x8000 && POS != prevPOS) {
            cls;
            box_print();
            if (POS == 0) POS = 1;
            else POS -= 1;
            clearInputBuffer();
        }
        else if (GetAsyncKeyState(VK_RIGHT) & 0x8000 && POS != prevPOS) {
            cls;
            box_print();
            if (POS == 1) POS = 0;
            else POS += 1;
            clearInputBuffer();
        }
        else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
            cls;
            box_print();
            clearInputBuffer();
            break;
        }
        switch (POS) {
        case 0:
            SetColor(11);
            gotoxy(20, 4); printf("> �α���");
            SetColor(15);
            gotoxy(75, 4); printf("ȸ������");
            break;
        case 1:
            gotoxy(20, 4); printf("�α���");
            SetColor(11);
            gotoxy(75, 4); printf("> ȸ������");
            SetColor(15);
            break;
        default: break;
        }
        prevPOS = POS; // ���� POS ���� ���� POS ������ ����
        Sleep(150);
    }
    cls;
    if (POS == 0) login();
    else if (POS == 1) signup();
    gameMenu();
    return 0;
}

void loginMenu(void) {
    system("mode con: cols=120 lines=9");
    system("title �α��� �� ȸ������");
    box_print();
    gotoxy(20, 4); printf("�α���");
    gotoxy(75, 4); printf("ȸ������");
    return;
}

void login(void) {
    char username[50], password[50];
    unsigned short sync;
    cls;
    system("title �α���");
    while (1) {
        printf("�α���\n");
        printf("���̵�: ");
        scanf_s("%s", username, sizeof(username));
        username[strcspn(username, "\n")] = NULL;
        printf("��й�ȣ: ");
        scanf_s("%s", password, sizeof(password));
        password[strcspn(password, "\n")] = NULL;
        sync = sign_in_db(username, password);
        Sleep(2000);
        if (sync == 101) {
            Sleep(4000);
            exit(1);
        }
        if (sync == 102) {
            Sleep(4000);
            exit(1);
        }
        else if (sync == 100) {
            printf("�α��� ����!\n");
            break;
        }
        else if (sync == 98) {
            printf("���̵� ��й�ȣ�� Ȯ���ϼ���\n");
            continue;
        }
        else {
            printf("Server connect error");
            Sleep(4350);
            exit(1);
        }
    }
}

void signup(void) {
    char username[50], password[50], confirmPassword[50];
    unsigned short sync;
    cls;
    system("title ȸ������");
    printf("ȸ������\n");
    printf("���̵�: ");
    scanf_s("%s", username, sizeof(username));
    getchar();
    printf("��й�ȣ: ");
    scanf_s("%s", password, sizeof(password));
    getchar();
    printf("��й�ȣ Ȯ��: ");
    scanf_s("%s", confirmPassword, sizeof(password));
    sync = sign_up_db(username, password);
    if (sync == 101) {
        Sleep(4000);
        exit(1);
    }
    if (sync == 102) {
        Sleep(4000);
        exit(1);
    }
    else if(sync==100) {
        printf("ȸ�����Կ� �����Ͽ����ϴ�\n");
    }
    else {
        printf("Server connect error");
        Sleep(4350);
        MYSQL test_check;
        db_close(&test_check);
        exit(1);
    }
    getchar();
    Sleep(2000);
}

void gameMenu(void) {
    int POS_Menu = 0;
    CursorView(0);
    system("COLOR 0F");
    mainMenu();
    while (true) {
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            cls;
            box_print();
            if (POS_Menu == 0) POS_Menu = 3;
            else POS_Menu -= 1;
        }
        else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            cls;
            box_print();
            if (POS_Menu == 3) POS_Menu = 0;
            else POS_Menu += 1;
        }
        else if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
            cls;
            box_print();
            break;
        }
        switch (POS_Menu) {
        case 0:
            SetColor(11);
            gotoxy(10, 4); printf("> ����  �ϱ�");
            SetColor(15);
            gotoxy(35, 4); printf("�̾�  �ϱ�");
            gotoxy(60, 4); printf("��ŷ  ����");
            gotoxy(85, 4); printf("����  ����");
            break;
        case 1:
            gotoxy(10, 4); printf("����  �ϱ�");
            SetColor(11);
            gotoxy(35, 4); printf("> �̾�  �ϱ�");
            SetColor(15);
            gotoxy(60, 4); printf("��ŷ  ����");
            gotoxy(85, 4); printf("����  ����");
            break;
        case 2:
            gotoxy(10, 4); printf("����  �ϱ�");
            gotoxy(35, 4); printf("�̾�  �ϱ�");
            SetColor(11);
            gotoxy(60, 4); printf("> ��ŷ  ����");
            SetColor(15);
            gotoxy(85, 4); printf("����  ����");
            break;
        case 3:
            gotoxy(10, 4); printf("����  �ϱ�");
            gotoxy(35, 4); printf("�̾�  �ϱ�");
            gotoxy(60, 4); printf("��ŷ  ����");
            SetColor(11);
            gotoxy(85, 4); printf("> ����  ����");
            SetColor(15);
            break;
        default: break;
        }
        Sleep(150);
    }
    cls;
    if (POS_Menu == 0) puts("���� �ϱ⸦ �������ϴ�.");
    else if (POS_Menu == 1) puts("�̾� �ϱ⸦ �������ϴ�.");
    else if (POS_Menu == 2) puts("��ŷ ���⸦ �������ϴ�.");
    pause;
}

void mainMenu(void) {
    system("mode con: cols=106 lines=9");
    system("title ���ּҵ帶���Ͱ���б�(Gwang Sword Master Highschool");
    box_print();
    gotoxy(10, 4); printf("����  �ϱ�");
    gotoxy(35, 4); printf("�̾�  �ϱ�");
    gotoxy(60, 4); printf("��ŷ  ����");
    gotoxy(85, 4); printf("����  ����");
    return;
}
