#pragma once
//#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

namespace doIP204 {
	char* name() {
		char* arr = (char*)malloc(10); 
		strcpy(arr, "Amina");
		return arr;
	}
}