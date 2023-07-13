#include "Setting.h"
#include <Windows.h>
#include <stdio.h>


void getGurrentDirectory(char* currentDirectory) {
	GetCurrentDirectory(CHARBUFF, currentDirectory);
}