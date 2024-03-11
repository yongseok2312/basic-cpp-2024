#include <iostream>
using namespace std;

int main(int num1, char* num2[]) {
	int a, b;
	cout << "정수 2개를 입력하세요: ";
	cin >> a >> b;

	cout << "+: " << a + b << endl;
	cout << "-: " << a - b << endl;
	cout << "*: " << a * b << endl;
	try {
		if (!b) throw a;
		cout << "/: " << a / b << endl;
	}
	catch (int exception) {
		cout << "0으로 나눌수 없습니다" << endl;
}
}