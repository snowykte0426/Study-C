#pragma once

#include "mysql.h"
#include "mariadb/ma_io.h"

unsigned short sign_up_db(char id[], char password[]);
unsigned short sign_in_db(char id[], char password[]);
void db_close(MYSQL* conn);