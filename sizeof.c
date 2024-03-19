/*
#include <stdio.h>
#include <limits.h>
int main1(void) {
printf("charÀÇ ÃÖ¼Ú°ª: %6d, charÀÇ ÃÖ´ñ°ª: %6d\n",CHAR_MIN, CHAR_MAX);
printf("shortÀÇ ÃÖ¼Ú°ª: %6d, shortÀÇ ÃÖ´ñ°ª: %6d\n", SHRT_MIN, SHRT_MAX);
char cA = 128, cB = -129;
short sA = 32768, sB = -32769;
printf("%d %d\n", cA, cB);
printf("%d %d\n", sA, sB);
return 0;
}
int main2(void){
	int a = 1, b = 2;
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}
int main3(void){
	int a = 1, b = 2;
	a = a + b; // a = 3
	b = a - b; // b = 1
	a = a - b;
	return 0;
}
int main4(void){
	int a = 1, b = 2, c = 3;
	int temp; //1111
	temp = b;
	b = a;
	a = c;
	c = temp; //11111
	printf("%d %d %d", a, b, c);
	return 0;
}
*/