#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int mvajdiwiain(void) {
	int number = NULL;
	scanf("%d", &number);
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", number, i, number * i);
	}
	return 0;
}