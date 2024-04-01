#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
enum {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VIOLET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

int gico_problem_sov(void) {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			if (i % 5 == 0) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}

int star_set(void) {
	int i = 0, j = 0;
	int number, switch_n;
	scanf("%d", &switch_n);
	switch (switch_n) {
	case 1:
		scanf("%d", &number);
		for (i = 0; i < number; i++) {
			for (j = 0; j < number; j++) {
				if (i == j || (i + j == number - 1))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	case 2:
		scanf("%d", &number);
		while (i < number) {
			while (j < number) {
				if (i == j || (i + j == number - 1))
					printf("*");
				else
					printf(" ");
				j++;
			}
			printf("\n");
			j = 0;
			i++;
		}
	case 3:
		scanf("%d", &number);
		do {
			do {
				if (i == j || (i + j == number - 1))
					printf("*");
				else
					printf(" ");
				j++;
			} while (j < number);
			printf("\n");
			j = 0;
			i++;
		} while (i < number);
	}
}

int rebus(void) {
	int num = NULL;
	scanf("%d", &num);
	do {
		printf("%d", num % 10);
		num /= 10;
	} while (num);
	return 0;
}
int You;
short a = 0;
double count = 0, win = 0;
int main(void) {
	
	while (1) {
		a++;
		You = 0;
		srand(time(NULL));
		if (a >= 2) {
			if (win != 0)
				printf("�·��� %lf%%�Դϴ�\n", win / count * 100);
			else
				goto game_restart;
		}
		game_restart:
		count++;
		printf("������ 0,������ 1,���� 2�Դϴ�\n");
		Sleep(1000);
		printf("����!����!��!\n: ");
		scanf(" %d", &You);
		int He = rand() % 3;
		switch (You) {
		case 0:
			if (He == You || He == 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
				printf("�����ϴ�\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else if (He == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
				printf("�����ϴ�!\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else if (He == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
				printf("�̰���ϴ�!\n");
				win++;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else {
				printf("����� ������ ������ ����� ����� �½��ϴ�!!");
				for (int i = 0; i < 3; i++) {
					printf(".\n");
					Sleep(350);
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
				printf("���� ���� ��������Ƚ��ϴ�!");
				exit(1);
			}
			continue;
		case 1:
			if (He == You || He == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
				printf("�����ϴ�\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else if (He == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
				printf("�����ϴ�!\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else if (He == 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
				printf("�̰���ϴ�!\n");
				win++;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else {
				printf("����� ������ ������ ����� ����� �½��ϴ�!!");
				for (int i = 0; i < 3; i++) {
					printf(".\n");
					Sleep(350);
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
				printf("���� ���� ��������Ƚ��ϴ�!");
				exit(1);
			}
			continue;
		case 2:
			if (He == You || He == 2) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
				printf("�����ϴ�\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else if (He == 0) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
				printf("�����ϴ�!\n");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else if (He == 1) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
				printf("�̰���ϴ�!\n");
				win++;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
				continue;
			}
			else {
				printf("����� ������ ������ ����� ����� �½��ϴ�!!");
				for (int i = 0; i < 3; i++) {
					printf(".\n");
					Sleep(350);
				}
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
				printf("���� ���� ��������Ƚ��ϴ�!");
				exit(1);
			}
			continue;

		default:
			printf("����� ������ ������ ����� ����� �½��ϴ�!!");
			for (int i = 0; i <= 3; i++) {
				printf(".\n");
				Sleep(650);
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
			printf("���� ���� ��������Ƚ��ϴ�!");
			exit(1);
		}
	}
}
