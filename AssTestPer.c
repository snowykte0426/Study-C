#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main(void) {
	int narr[100][100], n, number = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			narr[i][j] = number;
			number++;
			printf("%d\t", narr[i][j]);
		}
		puts("");
	}
}