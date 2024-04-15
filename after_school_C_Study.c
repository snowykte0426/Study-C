#include "stdio.h"
#include "math.h"

int plus(int num1, int num2) {
    return num1 + num2;
}

int maius(int num1, int num2) {
    return num1 - num2;
}

int multiplication(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

int square(int number) {
    return pow(number, 2);
}

int max(int arr[]) {
    int max_n = arr[0];
    for (int i = 1; i < 5; i++) {
        if (max_n < arr[i])
            max_n = arr[i];
    }
    return max_n;
}

int min(int arr[]) {
    int min_n = arr[0];
    for (int i = 1; i < 5; i++) {
        if (min_n > arr[i])
            min_n = arr[i];
    }
    return min_n;
}

void common_divisor(int num1, int num2) {
    for (int i = 1; i <= num1 && i <= num2; i++)
        if (num1 % i == 0 && num2 % i == 0)
            printf("%d ", i);
}

int Factorial(int n) {
    if (n > 1)
        return n * Factorial(n - 1);
    else if (n == 1)
        return 1;
}

int all_cau(void) {
    int check, n1, n2, array[5];
    printf("원하시는 계산유형을 입력해주세요[1~8]: ");
    scanf("%d", &check);
    switch (check) {
        case 1:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            printf("%d\n", plus(n1, n2));
            break;
        case 2:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            printf("%d\n", maius(n1, n2));
            break;
        case 3:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d\n", &n1, &n2);
            printf("%d\n", multiplication(n1, n2));
            break;
        case 4:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            printf("%d\n", division(n1, n2));
            break;
        case 5:
            printf("수 1개를 입력해주세요[ex)5]: ");
            scanf("%d", &n1);
            printf("%d\n", square(n1));
            break;
        case 6:
            printf("수 5개를 입력해주세요[ex)1 2 6 2 1]: ");
            for (int i = 0; i < 5; i++)
                scanf("%d", &array[i]);
            printf("최댓값: %d\n최솟값: %d\n", max(array), min(array));
            break;
        case 7:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            common_divisor(n1, n2);
            break;
        case 8:
            printf("수 1개를 입력해주세요[ex)5]: ");
            scanf("%d", &n1);
            printf("%d", Factorial(n1));
            break;
    }
    return 0;
}