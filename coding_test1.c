/*
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>


int main(void) {
	char name[10] = {0, }, departcode = 0;
	unsigned short age = 0;
	float securykey = 0;
	printf("�̸��� �Է��ϼ���:");
	gets(name);
	printf("���̸� �Է��ϼ���:");
	scanf(" %hu", &age);
	printf("�μ��ڵ带 �Է��ϼ���:");
	scanf(" %c", &departcode);
	printf("����Ű�� �Է��ϼ���:");
	scanf("%f", &securykey);
	printf("*********************************\n�̸� : %s\n���� : %hu\n�μ��ڵ� : %c\n����Ű : %.3f\n*********************************", name, age, departcode, securykey);
	return 0;
}
*/


/*
int main() {
	long long num1 = 0, num2 = 0, result[5] = {0};
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%lld %lld", &num1, &num2);
	result[0] = num1 + num2;
	result[1] = num1 - num2;
	result[2] = num1 * num2;
	result[3] = num1 / num2;
	result[4] = num1 % num2;
	printf("%lld + %lld = %lld\n", num1, num2, result[0]);
	printf("%lld - %lld = %lld\n", num1, num2, result[1]);
	printf("%lld * %lld = %lld\n", num1, num2, result[2]);
	printf("%lld / %lld = %lld\n", num1, num2, result[3]);
	printf("%lld %% %lld = %lld\n", num1, num2, result[4]);
	return 0;
}
*/

/*
int main() {
	SetConsoleTitle(TEXT("���� ���� ��� ���α׷�"));
	float reflection_rate1 = 0, reflection_rate2 = 0, reflection_rate3 = 0;
	float result = 0, score1 = 0, score2 = 0, score3 = 0, temp1 = 0, temp2 = 0, temp3 = 0;
	printf("*** ���� ���� ��� ���α׷� ***\n");
	printf("\n�߰���� �ݿ� ����/���� ������ �Է��ϼ���:");
	scanf(" %f %f", &reflection_rate1, &score1);
	printf("\n�⸻��� �ݿ� ����/���� ������ �Է��ϼ���:");
	scanf(" %f %f", &reflection_rate2, &score2);
	printf("\n������ �ݿ� ����/���� ������ �Է��ϼ���:");
	scanf(" %f %f", &reflection_rate3, &score3);
	temp1 = score1 * reflection_rate1;
	temp2 = score2 * reflection_rate2;
	temp3 = score3 * reflection_rate3;
	result = temp1 + temp2 + temp3;
	printf("\n������ %.1f�Դϴ�.", result);
	return 0;
}
*/