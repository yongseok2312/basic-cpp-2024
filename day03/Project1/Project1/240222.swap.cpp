
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	cout << "바꾸기 전" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	int temp; //temp에다가 a 값을 저장해둠으로써 a = b로 정의할때 a 값이 사라지지 않도록 함
	temp = a;
	a = b;
	b = temp;

	cout << "바꾸기 후" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;


	return 0;

}
