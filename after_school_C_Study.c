#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"

int plus(int num1, int num2) {
    return num1 + num2;
}

int maius(int num1, int num2) {
    return num1 - num2;
}

int multiplication(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

int square(int number) {
    return pow(number, 2);
}

int max(int arr[]) {
    int max_n = arr[0];
    for (int i = 1; i < 5; i++) {
        if (max_n < arr[i])
            max_n = arr[i];
    }
    return max_n;
}

int min(int arr[]) {
    int min_n = arr[0];
    for (int i = 1; i < 5; i++) {
        if (min_n > arr[i])
            min_n = arr[i];
    }
    return min_n;
}

void common_divisor(int num1, int num2) {
    for (int i = 1; i <= num1 && i <= num2; i++)
        if (num1 % i == 0 && num2 % i == 0)
            printf("%d ", i);
}

int Factorial(int n) {
    if (n > 1)
        return n * Factorial(n - 1);
    else if (n == 1)
        return 1;
}

int all_cau(void) {
    int check, n1, n2, array[5];
    printf("원하시는 계산유형을 입력해주세요[1~8]: ");
    scanf("%d", &check);
    switch (check) {
        case 1:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            printf("%d\n", plus(n1, n2));
            break;
        case 2:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            printf("%d\n", maius(n1, n2));
            break;
        case 3:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d\n", &n1, &n2);
            printf("%d\n", multiplication(n1, n2));
            break;
        case 4:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            printf("%d\n", division(n1, n2));
            break;
        case 5:
            printf("수 1개를 입력해주세요[ex)5]: ");
            scanf("%d", &n1);
            printf("%d\n", square(n1));
            break;
        case 6:
            printf("수 5개를 입력해주세요[ex)1 2 6 2 1]: ");
            for (int i = 0; i < 5; i++)
                scanf("%d", &array[i]);
            printf("최댓값: %d\n최솟값: %d\n", max(array), min(array));
            break;
        case 7:
            printf("수 2개를 입력해주세요[ex)1 2]: ");
            scanf("%d %d", &n1, &n2);
            common_divisor(n1, n2);
            break;
        case 8:
            printf("수 1개를 입력해주세요[ex)5]: ");
            scanf("%d", &n1);
            printf("%d", Factorial(n1));
            break;
    }
    return 0;
}

short min_array(short arr[], short n) {
    short min = arr[0];
    for (int i = 0; i < n; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

short max_array(short arr[], short n) {
    short max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int minmax(void) {
    short num;
    printf("num값을 입력해주세요(배열의 칸 갯수): ");
    scanf("%u", &num);
    short array[num];
    srand(time(NULL));
    for (int i = 0; i < num; i++)
        array[i] = rand() % 1000;
    printf("min/max 모드를 선택해주세요[min/max]: ");
    char mod[10] = {0,};
    while (1) {
        scanf("%s", &mod);
        if (mod == "min") {
            printf("최솟값이 들어있는 인덱스는 %u입니다.", min_array(array, num));
            break;
        } else if (mod == "max") {
            printf("최댓값이 들어있는 인덱스는 %u입니다.", max_array(array, num));
            break;
        } else {
            printf("올바르지 않은 입력입니다.\n");
            continue;
        }
    }
}

char updown(int user, int rand);

int updown_main(void) {
    srand(time(NULL));
    int random = rand() % 99+1, user_num;
    char check;
    puts("updown 게임 시작!!");
    while (1) {
        printf("\n숫자를 입력해주세요!!\n> ");
        scanf("%d", &user_num);
        check = updown(user_num, random);
        if (check == 'u') {
            printf("\nup!\n");
            continue;
        } else if (check == 'd') {
            printf("\ndown!\n");
            continue;
        } else if (check == 't') {
            printf("\n정답!!!\n");
            return 0;
        } else if (check == 'e') {
            printf("\n오류발생\n");
            exit(0);
        } else if (check == 'l') {
            printf("실패...");
            exit(1);
        }
    }
}

char updown(int user, int rand) {
    static short count = 5;
    if (user == rand) {
        count--;
        printf("남은 횟수:%u!!", count);
        return 't';
    }
    if (count <= 1) {
        return 'l';
    } else if (user < rand) {
        count--;
        printf("남은 횟수:%u!!", count);
        return 'u';
    } else if (user > rand) {
        count--;
        printf("남은 횟수:%u!!", count);
        return 'd';
    } else {
        count--;
        return 'e';
    }
}
int attack_muk(int win);
int muk_main(void){
    printf("가위바위보![0=보,1=가위,2=바위]\n");
    srand(time(NULL));
    int user;
    short ai_put,win_lose=0;
    while (1) {
        printf(">");
        ai_put = rand() % 2;
        scanf("%s", &user); //0=보 1=가위 2=바위
        if (user == 0) {
            switch (ai_put) {
                case 0:
                    printf("비겼습니다\n");
                    continue;
                case 1:
                    printf("졌습니다...방어로 시작합니다\n");
                case 2:
                    printf("이겼습니다!공격으로 시작합니다!\n");
                    win_lose++;
                  //  attack_muk(win_lose);
                default:
                    printf("오류...");
                    exit(0);
            }
        }
    }
}
int muk(){
    printf(">");
    int user,ai;
    srand(time(NULL));

}
/*
int attack_muk(int win){
    int ai,user;
    printf("묵찌빠![0=보,1=가위,2=바위]");
    while (1){
        ai=rand()%2;
        printf(">");
        scanf("%d",&user);
        if(user==ai)
            printf("승리!");
        else if(user!=ai)
            switch (user) {
                case 0:
                    switch (ai) {
                        if (ai == 1)



                    }

            }
    }
}*/
