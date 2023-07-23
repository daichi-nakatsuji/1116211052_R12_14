#pragma once

//•Ï”‚ÌéŒ¾
#define CHARBUFF 124
#define Month 12
#define Day 31
double data[Month][Day];
const char* file[Month];

//\‘¢‘Ì‚Ìİ’è
struct com {
	int MoveNum;
	int point;
};

//ŠÖ”‚ÌéŒ¾
void getGurrentDirectory(char* currentDirectory);
void read_ini(const char* file[Month]);
void readFile(const char* file[Month], double data[Month][Day]);