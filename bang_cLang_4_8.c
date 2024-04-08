#include "stdio.h"
#include "time.h"
#include "stdlib.h"
int main(void) {
    short field[5][5]={5,},x1,y1,x2,y2;
    srand(time(NULL));
    x1 =rand()%5;
    y1=rand()%5;
    x2=rand()%5;
    y2=rand()%5;
    while (x1==y1==x2==y2){
        x2=rand()%5;
        y2=rand()%5;
    }
    field[x1][y1]=1;
    field[x2][y2]=1;
    unsigned short scx,scy,mine_cheaker=0;
    printf("지뢰찾기를 시작합니다!\n");
    while (mine_cheaker<=0){
        printf("좌표를 입력하세요(5x5; X좌표 Y좌표):");
        scanf("%hu %hu",&scx,&scy);
        if(field[scx][scy]==1){
            mine_cheaker++;
            printf("펑!!");
        }
    }

}


