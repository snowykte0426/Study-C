#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ����_�ӵ�_����(void) {
	char planet[4][10] = { "mercury","vinus","earth","mars" };
	int distance[4] = { 58000000,108000000,150000000,228000000 };
	double result[4] = { 0.0 };
	int light = 300000;
	int i;
	for (i = 0; i < 4; i++) {
		result[i] = distance[i] / light;
		printf("%s : %0.f\n", planet[i], result[i] / 60);
	}
	return 0;
}

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

int ������_�ٵϰ���_�����(void) {
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

int �࿭��_����(void) {
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

int ���_���ϱ�(void) {
	int score[5][3] = { { 0, } };
	long long subject[3][100] = {
		{ 0, }, { 0, } };
	subject[0][0] = "����";
	subject[1][0] = "����";
	subject[2][0] = "����";
	int student_num = 1,j=0;
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d�� �л��� ����,����,���� ������ �Է����ּ���\n>>", student_num);
		scanf("%d %d %d", &score[i][j], &score[i][j + 1], &score[i][j + 2]);
		student_num++;
	}
	student_num = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			temp += score[j][i];
		}
		temp = temp / 5;
		printf("5�� �л��� %s ���� ����� %d���Դϴ�\n", subject[i][0], temp);
		temp = NULL;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			temp += score[i][j];
		}
		temp = temp / 3;
		printf("%d�� �л��� ���� ����� %d�Դϴ�\n", student_num, temp);
		student_num++;
		temp = NULL;
	}
	return 0;
}

int ������_�迭��_�����ϱ�(void) {
	int arr[2][3] = { 1,3,5,2,4,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] += 5;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int ������_�迭��_����_���ϱ�(void) {
	int arr[2][3] = { 1,3,5,2,4,6 };
	short plus = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] += plus;
			plus++;
		}
		plus = 0;
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ",arr[i][j]);
		}
		puts("");
	}
}

int ������_�迭��_�ִ밪_���ϱ�(void) {
	int arr[2][3] = { 1,3,5,2,4,6 };
	int max = arr[0][0];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j] + max);
		}
		puts("");
	}
	return 0;
}

int main(void) {
	//���_���ϱ�();
	//����_�ӵ�_����();
	//������_�迭��_�����ϱ�();
	//������_�迭��_����_���ϱ�();
	������_�迭��_�ִ밪_���ϱ�();
}