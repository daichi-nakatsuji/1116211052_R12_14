#pragma once

//•Ï”‚ÌéŒ¾
#define CHARBUFF 124
#define Month 12
#define Day 31
double data[Month][Day];
char file[Month][CHARBUFF];

//\‘¢‘Ì‚Ìİ’è
struct Player {
	int Num;
	int month;
	int MoveNum;
	int point;
};

//ŠÖ”‚ÌéŒ¾
void getGurrentDirectory(char* currentDirectory);
void read_ini(char file[Month][CHARBUFF]);
void readFile(char file[Month][CHARBUFF], double data[Month][Day]);
