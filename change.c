#include "stdio.h"
#include "math.h"
int pows(int n1,int sqrt){
    return pow(n1,sqrt);
}
int pows_main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", pows(a,b));
}
int change1(int money){
    int won500,won100,won50,won10,won1;
    won500=money/500;
    money%=500;
    won100=money/100;
    money%=100;
    won50=money/50;
    money%=50;
    won10=money/10;
    if(money>=10)
        money%=10;
    won1=money;
    printf("거스름돈\n500원:%d\n100원:%d\n50원:%d\n10원:%d\n1원:%d\n",won500,won100,won50,won10,won1);
}
//7,505
int moneys(void){
    int price[4],money,total_money=0,total=0,won500,won100,won50,won10,won1;
    for(int i=0;i<4;i++)
        scanf("%d", &price[i]);
    for(int i=0;i<4;i++)
        total+=price[i];
    while(1) {
        scanf("%d", &money);
        total_money+=money;
        if(total_money<total)
            continue;
        else if(total_money>=total){
            total_money-=total;
            change1(total_money);
            break;
        }
    }
}
