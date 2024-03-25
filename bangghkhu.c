#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int tem(void) {
	int tem;
	printf("온도를 입력하세요 : ");
	scanf("%d", &tem);
	if (tem < 0)
		printf("영하입니다.");
	if (tem > 0)
		printf("영상입니다.");
	else
		printf("유감입니다.");
	return 0;
}

int main_bynum(void) {
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("짝수입니다.");
	else if (num & 2 != 0)
		printf("홀수입니다.");
	else
		printf("오류!!");
	return 0;
}

int coin(void) {
	printf("동전던지기 게임을 시작합니다\n");
	srand(time(NULL));
	while (1) {
	int coin = rand() % 2;
	if (coin == 1){
		printf("앞면입니다\n");
		Sleep(300);
		}
	else {
		printf("뒷면입니다\n");
		Sleep(300);
		}
	}
	return 0;
}

int char_see(void) {
	printf("문자를 입력하시오 : ");
	long long char1 = 0;
	scanf("%c", &char1);
	if (char1 == 97)
		printf("알파벳소문자 입니다.");
	else if (char1 == 65)
		printf("알파벳대문자 입니다.");
	else
		printf("숫자입니다.");
	return 0;
}

int while_test(void) {
	int i = 1, sum = 0;
	while(i <= 100){
		sum += i;
		i++;
	}
	printf("%d", sum);
}

int sudong_369(void) {
	int n = 1;
	do {
		if (n % 3 == 0) {
			if (n == 33){
				printf("짝짝!\n");
				goto n333639;
				}
			else if (n == 36){
				printf("짝짝!\n");
				goto n333639;
				}
			else if (n == 39) {
				printf("짝짝!\n");
				goto n333639;
				}
			printf("짝!\n");
		}
		else
			printf("%d\n", n);
		n333639:
		n++;
	} while (n < 45);
	printf("stop");
	return 0;
}

int cancel_369(void) {
	int n = 1;
	do {
		if (n % 3 == 0) {
			if (n / 10 == 3 || n / 10 == 6 || n / 10 == 9)
				printf("짝짝!\n");
			printf("짝!\n");
		}
		else
			printf("%d\n", n);
		n++;
	} while (n < 45);
	printf("stop");
	return 0;
}