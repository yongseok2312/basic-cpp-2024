// ���� �޸� �Ҵ� �� �Ҹ꿡 �ʿ��� �Լ� malloc(), free()
// C++������ malloc(), free() �� new , delete�� �޴´� 

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
	// strcpy ���� �����Ƿ� �Ӽ� - C/C++ - ��ó�������ǿ�  _CRT_SECURE_NO_WARNINGS ����
	cout << str << endl;
	free(str);
	return 0;
}
