#include "Setting.h"
#include <Windows.h>
#include <stdio.h>


void getGurrentDirectory(char* currentDirectory) {
	GetCurrentDirectory(CHARBUFF, currentDirectory);
}

void createAgent(const char* sec, com* name) {
	char currentDirectory[CHARBUFF];
	getGurrentDirectory(currentDirectory);

	char section[CHARBUFF];
	sprintf_s(section, sec);
	char keyWord1[CHARBUFF];
	sprintf_s(keyWord1, "move");
	char settingFile[CHARBUFF];
	sprintf_s(settingFile, "%s\\setting.ini", currentDirectory);
	int move = GetPrivateProfileInt(section, keyWord1, -1, settingFile);
	name->MoveTime = move;
	fprintf_s(stdout, "%d\n", name->MoveTime);
}