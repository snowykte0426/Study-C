/*
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
    strcpy(p1.name,"ȫ�浿");
    p1.age=30;
    strcpy(p1.adress,"����� ��걸 �ѳ���");
    printf("�̸�: %s\n",p1.name);
    printf("����: %d\n",p1.age);
    printf("�ּ�: %s\n",p1.adress);
    while (1){
        new_struct_cpy();
        printf("%d���� ����� �Ͻðڽ��ϱ�?[Y/N]\n",FSTF);
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
    printf("�̸��� ����,�ּҸ� �Է����ּ���\n�̸�: ");
    scanf("%s",&p[i].name);
    printf("����:");
    scanf("%d",&p[i].age);
    printf("�ּ�:");
    scanf("%s",&p[i].adress);
    puts("��ϵǾ����ϴ�!");
    printf("�̸�: %s\n",p[i].name);
    printf("����: %d\n",p[i].age);
    printf("�ּ�: %s\n",p[i].adress);
    i++;
}
*/
