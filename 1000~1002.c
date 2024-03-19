#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*
    int main(void) {
        short n1, n2;
        scanf("%u %u", &n1, &n2);
        printf("%u", n1 + n2);
        return 0;
    }
int main(void) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", n1 - n2);
    return 0;
}*/
/*
int main(void) {
    int TestTable, jo_x, jo_y, back_x, back_y, jo_to_ruu, back_to_ruu, result;
    double distanse, subtract;
    scanf("%d", &TestTable);
    while (TestTable--){
        scanf("%d %d %d %d %d %d", &jo_x, &jo_y, &jo_to_ruu, &back_x, &back_y, &back_to_ruu);
        distanse = sqrt(pow(back_x - jo_x, 2) + pow(back_y - jo_y, 2));
        subtract = jo_to_ruu > back_to_ruu ? jo_to_ruu - back_to_ruu : back_to_ruu - jo_to_ruu;
        if (distanse == 0 && jo_to_ruu == back_to_ruu)
            result = -1;
        else if (distanse < jo_to_ruu + back_to_ruu && (subtract < distanse))
            result = 2;
        else if (distanse == jo_to_ruu + back_to_ruu || distanse == subtract)
            result = 1;
        else
            result = 0;
        printf("%d\n", result);
    }
    return 0;
}*/