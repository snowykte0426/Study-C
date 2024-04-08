#include "stdio.h"

int main(void) {
    long long CHEAKER = 0, PePCG = 0, *PTR_CHEAKER;
    scanf("%lld %lld", &CHEAKER, &PePCG);
    PTR_CHEAKER = &CHEAKER;
    if (CHEAKER < 10000)
        printf("%lld", CHEAKER);
    else
        printf("%x\n%lld", PTR_CHEAKER, PePCG);
    return 0;
}