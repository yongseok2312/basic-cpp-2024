#include <iostream>
using namespace std;

void Counter() {
	static int cnt;			// static�� ����ϸ� �Լ��� ���� ������ �Ҹ� ���� ���� �� ������ ũ�Ⱑ �״��
	cnt++;
	cout << "Current cnt: " << cnt << endl;

}
int main() {
	for (int i = 0; i < 10; i++) // counter �Լ��� for�� ���
		Counter();
	return 0;
};