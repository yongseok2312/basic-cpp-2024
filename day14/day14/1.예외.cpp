#include <iostream>
using namespace std;

int main(int num1, char* num2[]) {
	int a, b;
	cout << "���� 2���� �Է��ϼ���: ";
	cin >> a >> b;

	cout << "+: " << a + b << endl;
	cout << "-: " << a - b << endl;
	cout << "*: " << a * b << endl;
	try {
		if (!b) throw a;
		cout << "/: " << a / b << endl;
	}
	catch (int exception) {
		cout << "0���� ������ �����ϴ�" << endl;
}
}