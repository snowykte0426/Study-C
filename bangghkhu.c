#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int tem(void) {
	int tem;
	printf("�µ��� �Է��ϼ��� : ");
	scanf("%d", &tem);
	if (tem < 0)
		printf("�����Դϴ�.");
	if (tem > 0)
		printf("�����Դϴ�.");
	else
		printf("�����Դϴ�.");
	return 0;
}

int main_bynum(void) {
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("¦���Դϴ�.");
	else if (num & 2 != 0)
		printf("Ȧ���Դϴ�.");
	else
		printf("����!!");
	return 0;
}

int coin(void) {
	printf("���������� ������ �����մϴ�\n");
	srand(time(NULL));
	while (1) {
	int coin = rand() % 2;
	if (coin == 1){
		printf("�ո��Դϴ�\n");
		Sleep(300);
		}
	else {
		printf("�޸��Դϴ�\n");
		Sleep(300);
		}
	}
	return 0;
}

int char_see(void) {
	printf("���ڸ� �Է��Ͻÿ� : ");
	long long char1 = 0;
	scanf("%c", &char1);
	if (char1 == 97)
		printf("���ĺ��ҹ��� �Դϴ�.");
	else if (char1 == 65)
		printf("���ĺ��빮�� �Դϴ�.");
	else
		printf("�����Դϴ�.");
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
				printf("¦¦!\n");
				goto n333639;
				}
			else if (n == 36){
				printf("¦¦!\n");
				goto n333639;
				}
			else if (n == 39) {
				printf("¦¦!\n");
				goto n333639;
				}
			printf("¦!\n");
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
				printf("¦¦!\n");
			printf("¦!\n");
		}
		else
			printf("%d\n", n);
		n++;
	} while (n < 45);
	printf("stop");
	return 0;
}