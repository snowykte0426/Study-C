#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define	UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

#include"stdio.h"
#include"Windows.h"
#include"mysql.h"
#include "conio.h"
#include "stralign.h"

#pragma comment (lib,"libmariadb.lib")
#pragma comment(lib, "user32.lib")

void ASCII_Art_print(void);
void Program_config(void);
void loginmenuDraw(void);
void CursorView(char show);