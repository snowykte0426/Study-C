#include <stdio.h>
int main1(){

printf("------------------------------\n");
printf("상품명\t총수량\t재고\t가격\n------------------------------\n");
printf("%s\t%d\t%d\t%d\n%s\t%d\t%d\t%d\n%s%d\t%d\t%d\t%d\n", "G5", 100, 45, 965000, "S7", 200, 145, 985000, "NOTE", 5, 35, 2, 1105000);
printf("------------------------------\n");
return 0;
}
int main() {
	int age = 0;
	char name[100], bloodtype[100], a = 0;
	printf("이름을 입력하세요\n");
	gets(name);
	printf("나이를 입력하세요\n");
	scanf_s(" %d", &age);
	printf("혈액형을 입력하세요\n");
	getchar(a);
	gets(bloodtype);
	printf("\n%s(%d살, %s형)", name, age, bloodtype);




	return 0;
}
