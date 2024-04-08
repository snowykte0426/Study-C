#include "stdio.h"

int pibonaci(int n) {
    int i = 0, j = 1, k = 0, l = 0, m = 0;
    do {
        m = l;
        l = j + k;
        printf("%d ", l);
        k = l;
        i++;
        j = m;
    } while (i < n);
}

int pibonaci_num(void) {
    int num;
    scanf("%d", &num);
    pibonaci(num);
}