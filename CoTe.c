#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int n, a[10][10], b[20], c[20], d[2];
void dfs(int i, int j, int k, int l) {
    if (j >= n) { i++; j = (j % 2 == 0) ? 1 : 0; }
    if (i >= n) { if (d[l] < k) d[l] = k; return; }
    if (a[i][j] == 1 && !b[i + j] && !c[i - j + n]) {
        b[i + j] = c[i - j + n] = 1;
        dfs(i, j + 2, k + 1, l);
        b[i + j] = c[i - j + n] = 0;
    }
    dfs(i, j + 2, k, l);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    dfs(0, 0, 0, 0);
    dfs(0, 1, 0, 1);
    printf("%d\n", d[0] + d[1]);
    Sleep(5000);
    return 0;
}