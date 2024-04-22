#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main1() {
	int i = 13, j = 5;
	if (-1) putchar('A');
	if (1) putchar('B');
	if (13) putchar('C');
	if (0) putchar('D');
	if (i > j) {
		putchar('E');
		putchar('F');
	}
	if (i < j)
		putchar('G');
	putchar('H');
	return 0;
}
int main2(void) {
	int standard = 80, score = 76;
	if (standard < score) {
		putchar('P');
	}
	else {
		putchar('F');
	}
	return 0;
}
int main3(void) {
	int standard = 173, height = 168;
	if (standard > height) {
		printf("평균 이하");
	}
	else if (standard == height) {
		printf("평균");
	}
	else {
		printf("평균 이상");
	}
	return 0;
}
int main(void) {
	int score;
	char grade;
	puts("점수를 입력하세요(1~100)");
	putchar('>');
	scanf("%d", &score);
	switch (score / 10) {
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}
	printf("학점은 %c 입니다.", grade);
	return 0;
}
