#include <iostream> 
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
	// char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];  // C++ : �� ������ len ũ�⸸ŭ �޸� ���� �Ҵ�
	return str;
}

int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");

	cout << str << endl;
	// free(str);
	delete[] str;  // C++: �Ҵ� ���� �޸𸮸� ��ȯ 
	return 0;
}

// �Ӽ� - �Ϲ� - SDL -> �ƴϿ�