
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "Windows.h"

unsigned short randem_check = 1;

void Press_key_lt(int arr[][6], int A) {
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
}

void Press_key_ft(int A, int arr[][6], int B) {
    int winning_number[6];
    static short check = 1;
    if (check == 1) {
        if (randem_check == 1)
            for (int i = 0; i < 6; i++) {
                winning_number[i] = rand() % 45;
            }
        check = -1;
    }
    printf("로또 당첨번호\n");
    for (int i = 0; i < 6; i++)
        printf("%d ", winning_number[i]);
    printf("\n-------------------------\n입력한 번호\n");
    for (int i = 0; i < B; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    int count = 0;
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < 6; j++) {
            if (winning_number[j] == arr[i][j])
                count++;
        }
    }
    randem_check++;
    if (count == A * 6)
        printf("당첨입니다!!\n");
    else if (count >= 1)
        printf("%d개 일치합니다!\n", count);
    else
        printf("낙첨입니다...\n");
}

int maint(void) {
    int number;
    while (1) {
        printf("로또를 몇번 뽑으시겠습니까?: ");
        scanf("%d", &number);
        int user_num[number][6], test_num[number][6], for_check = 0;
        char check;
        srand(time(NULL));
        for (int j = 0; j < number; j++) {
            printf("로또번호나 l,f를 입력해주세요(ex/1 4 2 3 4 5)[1~45]\n");
            for (int k = 0; k < 6; k++) {
                scanf("%d", &user_num[j][k]);
                scanf("%c", &check);
                for (int l = 0; l < number; l++)
                    for (int m = 0; m < 6; m++)
                        test_num[l][m] = 0;
                for (int l = 0; l < number; l++) {
                    for (int m = 0; m < 6; m++) {
                        test_num[j][k] = user_num[l][m];
                        if (user_num[j][k] == test_num[l][m]) {
                            if ((j == l && k == m) || test_num[l][m] == 0)
                                break;
                            else {
                                printf("%d번째 복권 %d번째에 중복된 입력이 있습니다.\n중복되지 않은 값을 입력해주세요\n입력된 번호\n", j + 1, l + 1);
                                Press_key_l(user_num, for_check);
                                puts("-------------------------");
                                scanf("%d", &user_num[j][k]);
                            }
                        }
                    }
                }



                if (check == 'l') {
                    k--;
                    Press_key_l(user_num, for_check);
                    printf("로또번호나 l,f를 입력해주세요(ex/1 4 2 3 4 5)[1~45]\n");
                } else if (check == 'f') {
                    k--;
                    Press_key_f(number, user_num, for_check);
                    printf("로또번호나 l,f를 입력해주세요(ex/1 4 2 3 4 5)[1~45]\n");
                }
            }
            for (int k = 0; k < 6; k++) {
                if (user_num[j][k] < 1 || user_num[j][k] > 45) {
                    over_or_under_flow_user_num:;
                    printf("%d번째 복권 %d번째에 잘못된 값입니다\n1~45 범위의 정수를 입력해주세요: ", j + 1, k + 1);
                    scanf("%d", &user_num[j][k]);
                    if (user_num[j][k] < 1 || user_num[j][k] > 45)
                        goto over_or_under_flow_user_num;
                }
            }
        }

//중복처리 중...

        for_check++;

        Press_key_f(number, user_num, for_check);
        while (1) {
            printf("게임이 끝났습니다\n다시 시작하시겠습니까?[r/x]: ");
            while (1) {
                scanf("%c", &check);
                switch (check) {
                    case 'r':
                        break;
                    case 'x':
                        exit(1);
                    default:
                        printf("잘못된 값입니다\n다시 입력해주세요[r/x]: ");
                        continue;
                }
                break;
            }
            break;
        }
        continue;
    }

}
