#pragma once

//変数の宣言
#define CHARBUFF 124
#define Month 12
#define Day 31
double data[Month][Day];
char file[Month][CHARBUFF];

//構造体の設定
struct Player {
	int Num;
	int month;
	int MoveNum;
	int point;
};

//関数の宣言
void getGurrentDirectory(char* currentDirectory);
void read_ini(char file[Month][CHARBUFF]);
void readFile(char file[Month][CHARBUFF], double data[Month][Day]);
