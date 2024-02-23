#include <iostream> 
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
	// char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];  // C++ : 힙 영역에 len 크기만큼 메모리 공간 할당
	return str;
}

int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");

	cout << str << endl;
	// free(str);
	delete[] str;  // C++: 할당 받은 메모리를 반환 
	return 0;
}

// 속성 - 일반 - SDL -> 아니요