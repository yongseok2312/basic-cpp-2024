#include <iostream>
using namespace std;

int main() {
	int a = 0;
	for (int a = 0; a > -1; a) {
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> a;

		if (a > -1) {
			cout << "�̹� �� �޿�: " << 50 + a * 0.12 << "����" << endl;
		}
		else
			cout << "���α׷��� �����մϴ�" << endl;
		exit;
	}
}