#include <Windows.h>
#include <stdio.h>
#define CHARBUFF 124
#define Month 12

void getGurrentDirectory(char* currentDirectory) {
	GetCurrentDirectory(CHARBUFF, currentDirectory);
}

void createManthdata() {
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
	char keyValue[CHARBUFF];

	char file1 = GetPrivateProfileString(section, keyWord1, "none", keyValue, CHARBUFF, settingFile);
	char file2 = GetPrivateProfileString(section, keyWord2, "none", keyValue, CHARBUFF, settingFile);
	char file3 = GetPrivateProfileString(section, keyWord3, "none", keyValue, CHARBUFF, settingFile);
	char file4 = GetPrivateProfileString(section, keyWord4, "none", keyValue, CHARBUFF, settingFile);
	char file5 = GetPrivateProfileString(section, keyWord5, "none", keyValue, CHARBUFF, settingFile);
	char file6 = GetPrivateProfileString(section, keyWord6, "none", keyValue, CHARBUFF, settingFile);
	char file7 = GetPrivateProfileString(section, keyWord7, "none", keyValue, CHARBUFF, settingFile);
	char file8 = GetPrivateProfileString(section, keyWord8, "none", keyValue, CHARBUFF, settingFile);
	char file9 = GetPrivateProfileString(section, keyWord9, "none", keyValue, CHARBUFF, settingFile);
	char file10 = GetPrivateProfileString(section, keyWord10, "none", keyValue, CHARBUFF, settingFile);
	char file11 = GetPrivateProfileString(section, keyWord11, "none", keyValue, CHARBUFF, settingFile);
	char file12 = GetPrivateProfileString(section, keyWord12, "none", keyValue, CHARBUFF, settingFile);

	fprintf_s(stdout, "%s\n", file1);
}