#include <iostream>
using namespace std;

/*
swap 함수 구현하기
*/
void swap(int*aa, int* bb) {	// 주소를 받을 수 있는 포인터변수를 선언

	int temp = *aa;				// 주소의 데이터를 참조
	*aa = *bb;
	*bb = temp;				//temp = literal
}

int main() {

	int a = 10;
	int b = 20;

	cout << "before: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	


	swap(&a, &b);	//변수의 주소를 전달

	

	cout << "after: " << endl;
	cout << "a: " << a <<endl;
	cout << "b: " << b <<endl;
	return 0;

}
