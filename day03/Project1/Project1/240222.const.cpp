/*
const
*/

#include <iostream>
using namespace std;

int global = 100;	// ��������
int global1 = 200;

int main()
{
	const int num = 10;	//const ���� -> num������ ���ȭ(������)��Ų��.
	//num = 100;

	cout << num << endl;

	return 0;

}
