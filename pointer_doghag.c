#include "stdio.h"
#include "Windows.h"

int pointer_dokhank(void) {
    int *ptr, *ptr2;
    int Tnum = 10;
    float Tfloat = 99.2;
    ptr = &Tfloat;
    ptr2 = &Tnum;
    printf("실수형 포인터 저장값:%x\n정수형 포인터 저장값:%x\n&를 이용한 실수형 메모리 주소 값:%x", ptr, ptr2, &Tfloat);
    if (ptr == &Tfloat)
        puts("\nTrue");
    else
        puts("\nFalse");
    printf("-----------------------------\n%d\n%d", *ptr2, Tnum);
    Sleep(1250);
    *ptr2 = Tfloat; //역참조된 ptr2의 본래 값(Tnum)에 Tfloat의 값 할당
    printf("\nptr2의 값(Tnum의 메모리 주소):%x\nTnum의 값:%d\nTnum에 &:%x", ptr2, Tnum, &Tnum);
    return 0;
}