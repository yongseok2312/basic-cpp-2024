#include <iostream> 
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);  //C:heap영역에 20Byte 크기로 메모리 할당 
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	// strcpy 오류 있으므로 속성 - C/C++ - 전처리기정의에  _CRT_SECURE_NO_WARNINGS 설정
	cout << str << endl;
	free(str);
	return 0;
}
