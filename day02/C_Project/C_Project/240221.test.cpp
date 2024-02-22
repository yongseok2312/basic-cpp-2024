#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	char c;
	int result = 0;
	cout << "두 개의 정수를 입력하세요 > ";
	cin >> a >> b;
	
	cout << "연산자를 입력하세요 > ";
	cin >> c;
	if (c == '+') {
		result = a + b;	
	}
	else if (c == '-') {
		result = a - b;
	}
	else if (c == '*') {
		result = a * b;
	}
	else if (c == '/') {
		if (b == 0) {
			cout << "0은 나눌수 없습니다" << endl;
			return 0;
		}
		else {
			result = a / b;
		}
	}
	else
	{
		cout << "잘못 입력되었습니다." << endl;
		return 0;
	}
	cout << result << "입니다." << endl;
	return 0;

}