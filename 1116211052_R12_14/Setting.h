#pragma once

//変数の宣言
#define CHARBUFF 124

//構造体の設定
struct com {
	int MoveTime;
	int DcTime;
	int BuyTime;
};

//関数の宣言
void getGurrentDirectory(char* currentDirectory);
void createAgent(const char* sec, com* name);