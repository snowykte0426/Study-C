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
	printf("PCM(Pulse Code Modulation)�� ���� - 1\n���� ��ȣ�������� ����Ű��Ʈ ǥ��ȭ �ֱ� - 2\n");
	printf("EBCDIC(Extended BCD Interchange Code)���� Zone ��Ʈ�� ���� - 3\n���� ó���� ������ ��ġ - 4\n");
	printf("----------------------\n");
}
void Def_Sy() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
}
void Pulse_Code_Modulation() {
	printf("��ȣ �� ǥ��ȭ �� ����ȭ �� ��ȣȭ �� ��ȣȭ\n");
	return 1;
}

void Nyquist_Sampling_Theorem() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	printf("����Ű��Ʈ ǥ��ȭ �ֱ�� �������� ��ȣ�������� �ְ� ���ļ��� ���̴�\nEx)W[Hz]�� �� ����Ű��Ʈ ǥ��ȭ �ֱ�� ��W\n");
}

void Extended_BCD_Interchange_Code_Zone_bit() {
	printf("EBCDIC�ڵ�� Ȯ�� 2��ȭ 10�� �ڵ�� Zone�� 4bit / Digit�� 4bit�� ����\n8bit�� 256���� ǥ���� ����\n");
}
void Sequential_Access_Storage_Machine() {
	printf("�ڱ� ������(Magnetic Tape)�� ���� ���� ��� ��ġ�� �ش�\n");
}
int main(void) {
	while (true)
	{	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		printf("ã���ô� �׸��� ��ȣ�� �Է����ּ���(0�� �Է��ϸ� ������ �ҷ��ɴϴ�): ");
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