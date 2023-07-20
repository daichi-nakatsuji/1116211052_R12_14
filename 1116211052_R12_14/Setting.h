#pragma once

//•Ï”‚ÌéŒ¾
#define CHARBUFF 124
#define Month 12
#define Day 31
double data[Month][Day];

//\‘¢‘Ì‚Ìİ’è
struct com {
	int MoveTime;
	int DcTime;
	int BuyTime;
};

//ŠÖ”‚ÌéŒ¾
void getGurrentDirectory(char* currentDirectory);
void createManthdata();