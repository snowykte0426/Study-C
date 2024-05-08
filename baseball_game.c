#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int computer(int computer_num[]) {
    srand(time(NULL));
    int i,check;
    for (i = 0; i < 3; i++) {
        computer_num[i] = rand() % 10;
        while (1) {
            check=0;
            if (i < 1) {
                printf("%d ", computer_num[i]);
                break;

            } else if (i == 1) {
                computer_num[1] == computer_num[0] ? computer_num[1] = rand() % 10,check=1 : printf("%d ", computer_num[i]);
                if(check>0){
                    continue;
                }else
                    break;

            } else if(i==2) {
                computer_num[2] == computer_num[0] && computer_num[2] == computer_num[1] ? computer_num[2] = rand() % 10,check=1
                                                                                         : printf("%d ",
                                                                                                  computer_num[i]);
                if(check>0){
                    continue;
                }else
                    break;
            }
        }
        }
    puts("");
}

void strike_and_ball(int s, int b) {
    printf("%dS, %dB\n", s, b);
}

int baseball_num(void) {
    int out_num[3], user_num[3], out, number;
    computer(out_num);
    out = 0, number = 1;
    while (out == 0) {
        printf("%dth Attempt\n", number);
        for (int i = 0; i < 3; i++) {
            scanf("%d", &user_num[i]);
        }
        int strike = 0, ball = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (user_num[i] == out_num[j]) {
                    if (i == j) {
                        strike++;
                    } else {
                        ball++;
                    }
                }

            }
        }
        if (strike > 1) {
            out++;
        } else {
            strike_and_ball(strike, ball);
            number++;
        }
    }
    puts("All match!!");
    return 0;
}