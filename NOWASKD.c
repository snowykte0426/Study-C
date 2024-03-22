#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int maisvssn(void){
int num1, num2;
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf(">");
	else if (num1 < num2)
		printf("<");
	else
		printf("==");
	return 0;
}

int mainfdsss(void) {
	int score = 0;
	scanf("%d", &score);
	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("F");
	return 0;
	
}

int maindkske(void) {
	int year = NULL;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		printf("1");
	else if (year % 400 == 0)
		printf("1");
	else
		printf("0");
	return 0;
}

int mainsbr233425125(void) {
	int x, y;
	scanf(" %d", &x);
	scanf(" %d", &y);
	if (x < 0 && y > 0)
		printf("2");
	else if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y < 0)
		printf("3");
	else
		printf("4");
	return 0;
}
int main125dss(void) {
	int h, m, temp;
	scanf("%d %d", &h, &m);
	temp = 45 - m;
	m -= 45;
	if (m < 0) {
		h--;
		m = 60 - temp;
		if (h < 0)
			h = 23;
	}
	printf("%d %d", h, m);
	return 0;
 }

int maisdgsn(void) {
	int h, m, temp1 = 0, temp2 = 0, cooking_time;
	short i = 0;
	scanf("%d %d", &h, &m);
	scanf("%d", &cooking_time);
	temp1 += (cooking_time + m);
	temp2 = (60 - (cooking_time + m));
	if (temp1 >= 60) {
		while (temp1 > 0) {
			h++;
			m = 0;
			temp1 -= 60;
			i++;
		}
	}
	else
		m += cooking_time;
	if (h > 24) {
		h = 0;
		m = (-1 * temp2);	
	}
	printf("%d %d", h, m);
	return 0;
}
int main(void) {
	int n1, n2, n3, bouns = 0;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 == n2 == n3) {
		bouns = (10000 + n1 * 1000);
		goto end;
	}
	else if (n1 == n2 || n2 == n3) {
		bouns = (1000 + n2 * 100);
		goto end;
	}
	else if (n1 == n3) {
		bouns = (1000 + n2 * 100);
		goto end;
	}
	else {
		if (n1 > n2 && n1 > n3) {
			bouns = (n1 * 100);
			goto end;
		}
		else if (n2 > n1 && n2 > n3) {
			bouns = (n2 * 100);
			goto end;
		}
		else {
			bouns = (n3 * 100);
			goto end;
		}
	}
	end:
	printf("%d ", bouns);
	return 0;
}