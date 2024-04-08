#include "stdio.h"
int age_c(int Y){
    int result;
    result=2025-Y;
    return result;
}
int birthday(void){
    int birth_year,birth_month,birth_day,age;
    scanf("%d(YYYY)",&birth_year);
    scanf("%d(MM)",&birth_month);
    scanf("%d(DD)",&birth_day);
    age = age_c(birth_year);
    printf("당신의 나이는: %d",age);
    return 0;
}