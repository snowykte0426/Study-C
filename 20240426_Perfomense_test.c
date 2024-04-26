#include "stdio.h"

int plus(int arr[][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][4] += arr[i][j];
        }
    }
    return 0;
}

int main(void) {
    int array[3][5]={0,};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    plus(array);
    for (int i = 0; i < 3; i++) {
        printf("%d ", array[i][4]);
    }
}
