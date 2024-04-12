#include "stdio.h"

int testbaed(void) {
    long long CHEAKER = 0, PePCG = 0, *PTR_CHEAKER;
    scanf("%lld %lld", &CHEAKER, &PePCG);
    PTR_CHEAKER = &CHEAKER;
    if (CHEAKER < 10000)
        printf("%lld", CHEAKER);
    else
        printf("%x\n%lld", PTR_CHEAKER, PePCG);
    return 0;
}

int array_plus(int A, int B, int array[]) {
    for (; A <= B; A++) {
        array[100] += array[A];
    }
    return array[100];
}

int array_plus_main(void) {
    int arr[101];
    int a, b;
    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }
    scanf("%d %d", &a, &b);
    arr[100] = array_plus(a, b, arr);
    printf("%d", arr[100]);
    return 0;
}


int average(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum / 5;
}

int average_main(void) {
    int student_score[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &student_score[i]);
    }
    int result = average(student_score);
    printf("%d", result);
}

char Big_Smoll(char c) {
    if (c >= 65 && c <= 90)
        return 'A';
    else if (c >= 91 && c <= 122) {
        return 'a';
    } else {
        return '?';
    }
}

int Big_Smoll_main(void) {
    char c1;
    scanf("%c", &c1);
    int result = Big_Smoll(c1);
    printf("%c", result);
    return 0;
}


int star(int X,int Y){
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            printf("*");
        }
        puts("");
    }
    return 1;
}

int star_main(void){
    int x,y;
    scanf("%d %d",&x,&y);
    star(x,y);
    return 0;
}

char string_r(char arr[]){
    for(int i=49;i>=0;i--){
        if(arr[i]!=NULL||arr[i]!=0){
            printf("%c",arr[i]);
        }
    }
}
int string_r_main(void){
    char string[50]={0,};
    scanf("%s",&string);
    string_r(string);
    return 0;
}

int fibo(int N) {
    int result;
    if (N > 1)
        return fibo(N - 1) + fibo(N - 2);
    else if (N == 0)
        return 0;
    else if (N == 1)
        return 1;
}

int fibo_main(void) {
    int n, result;
    scanf("%d", &n);
    result = fibo(n);
    printf("%d", result);
}
int factorial(int N){
    if(N>1)
        return N* factorial(N-1);
    else if(N==1)
        return 1;
}
int factorial_main(void){
    int n,result;
    scanf("%d",&n);
    result=factorial(n);
    printf("%d",result);
    return 0;
}
int change(int n){
    if(n==1||n==0)
        printf("%d",n);
    else{
        change(n/2);
        printf("%d",n%2);
    }
}
int change_main(void){
    int num;
    scanf("%d",&num);
    change(num);
    return 0;
}