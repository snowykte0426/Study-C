#include "stdio.h"

struct student {
    int number;
    char name[20];
    double grade;
};

int main(void) {
    struct student s = {2007, "홍길동", 4.3};
    struct student *p;
    p = &s;
    printf("학번=%d 이름=%s 키=%f\n", s.number, s.name, s.grade);
    printf("학번=%d 이름=%s 키=%f\n", (*p).number, (*p).name, (*p).grade);
    printf("학번=%d 이름=%s 키=%f\n", p->number, p->name, p->grade);
}