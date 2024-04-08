#include "stdio.h"
int max_return(int arrange[]) {
    int max = arrange[0];
    for (int i = 0; i < 5; i++) {
        if (max < arrange[i]) {
            max = arrange[i];
        }
    }
    return max;
}

int arr_max(void){
    int arr[5],result;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    result = max_return(arr);
    printf("%d", result);
    return 0;
}