#pragma once

#include "stdio.h"
#include "windows.h"
#include "stralign.h"
#include "stdlib.h"
#include "conio.h"
#include "stdbool.h"

#define pause system("pause > nul")
#define cls system("cls")

void SetColor(int color);
void CursorView(char show);
void gotoxy(int x, int y);
void box_print(void);
void login(void);
void signup(void);
void gameMenu(void);
void loginMenu(void);
void mainMenu(void);
