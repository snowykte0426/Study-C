#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main1213(void) {
	int N = NULL;
	scanf("%d", &N);
	for (int i = 1; i <= 9; ++i) {
		printf("%d * %d = %d\n", N, i, N * i);
	}
	return 0;
}


int main23132(void) {
	int price = NULL, Get = NULL, total_price = NULL, total_Get = NULL, Sum = NULL;
	scanf("%d", &total_price);
	scanf("%d", &total_Get);
	for (int i = 0; i < total_Get; i++) {
		scanf("%d %d", &price, &Get);
		Sum = Sum + price * Get;
		if (Sum == total_price) {
			printf("Yes");
		}
		else
			printf("No");
		return 0;
	}
}
int main1(void) {
	int price = NULL, Get = NULL, total_price = NULL, total_Get = NULL, Sum = NULL,i = 0;
	scanf("%d", &total_price);
	scanf("%d", &total_Get);
	while (i < total_Get) {
		scanf("%d %d", &price, &Get);
		Sum += price * Get;
		i++;
	}
		if (Sum == total_price) {
			printf("Yes");
		}
		else
			printf("No");
		return 0;
	
}

int main14225askskjljs(void) {
	int A = NULL, B = NULL, T = NULL;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}

int hahahahahahaha(void) {
	int A, B, key;
	while (1) {
		A = NULL, B = NULL;
		key = scanf("%d %d", &A, &B);
		if (key == -1)
			break;
		printf("%d\n", A + B);
		}
	}
int star_omg() {
	int reo = 0;
	scanf("%d", &reo);
	for (int i = 0; i < reo; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
		}
	return 0;
	}
int star_omg22(void) {
		int reo = 0;
		scanf("%d", &reo);
		for (int i = 0; i < reo; i++) {
			for (int j = 1; j <= i; j--) {
				printf("*");
			}
			printf("\n");
		}
		return 0;
 }
int star_omguuuu() {
		int reo;
		scanf("%d", &reo);
		for (int i = 1; i <= reo; i++) {
			for (int j = 0; j < reo - i; j++) {
				printf(" ");
			}
			for (int k = 0; k < i; k++) {
				printf("*");
			}
			printf("\n");
		}

		return 0;
}


int main1231415235636d(void) {
	//main14225askskjljs();
	//main1();
	//umain1213();
	//hahahahahahaha();
	//star_omg();
	//star_omg22();
	star_omguuuu();
	}
