#include "stdio.h"

int rand(int n1) {
    int fin = 0;
    for (int i = 1; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (i + j == n1) {
                fin++;
            }
        }
    }
    return fin;
}

int dice(void) {
    int num, result;
    scanf("%d", &num);
    result = rand(num);
    printf("%d", result);
    return 0;
}