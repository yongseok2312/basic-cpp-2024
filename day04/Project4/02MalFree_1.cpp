#include <iostream> 
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);  //C:heap������ 20Byte ũ��� �޸� �Ҵ� 
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	// strcpy ���� �����Ƿ� �Ӽ� - C/C++ - ��ó�������ǿ�  _CRT_SECURE_NO_WARNINGS ����
	cout << str << endl;
	free(str);
	return 0;
}
