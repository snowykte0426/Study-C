#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "windows.h"
int main(void){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	srand(time(NULL));
	int i,j,n;
	for(i=0;1;i++){
		j=rand()%1000;
		n=rand()%10000;
		printf("%d%d%d ",i,j,n);
	}
	return 0;
}
