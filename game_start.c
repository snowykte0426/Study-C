#include "superclass.h"

#pragma comment (lib,"libmariadb.lib")
#pragma comment(lib, "user32.lib")

int KeyControl(void);
void program_off(void);

void gotoxy(int x, int y) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { 0 };
    pos.X = (SHORT)x;
    pos.Y = (SHORT)y;
    SetConsoleCursorPosition(consoleHandle, pos);
}

void ASCII_Art_print(void) {
    puts("\n\n\n");
    gotoxy(44, 4);
    printf(" _____     _____    ___  ___   \n");
    gotoxy(44, 5);
    printf("|  __ \\   /  ___|   |  \\/  |   \n");
    gotoxy(44, 6);
    printf("| |  \\/   \\ `--.    | .  . |   \n");
    gotoxy(44, 7);
    printf("| | __     `--. \\   | |\\/| |   \n");
    gotoxy(44, 8);
    printf("| |_\\ \\ _ /\\__/ / _ | |  | | _ \n");
    gotoxy(44, 9);
    printf(" \\____/(_)\\____/ (_)|_|  |_/(_)\n");
    gotoxy(44, 10);
    printf("                                \n");
}

void Program_config(void) {
    CursorView(0);
    system("COLOR 0F");
    system("mode con cols=120 lines=30 | title Gwangju Sword Master");
}

void loginmenuDraw(void) {
    int x = 53, y = 16;
    gotoxy(x, y);
    printf("> 로그인");
    gotoxy(x + 2, y + 1);
    printf("회원가입");
    gotoxy(x + 2, y + 2);
    printf("종료");
    while (true) {
        int n = KeyControl();
        switch (n) {
        case UP:
            gotoxy(x, y);
            printf(" ");
            if (y > 16) {
                y--;
            }
            else {
                y = 18;
            }
            gotoxy(x, y);
            printf(">");
            break;
        case DOWN:
            gotoxy(x, y);
            printf(" ");
            if (y < 18) {
                y++;
            }
            else {
                y = 16;
            }
            gotoxy(x, y);
            printf(">");
            break;
        case SUBMIT:
            system("cls");
            if (y - 16 == 1) {
                sign_in();
            }
            else if (y - 16 == 0) {

            }
            else if (y - 16 == 2) {
                program_off();
            }
            printf("Selected Option: %d\n", y - 16);
            return;
        default:
            break;
        }
    }
}

int KeyControl(void) {
    int temp = _getch();
    if (temp == 224) {
        temp = _getch();
        if (temp == 72) {
            return UP;
        }
        else if (temp == 80) {
            return DOWN;
        }
    }
    else if (temp == 13) {
        return SUBMIT;
    }
    return 0;
}

void CursorView(char show) {
    HANDLE hConsole;
    CONSOLE_CURSOR_INFO ConsoleInfo = { 0, };
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ConsoleInfo.dwSize = 1;
    ConsoleInfo.bVisible = show;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleInfo);
}

void program_off(void) {
    int x = 54, y = 11;
    gotoxy(x - 5, y - 2);
    printf("정말 종료하시겠습니까?");
    gotoxy(x, y);
    printf("> 예");
    gotoxy(x + 2, y + 2);
    printf("아니요");
    while (true) {
        int n = KeyControl();
        switch (n) {
        case UP:
            gotoxy(x, y);
            printf(" ");
            if (y > 11) {
                y - 2;
            }
            else {
                y = 13;
            }
            gotoxy(x, y);
            printf(">");
            break;
        case DOWN:
            gotoxy(x, y);
            printf(" ");
            if (y < 13) {
                y + 2;
            }
            else {
                y = 11;
            }
            gotoxy(x, y);
            printf(">");
            break;
        case SUBMIT:
            system("cls");

        default:
            break;
        }
    }
}

