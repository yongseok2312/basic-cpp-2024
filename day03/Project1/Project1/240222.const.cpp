/*
const
*/

#include <iostream>
using namespace std;

int global = 100;	// 전역변수
int global1 = 200;

int main()
{
	const int num = 10;	//const 고정 -> num변수를 상수화(고정값)시킨다.
	//num = 100;

	cout << num << endl;

	return 0;

}
