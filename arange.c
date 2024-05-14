#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int mainpqkdsnfsnvsj(void) {
	int height[5] = { 172,181,163,175,143 };
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", height[i]);
	}
	return 0;
}
int msfsadfsavsvbgyr(void) {
	int score[5] = { 72,98,85,66,78 };
	int i, sum = 0;
	for (i = 0; i < 5; i++) {
		sum += score[i];
	}
	printf("총점은 %d입니다.", sum);
	return 0;
}
int VOIDA(void) {
	char str[100];
	int alphabet[26] = { 0 };
	int i = 0;
	scanf("%s", str);
	while (str[i] != '\0') {
		++alphabet[str[i] - 97];
		i++;
	}
	for (i = 0; i < 26; i++) {
		if (alphabet[i] != 0)
			printf("%C : %d\n", i + 97, alphabet[i]);
	}
	return 0;
}
int mainsasdagsdfhdfghggh(void) {
	int floor, ho
		;
	int apt[3][4] = { {111000,125000,136000,98000},{136000,142000,112000,135000},{127000,133000,155000,143000} };
	int sumFloor[3] = { 0,0,0 };
	for (floor = 0; floor < 3; floor++) {
		for (ho = 0; ho < 4; ho++) {
			sumFloor[floor] = sumFloor[floor] + apt[floor][ho];
		}
		printf("%d층의 관리비 평균은 %1.f원입니다.\n", floor + 1, sumFloor[floor] / 4.0);
	}
	printf("아파트 전체층의 관리비 평균은 %0.f원 입니다.", (sumFloor[0] + sumFloor[1] + sumFloor[2]) / 12.0);
	return 0;
}
