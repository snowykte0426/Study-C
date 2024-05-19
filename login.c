#include "superclass.h"

void sign_in(void) {
	MYSQL db_key;
	mysql_init(&db_key);
	gotoxy(42, 9);
	printf("Sing in\n");
}