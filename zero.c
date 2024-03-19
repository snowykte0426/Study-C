#include <stdint.h>
#define _CRT_SECURE_NO_WARNINGS
int main9999(void) {
	int n1, n2;
	double result = 0;
	scanf("%d %d", &n1, &n2);
	result = n1 / n2;
	printf("%lf", (double)n1/n2);
	return 0;
}


int ssd1313132131() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%.9f", (double)n1 / n2);
	return 0;
}

int main22() {
	char name[51];
	scanf("%s", name);
	printf("%s??!", name);
	return 0;
}
int main1232(void){
	unsigned int year = 0;
	scanf("%hd", &year);
	printf("%hd", year - 543);
	return 0;
}
int main2312(void){
	int n1,n2,n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("%d\n",(n1+n2)%n3);
	printf("%d\n",((n1%n3) + (n2%n3))%n3);
	printf("%d\n",(n1*n2)%n3);
	printf("%d\n", ((n1%n3)*(n2%n3))%n3);
	return 0;
}
int main1231dasfas(){
	int n1,n2,n3;
	scanf("%d", &n1);
	printf("%d", (n1%100)*10);
	printf("%d", n1%10);
}


int mainboids(void){
	int i = -3,j = 2,k = 0, m;
	m = ++i && ++j && ++k;
	printf("%d %d %d %d\n", i, j, k, m);
	return 0;
}/*
int ma2in(void){
	int num1,num2,num3,num4,num5,num6,num7;
	scanf("%d", &num1);
	scanf("%d",&num2);
	printf("%d", num1*(num % 1000)/100));
}
*/