#pragma once

//•Ï”‚ÌéŒ¾
#define CHARBUFF 124

//\‘¢‘Ì‚Ìİ’è
struct com {
	int MoveTime;
	int DcTime;
	int BuyTime;
};

//ŠÖ”‚ÌéŒ¾
void getGurrentDirectory(char* currentDirectory);
void createAgent(const char* sec, com* name);