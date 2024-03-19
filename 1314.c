#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int mainiiiiii(void) {
	int num1, num2, num3, num4, num5;
	scanf("%d", &num1);
	scanf("%d", &num2);
	num3 = num1 * (num2 % 10);
	num4 = num1 * (num2 / 10 % 10);
	num5 = num1 * (num2 / 100);
	printf("%d\n", num1 * (num2 % 10));
	printf("%d", num1 * (num2 / 10 % 10));
	printf("%d\n", num1 * (num2 / 100));
	printf("%d\n", num5 * 100 + num4 * 10 + num3);

	return 0;
}
int main111(void) {
	long long n3 = 0,n1 = 0, n2 = 0;
	scanf("%lld %lld %lld", &n1, &n2, &n3);
	printf("%lld", n1 + n3 + n2);
	return 0;
}
int main(void) {
	printf("\\    /\\\n");

}