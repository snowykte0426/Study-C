#include <stdio.h>
int main(){

	int a = 0;
	
	printf("1개의 값을 입력하세요: ");
	scanf_s("%d", &a); 
	printf("%d는 8진수 %o입니다.\n", a, a);
	printf("%d는 16진수 %x입니다.\n", a, a);
	printf("%d는 아스카코드 %c입니다.\n", a, a); 
	
	
	return 0;
}

int main() {
	char a = 'h', b = 'e', c = '1', d = 'o', e = ' ';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar(c);
	putchar(d);
	putchar(e);
	puts("wolrd");
	return 0;
}
