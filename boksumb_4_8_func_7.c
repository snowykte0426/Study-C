#include "stdio.h"
int min(int arr[]){
    int mins=arr[0],pss;
    for(int i=0;i<6;i++){
        if(mins>arr[i]){
            pss=i;
        }
    }
    return pss;
}
int arr_min(void){
    int arrange[6],result;
    for(int i=0;i<6;i++){
        scanf("%d",&arrange[i]);
    }
    result=min(arrange);
    printf("%d",result+1);
    return 0;
}