#include "stdio.h"

int afactorial(int N, short num) {
    num++;
    if (N > 1) {
        printf("%u\n", num);
        return N * afactorial(N - 1, num);

    } else if (N == 1) {
        printf("%d\n", num);
        return 1;
    }
}

int fac_main(void) {
    int n, result;
    short check = 0;
    scanf("%d", &n);
    result = afactorial(n, check);
    printf("%d", result);
    return 0;
}

int sam(int n) {
    static int samgaksu = 0;
    samgaksu += n;
    if (n > 1)
        sam(n - 1);
    return samgaksu;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", sam(n));
}