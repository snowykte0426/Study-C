#include "stdio.h"
#include "string.h"
struct Person{
    char name[20];
    int age;
    char adress[100];
}p[100];
int new_struct_cpy(void);
int main(void){
    static unsigned short FSTF=2;
    static char CHEAKER;
    struct Person p1;
    strcpy(p1.name,"홍길동");
    p1.age=30;
    strcpy(p1.adress,"서울시 용산구 한남동");
    printf("이름: %s\n",p1.name);
    printf("나이: %d\n",p1.age);
    printf("주소: %s\n",p1.adress);
    while (1){
        new_struct_cpy();
        printf("%d번 등록을 하시겠습니까?[Y/N]\n",FSTF);
        scanf(" %c",&CHEAKER);
        switch (CHEAKER) {
            case 'Y':
            case 'y':
                continue;
            case 'N':
            case 'n':
                break;
        }
    }

    return 0;
}
int new_struct_cpy(void){
    static short i=0;
    printf("이름과 나이,주소를 입력해주세요\n이름: ");
    scanf("%s",&p[i].name);
    printf("나이:");
    scanf("%d",&p[i].age);
    printf("주소:");
    scanf("%s",&p[i].adress);
    puts("기록되었습니다!");
    printf("이름: %s\n",p[i].name);
    printf("나이: %d\n",p[i].age);
    printf("주소: %s\n",p[i].adress);
    i++;
}

