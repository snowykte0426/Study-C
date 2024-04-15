#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "Windows.h"

int number;

void press_key_l(int array[], int for_number) {
    int i = 0, check1 = 0, check2 = 0;

    for (; i < for_number; i++) {
        printf("%d ", array[i]);
        if (check1 >= 1) {
            if (i % (5 + check2) == 0) {
                puts("");
                check2 += 6;
            }
        } else if (check1 == 0) {
            if (i % 5 == 0 && i != 0) {
                puts("");
                check1 = 1;
                check2 += 6;
            }
        }
    }
}


void press_key_f(int arr[]) {
    int count = 0, winning_number[6], winning_number_check = 0;
    for (int i = 0; i < 6; i++)
        winning_number[i] = rand() % 45;
    for (int i = 0; i < number * 6; i++) {
        if (winning_number_check >= 6)
            winning_number_check = 0;
        if (arr[i] == winning_number[winning_number_check])
            count++;
        winning_number_check++;
    }
    printf("로또 당첨번호\n");
    for (int i = 0; i < 6; i++)
        printf("%d ", winning_number[i]);
    printf("\n-------------------------\n입력한 번호\n");
    for (int i = 0; i < number * 6; i++) {
        printf("%d ", arr[i]);
        if (0 == i % 5 && i != 0)
            puts("");
    }
    printf("\n-------------------------\n");
    if (count == number * 6)
        printf("당첨되었습니다.\n");
    else if (count != 0)
        printf("%d개 일치합니다.\n", count);
    else
        printf("낙첨입니다...\n");
}

int main_fall(void) {
    while (1) {
        printf("로또를 몇번 뽑으시겠습니까?: ");
        scanf("%d", &number);
        int user_num[number * 6], number_for = 0, for_check = 1, j = 0;
        char check = 0;
        srand(time(NULL));
        for (int i = 0; i < number; i++) {
            printf("로또번호나 l,f를 입력해주세요(ex/1 4 2 3 4 5)\n");
            for (; j < number * for_check; j++) {
                number_for++;
                user_num_error:
                scanf("%d", &user_num[j]);
                scanf("%c", &check);
                if (check == 'l')
                    press_key_l(user_num, number_for);
                else if (check == 'f')
                    press_key_f(user_num);
            }
        }
        for(int k=0;k<number;k++) {
            for (int l = 0; l < 6; l++) {
                if (user_num[k] < 1 || user_num[k] > 45) {
                    printf("%d번째 복권 %d번째에 잘못된 값입니다\n1~45 범위의 정수를 입력해주세요: ",k, l + 1);
                    scanf("%d", &user_num[l]);
                }
            }
        }
        for_check += 6;
        while (1) {
            printf("다시 시작하시겠습니까?[r/x]: ");
            scanf("%c", &check);
            switch (check) {
                case 'r':
                    break;
                case 'x':
                    exit(1);
                default:
                    printf("잘못된 입력입니다.");
                    continue;
            }
            break;
        }
        continue;
    }
}




