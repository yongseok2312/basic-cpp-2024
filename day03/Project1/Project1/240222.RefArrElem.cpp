#include <iostream>
using namespace std;

int main() {

	int arr[3] = { 1,3,5,7,9 };	// �迭 ����
	for (int i = 0; i < 5; i++) {
		cout << i << "��° �濡 ����ִ� ��Ұ�: " << arr[i] << endl;//�迭�� �� ���ҿ� ����
	}
	arr[3] = 10;
	cout << "arr[3]: " << arr[3] << endl;

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];
	
	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	return 0;
}