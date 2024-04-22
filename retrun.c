#include <stdio.h>
int main1(void) {
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= 10 - i; j++) {
			putchar(' ');
		}
		for (k = 0; k <= 2 * i; k++) {
			putchar('@');
		}
		puts("");
	}
	return 0;
}
int main2(void) {
	int number = 0;
	for (number = 1; number < 10; number++) {
		printf("2 x %d = %2d\n", number, number * 2);
	}
	return 0;
}
int main3(void) {
	int answer = 1;
	while (answer != 0) {
		scanf_s("%d", &answer);
		printf("%d ÀÔ·Â\n", answer);
	}
	return 0;
}
int main51(void) {
	int answer;
	do {
		scanf_s("%d", &answer);
		printf("%d ÀÔ·Â\n", answer);
	} while (answer != 0);
	return 0;
}

#include <stdio.h>

int main(void) {
	char char1 = 0;
	scanf("%d", &char1);
	switch (char1){
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly");
		break;
	default:
		printf("what?");
		break;
	}
		return 0;
}
