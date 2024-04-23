#include "stdio.h"

int i, j, n;
int star1(void) {	//normal
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
	return 0;
}

int star2(void) {	//reverse_around
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		putchar('\n');
	}
	return 0;
}

int star3(void) {	//upside_down_try
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 10 - i; j++) {
			printf("*");
		}
		puts("");
	}
	return 0;
}

int star4(void) {	//reverse_upside_down_try
	scanf("d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 0; j < n - i; j++) {
			printf("*");
		}
		puts("");
	}
	return 0;
}

int main(void) {
	char ch;
	scanf("%d", &ch);
	puts("--------------------------------------");
	switch(ch) {
		case 1:
			star1();
			break;
		case 2:
			star2();
			break;
		case 3:
			star3();
			break;
		case 4:
			star4();
			break;
	}
}