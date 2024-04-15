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

int pro19(void){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
        printf("%d\n",b-a);
    else if(a>b)
        printf("%d\n",a-b);
    else
        printf("%d\n",a-b);
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
        case 0:
            printf("End!!");
            break;
        default:
            goto error;

    }

}