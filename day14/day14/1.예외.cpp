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
	cout << "���� 2���� �Է��ϼ���: ";
	cin >> a >> b;
	try {
		
		cal(a, b);
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�" << endl;
	}
	/*try {
		if (!b) throw a;
		cout << "/: " << a / b << endl;
	}
	catch (int exception) {
		cout << "0���� ������ �����ϴ�" << endl;
		*/

	return 0;
}