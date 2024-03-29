#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int N, M, l, m, n;
	int arr[10][10] = {
		{ 0, },
		{ 0, } 
	};
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d %d %d", &l, &m, &n);
			arr[l][m] = n;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d", arr[i][j]);
		}
	}
	return 0;
}