#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
#define MAX_LOTTO_NUMBERS 6 //새로 배운거(메모하기)

void Press_key_l(int arr[][MAX_LOTTO_NUMBERS], int count) {
    printf("현재 입력된 로또 번호들:\n");
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < MAX_LOTTO_NUMBERS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------\n");
}

void Press_key_f(int count, int arr[][MAX_LOTTO_NUMBERS], int count2) {
    static short check_rand = 0;
    int winning_number[MAX_LOTTO_NUMBERS];
    printf("로또 당첨번호:\n");
    if (check_rand == 0) {
        for (int i = 0; i < MAX_LOTTO_NUMBERS; i++) {
            winning_number[i] = rand() % 45 + 1;
            printf("%d ", winning_number[i]);
        }
        check_rand++;
    }
    printf("\n-------------------------\n입력한 번호:\n");
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < MAX_LOTTO_NUMBERS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    int matches = 0;
    for (int i = 0; i < count; i++) {
        int match_count = 0;
        for (int k = 0; k < MAX_LOTTO_NUMBERS; k++) {
            if (winning_number[k] == arr[i][k]) {
                match_count++;
                break;
            }
        }
        if (match_count > 0) {
            if (match_count == 6)
                printf("당첨되었습니다!!");
            else
                printf("로또 %d: %d개 일치합니다!\n", i + 1, match_count);
        } else
            printf("로또 %d: 낙첨입니다...\n", i + 1);
        matches += match_count;
    }

    if (matches == count * MAX_LOTTO_NUMBERS) {
        printf("전체 당첨입니다!!\n");
    } else if (matches > 0) {
        printf("총 %d개 일치합니다!\n", matches);
    } else {
        printf("전부 낙첨입니다...\n");
    }
}

int lotto_mechine(void) {
    while (1) {
        srand(time(NULL));
        int number;
        printf("로또를 몇 번 뽑으시겠습니까?: ");
        scanf("%d", &number);
        while (getchar() != '\n');

        int user_num[number][MAX_LOTTO_NUMBERS];

        for (int j = 0; j < number; j++) {
            int valid;
            do {
                valid = 1;
                printf("로또번호나 l, f를 입력해주세요(ex/1 4 2 3 4 5)[1~45]\n");
                char input[256];
                fgets(input, sizeof(input), stdin);

                if (input[0] == 'l') {
                    Press_key_l(user_num, j);
                    j--;
                    continue;
                } else if (input[0] == 'f') {
                    Press_key_f(j, user_num, j);
                    j--;
                    continue;
                }

                char *token = strtok(input, " ");
                int k = 0;
                while (token != NULL && k < MAX_LOTTO_NUMBERS) {
                    int num = atoi(token);
                    if (num < 1 || num > 45) {
                        printf("잘못된 값입니다 (1~45 사이 입력): %d\n", num);
                        valid = 0;
                        break;
                    }
                    for (int i = 0; i < k; i++) {
                        if (user_num[j][i] == num) {
                            printf("중복된 번호가 있습니다: %d\n다시 로또번호 6개를 입력해주세요\n", num);
                            valid = 0;
                            break;
                        }
                    }
                    if (!valid) break;
                    user_num[j][k++] = num;
                    token = strtok(NULL, " ");
                }
                if (k < MAX_LOTTO_NUMBERS) valid = 0;
            } while (!valid);
        }

        Press_key_f(number, user_num, number);
        while (1) {
            char check;
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
    return 0;
}

