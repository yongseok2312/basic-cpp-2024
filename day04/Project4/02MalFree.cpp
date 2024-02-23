// 힙의 메모리 할당 및 소멸에 필요한 함수 malloc(), free()
// C++에서는 malloc(), free() 를 new , delete로 받는다 

#include <iostream> 
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main()
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	// strcpy 오류 있으므로 속성 - C/C++ - 전처리기정의에  _CRT_SECURE_NO_WARNINGS 설정
	cout << str << endl;
	free(str);
	return 0;
}
