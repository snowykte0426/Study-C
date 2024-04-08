#include "stdio.h"
int double_arr(int arrange[]){
    for(int i=0;i<6;i++){
        if(arrange[i]%2==0){
            printf("%d ",arrange[i]);
        }
    }

}
int arr_double(void){
    int arr[6];
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    double_arr(arr);
    return 0;
}