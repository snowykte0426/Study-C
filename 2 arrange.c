#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ����_����(void) {
	int i, salary;
	int money[10] = { 50000,10000,5000,1000,500,100,50,10,5,1 };
	int count[10];
	printf("����: ");
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

int �ɻ�����_����_���_�ʱ�() {
	int score[7];
	int i, max = 0, min = 100, sum = 0;
	for (i = 0; i < 7; i++) {
		printf("%d�� �ɻ� ���� ���� :", i + 1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 7; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}
	for (i = 0; i < 7; i++) {
		sum = sum + score[i];
	}
	printf("������ %f �Դϴ�", ((float)(((sum - min) - max) / 5)));
	return 0;
}

int �ɻ�����_����_���_�߱�() {
	int score[10];
	int i, max = 0, min = 10, sum = 0;
	for (i = 0; i < 10; i++) {
		printf("%d�� �ɻ� ���� ���� :", i + 1);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 10; i++) {
		if (score[i] > max) max = score[i];
		if (score[i] < min) min = score[i];
	}
	for (i = 0; i < 10; i++) {
		sum = sum + score[i];
	}
	printf("������ %f �Դϴ�", ((float)(((sum - min) - max) / 8)));
	return 0;
}

int ������_�����ϱ�() {
	int i, s = 0, a[] = { 2,5,7,9,15 };
	for (i = 3; i < 5; i++)
		s += a[i];
	printf("s = %d\n", s);
	return 0;
}