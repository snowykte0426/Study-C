#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Arrange_Plus_Fall(void) {
	int N, M, l, m, n;
	int arr[10][10] = { 0, };
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d %d %d", &l, &m, &n);
			arr[l][m] = n;
		}
	}
	int j = 0;
	for (int i = 0; i < N; i++) {
		printf("%d %d %d\n", arr[i][j], arr[i][j + 1], arr[i][j + 2]);
	}
	return 0;
}

int Araange_Plus(void) {
	int arr1[100][100];
	int arr2[100][100];
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int k = 0; k < N; k++) {
		for (int l = 0; l < M; l++) {
			scanf("%d", &arr2[k][l]);
		}
	}
	for (int q = 0; q < N; q++) {
		for (int w = 0; w < M; w++) {
			arr1[q][w] += arr2[q][w];
			printf("%d ", arr1[q][w]);
		}
		printf("\n");
	}
	return 0;
}

int maxium_2arrange(void) {
	int arr[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int max = arr[0][0];
	short x = 1, y = 1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				x = i + 1, y = j + 1;
			}
		}
	}
	printf("%d\n%u %u", max, x, y);
	return 0;
}

int main(void) {
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int a = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i][a]);
		a++;
	}
	return 0;
}