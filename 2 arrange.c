#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int 월급_계산기(void) {
	int i, salary;
	int money[10] = { 50000,10000,5000,1000,500,100,50,10,5,1 };
	int count[10];
	printf("월급: ");
	scanf("%d", &salary);
	for (i = 0; i < 10; i++) {
		count[i] = salary / money[i];
		salary = salary - money[i] * count[i];
	}
	for (i = 0; i < 10; i++) {
		printf("%5d : %d\n", money[i], count[i]);
	}
	return 0;
}

int 심사위원_점수_평균_초급() {
	int score[7];
	int i, max = 0, min = 100, sum = 0;
	for (i = 0; i < 7; i++) {
		printf("%d번 심사 위원 점수 :", i + 1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 7; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}
	for (i = 0; i < 7; i++) {
		sum = sum + score[i];
	}
	printf("점수는 %f 입니다", ((float)(((sum - min) - max) / 5)));
	return 0;
}

int 심사위원_점수_평균_중급() {
	int score[10];
	int i, max = 0, min = 10, sum = 0;
	for (i = 0; i < 10; i++) {
		printf("%d번 심사 위원 점수 :", i + 1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 10; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}
	for (i = 0; i < 10; i++) {
		sum = sum + score[i];
	}
	printf("점수는 %f 입니다", ((float)(((sum - min) - max) / 8)));
	return 0;
}

int 실행결과_예측하기() {
	int i, s = 0, a[] = { 2,5,7,9,15 };
	for (i = 3; i < 5; i++)
		s += a[i];
	printf("s = %d\n", s);
	return 0;
}

int 간단한_바둑게임_만들기(void) {
	int i, j;
	int color, row, col;
	char alphgo[19][19] = { 0 };
	while (1) {
		putchar('>');
		scanf("%d %d %d", &color, &row, &col);
		if (color == 2) break;
		if (color == 0)alphgo[row - 1][col - 1] = 'B';
		else if (color == 1)alphgo[row - 1][col - 1] = 'W';
		for (i = 0; i < 19; i++) {
			for (j = 0; j < 19; j++) {
				printf("%c ", alphgo[i][j]);
			}
			puts("");
		}
	}
	return 0;
}

int 행열의_덧셈(void) {
	long long arr1[2][3] = { 1,2,3,4,5,6 }, arr2[2][3] = { 15,16,17,18,19,20 };
	short cheak = NULL;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr2[i][j] += arr1[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && cheak == 3)
				puts("");
			printf("%d ", arr2[i][j]);
			cheak++;
		}
	}
	return 0;
}

int 평균_구하기(void) {
	int score[5][3] = { { 0, } };
	long long subject[3][100] = {
		{ 0, }, { 0, } };
	subject[0][0] = "국어";
	subject[1][0] = "영어";
	subject[2][0] = "수학";
	int student_num = 1,j=0;
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d번 학생의 국어,영어,수학 점수를 입력해주세요\n>>", student_num);
		scanf("%d %d %d", &score[i][j], &score[i][j + 1], &score[i][j + 2]);
		student_num++;
	}
	student_num = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			temp += score[j][i];
		}
		temp = temp / 5;
		printf("5명 학생의 %s 점수 평균은 %d점입니다\n", subject[i][0], temp);
		temp = NULL;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			temp += score[i][j];
		}
		temp = temp / 3;
		printf("%d번 학생의 점수 평균은 %d입니다\n", student_num, temp);
		student_num++;
		temp = NULL;
	}
	return 0;
}