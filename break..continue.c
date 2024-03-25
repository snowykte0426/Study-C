#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int owsa(void) {
	int answer = NULL;
	while (1) {
		scanf("%d", answer);
		if (answer == 0) {
			break;
		}
		else {
			printf("%d 입력\n", answer);
		}
		return 0;
	}
}

int woa(void) {
	int i, count = 0, answer;
	scanf("%d", &answer);
	for (i = 1; i < 101; i++) {
		if (i % answer != 0)
			continue;
		count++;
	}
	printf("1부터 100까지 수 중에서 %d의 배수는 %d개입니다.", answer, count);
	return 0;
}

int wlaie(void) {
	int i = 0;
	while (i++ < 10) {
		if (i != 7)
			printf("%d ", i);
	}
	return 0;
}

int yondse(void) {
	int i, j;
	for (i = 2; i < 4; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %2d\n", i, j, i * j);
		}
	printf("\n");
	}
	return 0;
}

int soda(void) {
	int start, end, tempStart, sum = 0;
	printf("두 수를 입력하세요: ");
	scanf("%d %d", &start, &end);
	tempStart = start;
	for (; start < end + 1; start++)
		sum += start;
	printf("%d부터 %d까지의 합은 %d입니다.", tempStart, end, sum);
	return 0;
}
int sunsunrun(void) {
	int i, answer;
	scanf("%d", &answer);
	for (i = 2; i <= answer; i++) {
		if (answer % i == 0) break;
		else continue;	}
	if (answer == i) printf("소수입니다.");
	else printf("소수가 아닙니다.");
	return 0;
}

int djjfj() {
	int i, j, sum = 0, count = 0;
	for (i = 1; i < 10000; i++) {
		for (j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i)printf("%d번째 완전수: %d\n", ++count, i);
		sum = 0;
	}
	return 0;
}
int dlsoa() {
	int i, j, count = 1;
	for (i = 0; i < 5; i++){
		for (j = 0; j < i; j++) {
			printf("%d ", count++);
		}
		printf("\n");
	}
	return 0;
}
int main() {
	//owsa();
	//woa();
	//wlaie();
	//yondse();
	//soda();
	//sunsunrun();
	//djjfj();
	dlsoa();
}