#include <iostream>
using namespace std;

int main() {
	
	int a = 0;
	cout << "������ ���� ���Ͻÿ�\n";
	cin >> a;
	for (int i = 1; i <= 9; i++) {
		cout << a << "X" << i << "=" << a * i << endl;
		
	}
	return 0;
}