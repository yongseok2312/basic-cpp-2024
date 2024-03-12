#include <iostream>
using namespace std;

void cal(int a, int  b) {
	if (!b) throw b;
	cout << "+: " << a + b << endl;
	cout << "-: " << a - b << endl;
	cout << "*: " << a * b << endl;
	cout << "/: " << a / b << endl;
}


int main(int num1, char* num2[]) {
	int a, b;
	cout << "정수 2개를 입력하세요: ";
	cin >> a >> b;
	try {
		
		cal(a, b);
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다" << endl;
	}
	/*try {
		if (!b) throw a;
		cout << "/: " << a / b << endl;
	}
	catch (int exception) {
		cout << "0으로 나눌수 없습니다" << endl;
		*/

	return 0;
}