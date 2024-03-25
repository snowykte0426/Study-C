#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
/*
int main(void) {
	int a, b, t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}


int main(void) {
	int num, sum = 0, i = 0;
	scanf("%d", &num);
	while (1) {
		i++;
		sum += i;
		if (i == num)
			break;
	}
	printf("%d", sum);
	return 0;
}
*/

int main2djs() {
	int total = 0, get = 0, price = 0, set_get = 0, sum = 0;
	scanf("%d", &total);
	scanf("%d", &get);
	for (int i = 0; i < get; i++) {
		scanf("%d %d", &price, &set_get);
		sum += price * set_get;
	}
	if (sum == total)
		printf("Yes");
	else
		printf("No");
	return 0;
}

int super_long_long_int(void) {
	int byte = 0, i = 0;
	scanf("%d", &byte);
	while (i < byte) {
		printf("long ");
		i += 4;
	}
	printf("int");
	return 0;
}

int fast_aPLUSb(void) {
	long long t = 0, num1 = 0, num2 = 0;
	scanf("%lld", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lld %lld", &num1, &num2);
		printf("%lld\n", num1 + num2);
	}
	return 0;
}

int ambmSEVEN(void) {
	int t = 0, num1, num2, count = 1;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d\n", count, num1 + num2);
		count++;
	}
	return 0;
}

int omggosa(void) {
	int t = 0, num1, num2, count = 1;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d + %d = %d\n", count, num1, num2, num1 + num2);
		count++;
	}
	return 0;
}

int aMbnun5(void) {
	int n1, n2;
	while(1) {
	scanf("%d %d", &n1, &n2);
	if (n1 == 0 && n2 == 0)
		exit(0);
	else
		printf("%d\n", n1 + n2);
	}
	return 0;
}
int arrange_1() {
	int n;
	int arr[101];
	int v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			res++;
	}
	printf("%d", res);
}
int main(void) {
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|\n");
	return 0;
}