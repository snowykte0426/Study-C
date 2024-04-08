#include <stdio.h>

int a, b;

int mix() { // a * b
    a *= b;
    return a;
}

int max() {// a,b값 비교해서 출력하기
    if (a == b) {
        printf("%d %d\n", a, b);
    }
    a = a > b ? a : b;
    printf("%d\n", a);
    return a;
}

int arrange_retrun(int arr_total[]) {//배열의 값 모두 더해서 return하기
    for (int i = 0; i < 5; i++) {
        arr_total[5] += arr_total[i];
    }
    return arr_total[5];
}

int min_func() {//값 3개 입력받아 최소값 출력하기
    int min = 0, pss = 0;
    int arr2[3] = {0,};
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr2[i]);
    }
    min = arr2[0];
    for (int i = 0; i < 3; i++) {
        if (arr2[i] < min) {
            min = arr2[i];
            pss = i;
        }
    }
    printf("%d\n", min);
    return 1;
}

int Maius_Plus(int k) {//양수,음수 판단하기
    if (k > 0)
        puts("A");
    else if (k < 0)
        puts("B");
    else
        printf("Zero!!\n");
    return 1;
}

int m4d5(void) {
    scanf("%d %d", &a, &b);
    mix();
    printf("%d\n", a);
    scanf("%d %d", &a, &b);
    max();
    int arr[6] = {5, 1, 12, 10, 28, 0};
    arr[5] = arrange_retrun(arr);
    printf("%d\n", arr[5]);
    min_func();
    scanf("%d", &a);
    Maius_Plus(a);
    return 0;
}