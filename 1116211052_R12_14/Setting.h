#pragma once

//�ϐ��̐錾
#define CHARBUFF 124
#define Month 12
#define Day 31
double data[Month][Day];
const char* file[Month];

//�\���̂̐ݒ�
struct com {
	int MoveNum;
	int point;
};

//�֐��̐錾
void getGurrentDirectory(char* currentDirectory);
void read_ini(const char* file[Month]);
void readFile(const char* file[Month], double data[Month][Day]);