#pragma once

//�ϐ��̐錾
#define CHARBUFF 124
#define Month 12
#define Day 31
double data[Month][Day];
char* file[Month];
//�\���̂̐ݒ�
struct com {
	int MoveTime;
	int DcTime;
	int BuyTime;
};

//�֐��̐錾
void getGurrentDirectory(char* currentDirectory);
void createManthdata(char* file[Month]);