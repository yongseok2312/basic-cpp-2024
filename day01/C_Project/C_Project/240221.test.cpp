#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	char c;
	int result = 0;
	cout << "�� ���� ������ �Է��ϼ��� > ";
	cin >> a >> b;
	
	cout << "�����ڸ� �Է��ϼ��� > ";
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
			cout << "0�� ������ �����ϴ�" << endl;
			return 0;
		}
		else {
			result = a / b;
		}
	}
	else
	{
		cout << "�߸� �ԷµǾ����ϴ�." << endl;
		return 0;
	}
	cout << result << "�Դϴ�." << endl;
	return 0;

}