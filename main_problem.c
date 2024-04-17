#include "stdio.h"

int error_massage(int error_sign) {
    if (error_sign >= 1)
        puts("에러!!존재하지 않는 값!!");
    error_sign--;
    return error_sign;
}

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

int pro28(void) {
    char c1;
    scanf(" %c", &c1);
    if (c1 >= 'A' && c1 <= 'Z')
        puts("대문자입니다.");
    else if (c1 >= 'a' && c1 <= 'z')
        puts("소문자입니다.");
    else if (c1 >= '0' && c1 <= '9')
        puts("숫자입니다.");
    else
        puts("그 외의 문자입니다.");
    return 0;
}

void pro29(void) {
    printf("현재 시각을 입력하시오(시 분): ");
    int now_time_h, now_time_m, temp;
    scanf("%d %d", &now_time_h, &now_time_m);
    printf("자유 시간을 입력하시오(분): ");
    int free_time_m;
    scanf("%d", &free_time_m);
    now_time_m += free_time_m;
    if (now_time_m >= 60) {
        now_time_h += now_time_m / 60;
        now_time_m %= 60;
    }
    printf("귀환 시각은 %d시 %d분입니다.", now_time_h, now_time_m);
}

void pro31(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}

void pro32(void) {
    long long a, b, n;
    scanf("%lld %lld %lld", &a, &b, &n);
    for (long long i = 0; i < n; i++) {
        a += b;
    }
    printf("%lld", a);
}

void pro33(void) {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 3)
            count++;
    }
    printf("%d", count);
}

int pro59(int x) {
    x = x / 10000;
    return 2024 - x + 1;
}

int pro58(int x) {
    if (x > 1)
        return pro58(x - 1) + pro58(x - 2);
    else if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
}
void pro43(void){
    int i,answer;
    scanf("%d",&answer);
    for(i = 2;i<=answer;i++){
        if(answer%i==0)
            break;
    }
    if(answer==i)
        printf("소수입니다. ");
    else
        printf("소수가 아닙니다. ");
}

int main(void) {
    int chker, error_check = 0;
    error:;
    if (error_check >= 1)
        error_check = error_massage(error_check);
    printf("Problem Num:");
    scanf("%d", &chker);
    switch (chker) {
        case 3:
            pro3();
            break;
        case 6:
            pro6();
            break;
        case 7:
            pro7();
            break;
        case 8:
            pro8();
            break;
        case 10:
            pro10();
            break;
        case 11:
            pro11();
            break;
        case 13:
            pro13();
            break;
        case 14:
            pro14();
            break;
        case 15:
            pro15();
            break;
        case 16:
            pro16();
            break;
        case 17:
            pro17();
            break;
        case 18:
            pro18();
            break;
        case 19:
            pro19();
            break;
        case 20:
            pro20();
            break;
        case 21:
            pro21();
            break;
        case 22:
            pro22();
            break;
        case 23:
            pro23();
            break;
        case 25:
            pro25();
            break;
        case 26:
            pro26();
            break;
        case 27:
            pro27();
            break;
        case 28:
            pro28();
            break;
        case 29:
            pro29();
            break;
        case 31:
            pro31();
            break;
        case 32:
            pro32();
            break;
        case 33:
            pro33();
            break;
        case 43:
            pro43();
            break;
        case 59:
            int birth;
            scanf("%d", &birth);
            printf("%d", pro59(birth));
            break;
        case 58:
            int n;
            scanf("%d", &n);
            printf("%d", pro58(n));
            break;
        case 1000:
            mini_test();
            break;
        case 0:
            printf("End!!");
            break;
        default:
            error_check++;
            goto error;
    }
    return 0;
}