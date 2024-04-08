#include "stdio.h"
int factorial(int num,int result){
    for(int i =1;i<=num;i++){
        result*=i;
    }
    return result;
}
int fackrorial(void){
    int num1,result=1;
    scanf("%d",&num1);
    result= factorial(num1,result);
    printf("%d",result);
    return 0;
}