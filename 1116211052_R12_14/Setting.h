#pragma once

//変数の宣言
#define CHARBUFF 124
#define Month 12
#define Day 31
double data[Month][Day];
const char* file[Month];

//構造体の設定
struct com {
	int MoveNum;
	int point;
};

//関数の宣言
void getGurrentDirectory(char* currentDirectory);
void read_ini(const char* file[Month]);
void readFile(const char* file[Month], double data[Month][Day]);