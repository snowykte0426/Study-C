/*
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main1() {
	int result = 4 + 3 * 5;
	printf("%d", result);
	return 0;
}

int main2() {
	int i = 13, j = 5;
	i = j;
	printf("%d\n", i);
	return 0;
}

int main3() {
	int  i = 13, j = 5;
	printf("%d %d %d %d %d", i + j, i - j, i * j, i / j, i % j);
	return 0;
}

int main4() {
	int i = 13, j = 5, temp, a = 10, b = 20, c = 30, d = 40;
	temp = ++i; printf("%d %d\n", temp, i);
	temp = i++; printf("%d %d\n", temp, i);
	temp = --j; printf("%d %d\n", temp, j);
	temp = j--; printf("%d %d\n", temp, j);
	++a; b++; --c; d--;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}

int main5() {
	int i = 13, j = 5;
	printf("%d %d %d %d %d %d", i<j, i>j, i <= j, i >= j, i != j, i == j);
	return 0;
}

int main6() {
	int i = 13, j = 5, result;
	result = i < j ? 10 : 100;
	printf("%d", result);
	return 0;
}

int main7() {
	int i = 13, j = 5, temp;
	printf("%d %d\n", i == 13 && j == 5, i == 13 && j == 4);
	printf("%d %d\n", i == 13 || j == 4, i == 12 || j == 4);
	temp = i; printf("%d ", !temp);
	temp = 0; printf("%d", !temp);
	return 0;
}

int main8() {
	int i = 13, j = 5;
	if(i < 10 && ++j > 3){}
	printf("%d %d\n", i, j);
	return 0;
}

int main9() {
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i & j, i | j, i ^ j, ~i);
	return 0;
}

int main10() {
	int i = 13;
	int j = 5;
	printf("%d %d %d %d", i << 2, i >> 2, j << 3, j >> 3);
	return 0;
}

int main11() {
	int money, duration;
	double rate;
	double result;
	printf("���� ���� �ݾ��� �Է��� �ּ���: ");
	scanf("%d", &money);
	printf("���� ���� ������ �Է��� �ּ���: ");
	scanf("%lf", &rate);
	printf("���� ���� �Ⱓ�� �Է��� �ּ���: ");
	scanf("%d", &duration);
	result = money + money * 0.01 * rate * duration;
	printf("%d���� %.1f%%������ %d�Ⱓ ��ġ �� ���� �հ�� %.1f�Դϴ�.", money, rate, duration, result);
	return 0;
}

int main12() {
	int a, b;
	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %f\n", a, b, (float)a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	return 0;
}

int main13() {
	int mileSpeed;
	double kmSpeed;
	printf("���� �ӵ� �Է�(����): ");
	scanf("%d", &mileSpeed);
	kmSpeed = mileSpeed * 1.609;
	printf("%d������ %.3fkm�Դϴ�.", mileSpeed, kmSpeed);
	return 0;
}

int main14() {
	int mt = 0;
	double b1 = 0;
	printf("���� ������ �Է����ּ���(����:��������): ");
	scanf("%d", &mt);
	b1 = mt * 0.3025;
	printf("%dm���� %.4f���Դϴ�.", mt, b1);
	return 0;
}
#include <math.h>
int main() {
	int price, person;
	float temp;
	printf("�� �ݾ�: ");
	scanf("%d", &price);
	printf("�� �ο�: ");
	scanf("%d", &person);
	temp = price / person;
	printf("%d���� ���� %.0f���� ����,1�� %.0f0�� ����", person, temp, round(temp/10));
	return 0;
}
*/