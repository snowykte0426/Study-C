#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
enum{
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VIOLET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void List() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	printf("----------------------\n");
	printf("PCM(Pulse Code Modulation)의 과정 - 1\n연속 신호파형에서 나이키스트 표본화 주기 - 2\n");
	printf("EBCDIC(Extended BCD Interchange Code)에서 Zone 비트의 갯수 - 3\n순차 처리만 가능한 장치 - 4\n");
	printf("----------------------\n");
}
void Def_Sy() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
}
void Pulse_Code_Modulation() {
	printf("신호 → 표본화 → 양자화 → 부호화 → 복호화\n");
	return 1;
}

void Nyquist_Sampling_Theorem() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	printf("나이키스트 표본화 주기는 연속적인 신호파형에서 최고 주파수의 ½이다\nEx)W[Hz]일 때 나이키스트 표본화 주기는 ½W\n");
}

void Extended_BCD_Interchange_Code_Zone_bit() {
	printf("EBCDIC코드는 확장 2진화 10진 코드로 Zone은 4bit / Digit는 4bit로 구성\n8bit로 256가지 표현이 가능\n");
}
void Sequential_Access_Storage_Machine() {
	printf("자기 테이프(Magnetic Tape)가 순차 접근 기억 장치에 해당\n");
}
int main(void) {
	while (true)
	{	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		printf("찾으시는 항목의 번호를 입력해주세요(0를 입력하면 색인을 불러옵니다): ");
		int subject;
		scanf(" %d", &subject);
		if (subject == 0) {
			List();
			continue;
		}
		if (subject == 1) {
			Def_Sy();
			Pulse_Code_Modulation();
			continue;
		}
		if (subject == 2) {
			Nyquist_Sampling_Theorem();
			continue;
		}
		if (subject == 3) {
			Def_Sy();
			Extended_BCD_Interchange_Code_Zone_bit();
			continue;
		}
		else {
			switch (subject) {
				case 4:
					Def_Sy();
					Sequential_Access_Storage_Machine();
					continue;
			}
		}
	}
	return 0;
}