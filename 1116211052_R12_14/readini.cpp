#include <Windows.h>
#include <stdio.h>
#define CHARBUFF 124
#define Month 12

void getGurrentDirectory(char* currentDirectory) {
	GetCurrentDirectory(CHARBUFF, currentDirectory);
}

void read_ini(char file[Month][CHARBUFF]) {
	char currentDirectory[CHARBUFF];
	getGurrentDirectory(currentDirectory);

	char section[CHARBUFF];
	sprintf_s(section, "section1");
	char keyWord1[CHARBUFF];
	char keyWord2[CHARBUFF];
	char keyWord3[CHARBUFF];
	char keyWord4[CHARBUFF];
	char keyWord5[CHARBUFF];
	char keyWord6[CHARBUFF];
	char keyWord7[CHARBUFF];
	char keyWord8[CHARBUFF];
	char keyWord9[CHARBUFF];
	char keyWord10[CHARBUFF];
	char keyWord11[CHARBUFF];
	char keyWord12[CHARBUFF];
	sprintf_s(keyWord1, "keyword1");
	sprintf_s(keyWord2, "keyword2");
	sprintf_s(keyWord3, "keyword3");
	sprintf_s(keyWord4, "keyword4");
	sprintf_s(keyWord5, "keyword5");
	sprintf_s(keyWord6, "keyword6");
	sprintf_s(keyWord7, "keyword7");
	sprintf_s(keyWord8, "keyword8");
	sprintf_s(keyWord9, "keyword9");
	sprintf_s(keyWord10, "keyword10");
	sprintf_s(keyWord11, "keyword11");
	sprintf_s(keyWord12, "keyword12");
	char settingFile[CHARBUFF];
	sprintf_s(settingFile, "%s\\setting.ini", currentDirectory);
	char keyValue[12][CHARBUFF];

	GetPrivateProfileString(section, keyWord1, "none", keyValue[0], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord2, "none", keyValue[1], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord3, "none", keyValue[2], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord4, "none", keyValue[3], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord5, "none", keyValue[4], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord6, "none", keyValue[5], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord7, "none", keyValue[6], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord8, "none", keyValue[7], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord9, "none", keyValue[8], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord10, "none", keyValue[9], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord11, "none", keyValue[10], CHARBUFF, settingFile);
	GetPrivateProfileString(section, keyWord12, "none", keyValue[11], CHARBUFF, settingFile);
	
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < CHARBUFF; j++) {
			file[i][j] = keyValue[i][j];
		}
	}
}