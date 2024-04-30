#include "stdio.h"
#include "windows.h"
#include "time.h"
#include "stdlib.h"
#include "math.h"
#include "stdbool.h"

long long num[10][100];
enum {
    BLACK,
    DARK_BLUE,
    DARK_GREEN,
    DARK_SKYBLUE,
    DARK_RED,
    DARK_VIOLET,
    DAKR_YELLOW,
    GRAY,
    DARK_GRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE,
};
void num_one(void) {
    num[1][0] = (long long int) "  ░\n ░▒\n░ ▓\n  ▓\n  ▓\n  ▒\n  ░\n";
}

void num_two(void) {
    num[2][0] = (long long int) " ░▓▓ \n▒   ▓\n    ▓\n   ▓\n ▒░\n░▓▓▒░\n";
}

void num_three(void) {
    num[3][0] = (long long int) " ░▓▓ \n▓   ░\n    ▓\n   ░\n ▓░▓\n    ░\n    ▒\n░   ░\n ▓░▒\n";
}

void num_four(void) {
    num[4][0] = (long long int) "    ▓\n   ░░\n  ░ ▒\n ░  ▓\n░░▓▓░▒\n    ░\n    ▓\n";
}

void num_five(void) {
    num[5][0] = (long long int) "░▓░▓▒\n▓\n░\n ░░▓ \n    ░\n░   ▒\n ░▓▒\n";
}

void num_six(void) {
    num[6][0] = (long long int) " ░▓▒ \n▓\n▒\n░▓░▒ \n▓   ░\n░   ▒\n ░▓▓ \n";
}

void num_seven(void) {
    num[7][0] = (long long int) "░▓░▓▒\n▓   ░\n    ░\n   ▓\n  ░\n ▒\n";
}

void num_eight(void) {
    num[8][0] = (long long int) " ░▓▒ \n▒   ▒\n▒   ▒\n ▓▒▒\n░   ▓\n▒   ░\n ▓▓▒\n";
}

void num_nine(void) {
    num[9][0] = (long long int) " ▒▒▒\n░   ▓\n▒   ░\n ░▓▒▒\n    ▓\n   ░\n  ▓\n ▓\n";
}

void num_zero(void) {
    num[0][0] = (long long int) " ░▓▒\n░   ▓\n▒   ░\n▒   ▓\n▒   ▓\n ░▒▒\n";
}

void present_time(time_t times) {
    int year, month, day;
    int time_h_1 = 0, time_h_10 = 0, time_m_1 = 0, time_m_10 = 0, time_s_1 = 0, time_s_10 = 0;
    char week[2];
    while (true) {
        times = time(NULL);
        struct tm tm = *localtime(&times);


        if (tm.tm_sec / 10 > 0) {
            time_s_10 = tm.tm_sec / 10;
            time_s_1 = tm.tm_sec % 10;
        } else
            time_s_1 = tm.tm_sec;

        if (tm.tm_min / 10 > 0) {
            time_m_10 = tm.tm_min / 10;
            time_m_1 = tm.tm_min % 10;
        } else
            time_m_1 = tm.tm_min;

        if (tm.tm_hour / 10 > 0) {
            time_h_10 = tm.tm_hour / 10;
            time_h_1 = tm.tm_hour % 10;
        } else
            time_h_1 = tm.tm_hour;
        year=tm.tm_year+1900;
        month=tm.tm_mon+1;
        day=tm.tm_mday;
        switch(tm.tm_wday){
            case 1:
                week[0]= (char) "월";
                break;
            case 2:
                week[0]=(char) "화";
                break;
            case 3:
                week[0]=(char) "수";
                break;
            case 4:
                week[0]=(char) "목";
                break;
            case 5:
                week[0]=(char) "금";
                break;
            case 6:
                week[0]=(char) "토";
                break;
            case 7:
                week[0]=(char) "일";
                break;
            default:
                week[0]=0;
                break;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), SKYBLUE);
        printf("%d/%d/%d/%c\n%d%d/%d%d/",year,month,day,week,time_h_10,time_h_1,time_m_10,time_m_1);
        printf("%d%d\n",time_s_10,time_s_1);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
        system("cls");
    }
}

int main(void) {
    SetConsoleTitle(TEXT("Calendar"));
    time_t timer = time(NULL);
    present_time(timer);
}