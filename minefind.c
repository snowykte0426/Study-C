#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "Windows.h"

int minefind1(void) {
    char field[5][5] = {5,}, x1, y1, x2, y2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            field[i][j] = 'H';
    }
    srand(time(NULL));
    x1 = rand() % 5;
    y1 = rand() % 5;
    x2 = rand() % 5;
    y2 = rand() % 5;
    while (x1 == y1 == x2 == y2) {
        x2 = rand() % 5;
        y2 = rand() % 5;
    }
    field[x1][y1] = 'M';
    field[x2][y2] = 'M';
    unsigned short scx, scy, mine_cheaker = 0;
    printf("Áö·ÚÃ£±â¸¦ ½ÃÀÛÇÕ´Ï´Ù!\n");
    while (mine_cheaker <= 0) {
        printf("ÁÂÇ¥¸¦ ÀÔ·ÂÇÏ¼¼¿ä(5x5; XÁÂÇ¥ YÁÂÇ¥): ");
        scanf("%hu %hu", &scx, &scy);
        if (field[scx][scy] == 'M') {
            mine_cheaker++;
            field[scx][scy] = '!';
            printf("Æã!!\n");
        } else {
            field[scx][scy] = 'C';
            printf("°í¿äÇÏ´Ù...\n");
        }

    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", field[i][j]);
        }
        puts("");
    }

}

enum {
    RED,
    WHITE,
};

int minefind2(void) {
    srand(time(NULL));
    unsigned char mine_cheak = 1;
    int arr_x, arr_y, X, Y;
    scanf("%d %d", &arr_x, &arr_y);
    char field[arr_x][arr_y];
    for (int i = 0; i < arr_x; i++) {
        for (int j = 0; j < arr_y; j++) {
            field[i][j] = '0';
        }
    }
    int mine_get;
    arr_x -= 1;
    arr_y -= 1;
    scanf("%d", &mine_get);
    for (int i = 0; i < mine_get; i++) {
        X = rand() % arr_x;
        Y = rand() % arr_y;
        field[X][Y] = '*';
    }
    while (mine_cheak == 1) {
        printf("ÁÂÇ¥¸¦ ÀÔ·ÂÇÏ¼¼¿ä(%dx%d; XÁÂÇ¥ YÁÂÇ¥): ", arr_x + 1, arr_y + 1);
        scanf("%d %d", &X, &Y);
        if (field[X - 1][Y - 1] == '*') {
            mine_cheak++;
            printf("Æã!!\n");
            field[X][Y] = '!';
        } else {
            printf("°í¿äÇÏ´Ù...\n");
        }
    }
    for (int i = 0; i < arr_x; i++) {
        for (int j = 0; j < arr_y; j++) {
            if (field[i][j] == '!') {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
                printf("%c ", field[i][j]);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
            } else
                printf("%c ", field[i][j]);
        }
        puts("");
    }
}