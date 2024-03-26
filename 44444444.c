#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int ultar_arrange(void) {
	int arr[10000] = { 0, }, X = 0, N = 0, i;
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] < X)
			printf("%d ", arr[i]);
	}
	return 0;
}


int MinMax_ARRANGE(void) {
    int N;
    scanf("%d", &N);
    int arr[100000000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[0];
    for (int j = 0; j < N; j++) {
        if (arr[j] < min)
            min = arr[j];
        if (arr[j] > max)
            max = arr[j];
    }
    printf("%d %d", min, max);
    return 0;
}

int boll_input(void) {
    int N, M, i = 0, j = 0, k = 0;
    scanf("%d %d", &N, &M);
    int arr[101] = { 0, };
    for (int a = 0; a < M; a++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int c = i; c <= j; c++) {
            arr[c] = k;
            k = 0;
        }
    }
    for (int b = 0; b <= N; b++)
        printf("%d ", arr[b]);
    return 0;
}
//fall_ball_change
int ball_change(void) {
    int N, M, i, j, while_i = 0,temp = 0;
    int arr[10000] = { 0, };
    scanf("%d %d", &N, &M);
    while (1) {
        arr[while_i] = while_i;
        while_i++;
        if (arr[9999] != 0)
            goto exit_while;
    }
    exit_while:
    for (int a = 0; a < M; a++) {
        scanf("%d %d", &i, &j);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        temp = 0;
    }
    for (int b = 1; b <= N; b++) {
        printf("%d ", arr[b]);
    }
    return 0;
}

int student_fall(void) {
    long arr[100] = { 0, }, arr2[100] = { 0, }, j, temp1 = 0, temp2 = 0, k = 0;
    for (int i = 0; i < 28; i++) {
        scanf("%li", &arr[i]);
        arr2[i] = k;
        k++;
    }
    int min = arr[0], min_pl = arr[0];
    for (int i = 0; i < 29; i++) {
        if (arr[i] != arr) {
            temp1 = arr[i];
            for (j = 0; j < 29; j++) {
                if (arr[j] != j && arr[j] != arr2)
                    temp2 = arr[j];
            }
        }
    }
    printf("%li\n%li", temp1, temp2);
    return 0;
}

int student(void)
{
    int arr[31] = { 0 };
    int Num;
    for (int i = 0; i < 28; i++) {
        scanf("%d", &Num);
        arr[Num] = Num;
    }
    for (int i = 1; i < 31; i++) {
        if (arr[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}

int fall_remainder1(void) {
    int arr[10] = { 0, }, result_arr[10] = { 0, }, conut = 0, result = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        result_arr[i] = arr[i] % 42;
    }
    int dff = result_arr[0];
    for (int i = 0; i <= 10; i++) {
        if(dff != result_arr[i]) {
            dff = result_arr[i];
            conut++;
            if (conut == 0)
                result++;
        }
    }
    printf("%d", result);
    return 0;
}

int fall_remainder2(void) {
    int arr[10] = { 0, }, result = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        arr[i] = arr[i] % 42;
    }
    for (int i = 0; i < 10; i++) {
        int conut = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                conut;
        }
        if (conut == 0)
            result++;
    }
    printf("%d", result);
    return 0;
}

int remainder(void) {
        int input, result = 0;
        int remain[10];
        for (int i = 0; i < 10; i++) {
            scanf("%d", &input);
            remain[i] = (input % 42);
        }
        for (int i = 0; i < 10; i++) {
            int count = 0;
            for (int j = i + 1; j < 10; j++) {
                if (remain[i] == remain[j]) count++;
            }
            if (count == 0) result++;
        }
        printf("%d", result);
 }

int fall_basket_reroll(void) {
    int arr[100] = { 0, };
    int N, M, i, j;
    int temp1, temp2, temp3, temp4;
    for (int a = 0; a < 100; a++)
        arr[a] = a;
    scanf("%d %d", &N, &M);
    for (int b = 0; b < M; b++) {
        scanf("%d %d", &i, &j);
        for (int c = 0; c < j; c++) {
            temp1 = arr[i];
            arr[i] = arr[i + c];
        }
    }
    for (int d = 0; d < N; d++)
        printf("%d ", arr[d]);
    return 0;
}

int basket_reroll(void) {
    int basket[101] = { 0, };
    int N, M, i, j;
    int temp;
    scanf("%d %d", &N, &M);
    for (int a = 0; a < N; a++) {
        basket[a] = a + 1;
    }
    for (int b = 0; b < M; b++) {
        scanf("%d %d", &i, &j);
        for (int c = i - 1; c < j; c++) {
            temp = basket[c];
            basket[c] = basket[j - 1];
            basket[j - 1] = temp;
            j--;
        }
    }
    for (int d = 0; d < N; d++) 
        printf("%d ", basket[d]);
    return 0;
}
