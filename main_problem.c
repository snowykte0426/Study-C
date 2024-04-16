#include "stdio.h"

int pro3(void) {
    int n, f = 1;
    scanf("%d", &n);
    while (1) {
        f += n;
        n -= 1;
        if (n < 1) {
            printf("%d\n", f);
            break;
        }
    }
}

int pro6(void) {
    int a = 1;
    printf("%d\n", 3 / 2);
    printf("%d\n", 3 % 2);
    printf("%d\n", a + a);
    printf("%d\n", a * 3);
    printf("%d\n", !(a || 0));
}

int pro7(void) {
    int x = 0;
    printf("%d %d %d %d\n", 12 > 23, 5 == 5, !x, 3 + 2 && !x);
}

int pro8(void) {
    int num1, num2 = 10;
    num1 = 20 - num2;
    num1 += 80;
    printf("%d\n", num1);
    return 0;
}

int pro10(void) {
    int x, y, temp;
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("%d %d\n", x, y);
    return 0;
}

int pro11(void) {
    printf("평을 입력하시오: ");
    double pyng;
    scanf("%lf", &pyng);
    pyng *= 3.3058;
    printf("%.3lf평방미터입니다.\n", pyng);
    return 0;
}

int pro13(void) {
    int x;
    scanf("%x", &x);
    printf("8진수로는 %#o입니다.\n10진수로는 %d입니다.\n16진수로는 %#x입니다.\n", x, x, x);
    return 0;
}

int pro14(void) {
    int a, b;
    printf("2개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);
    printf("몫: %d\t나머지: %d\n", a / b, a % b);
}

int pro15(void) {
    int x;
    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    printf("십의 자리:%d\n", (x / 10) % 10);
    printf("일의 자리:%d\n", x % 10);
}

int pro16(void) {
    int year;
    printf("년도를 입력하시오: ");
    scanf("%d", &year);
    if (year % 400 == 0)
        printf("yes\n");
    else if (year % 4 == 0 && year % 100 != 0)
        printf("yes\n");
    else
        printf("no\n");
}

int pro17(void) {
    double lech;
    scanf("%lf", &lech);
    if (lech >= 50 && lech <= 60)
        printf("win\n");
    else
        printf("lose\n");
}

int pro18(void) {
    int x = 10, y = 5;
    y = x != 2 || y == 2;
    printf("x=%d, y=%d\n", x, y);
    x = 4, y = 0;
    y += x || y;
    printf("x=%d, y=%d\n", x, y);
    x = y = 1;
    x = -x-- + -y++;
    printf("x=%d, y=%d\n", x, y);
}

int pro19(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b)
        printf("%d\n", b - a);
    else if (a > b)
        printf("%d\n", a - b);
    else
        printf("%d\n", a - b);
    return 0;
}

int pro20(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b < c || a + c < b || b + c < a)
        printf("삼각형이 아님\n");
    else if (a == b && a == c && b == c)
        printf("정삼각형\n");
    else if ((a * a + b * b) == c * c || (b * b + c * c) == a * a || (a * a + c * c) == b * b)
        printf("직각삼각형\n");
    else if (a == b || a == c || b == c)
        printf("이등변삼각형\n");
    else
        printf("일반삼각형\n");
}

int pro21(void) {
    int h, m, s;
    printf("input second: ");
    scanf("%d", &s);
    h = s / 3600;
    s %= 3600;
    m = s / 60;
    s %= 60;
    printf("%d시 %d분 %d초\n", h, m, s);
}

void pro22(void) {
    printf("키: ");
    int ki;
    scanf("%d", &ki);
    if (ki >= 120)
        printf("환영합니다.\n즐거운 시간이 되시기 바랍니다\n");
    else {
        printf("키가 작습니다.\n이 놀이기구는 탈 수 없습니다.\n키가 %dcm더 커야합니다.\n", 120 - ki);
    }

}

void pro23(void) {
    int x = 5, a, b, c, d;
    a = x << 1;
    b = x << 2;
    c = x >> 1;
    d = x >> 2;
    printf("a=%d, b=%d, c=%d, d=%d", a, b, c, d);
}

void pro25(void) {
    printf("이름: ");
    char name;
    scanf(" %c", &name);
    int student_id, score1, score2, score3, score4;
    double average;
    printf("학번: ");
    scanf("%d", &student_id);
    printf("성적: ");
    scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
    average = (score1 + score4 + score2 + score3) / 4.0;
    printf("%c(학번: %d)의 평균 성적은 %.2lf입니다.", name, student_id, average);
}

void mini_test(void) {
    int n1, n2;
    printf("2개의 정수를 입력하시오:");
    scanf("%d %d", &n1, &n2);
    if (n1 < n2) {
        n2 -= n1;
        printf("%d", n2);
    } else if (n1 > n2) {
        n1 -= n2;
        printf("%d", n1);
    } else printf("%d", n1 - n2);
}

char pro26(void) {
    int money, price, change;
    printf("투입한 돈: ");
    scanf("%d", &money);
    printf("물건값: ");
    scanf("%d", &price);
    printf("거스름돈: %d", money - price);
    puts("\n");
    change = money - price;
    printf("100원 동전의 개수: %d\n", change / 100);
    printf("10원 동전의 개수: %d\n", (change % 100) / 10);
    printf("1원 동전의 개수: %d\n", (change % 100) % 10);
}

long long pro27(void) {
    int i;
    double f;
    f = 5 / 4;
    printf("(5 / 4) = %lf\n", f);
    f = (double) 5 / 4;
    printf("(double)5 / 4 = %lf\n", f);
    i = 1.3 + 1.8;
    printf("1.3 + 1.8 = %d\n", i);
    i = (int) 1.3 + (int) 1.8;
    printf("(int)1.3 + (int)1.8 = %d\n", i);
    return 0;
}

int main(void) {
    int chker;
    error:;
    printf("Problem Num:");
    scanf("%d", &chker);
    switch (chker) {
        case 3:
            pro3();
        case 6:
            pro6();
        case 7:
            pro7();
        case 8:
            pro8();
        case 10:
            pro10();
        case 11:
            pro11();
        case 13:
            pro13();
        case 14:
            pro14();
        case 15:
            pro15();
        case 16:
            pro16();
        case 17:
            pro17();
        case 18:
            pro18();
        case 19:
            pro19();
        case 20:
            pro20();
        case 21:
            pro21();
        case 22:
            pro22();
        case 23:
            pro23();
        case 25:
            pro25();
        case 26:
            pro26();
        case 27:
            pro27();
        case 1000:
            mini_test();
        case 0:
            printf("End!!");
            break;
        default:
            goto error;

    }

}