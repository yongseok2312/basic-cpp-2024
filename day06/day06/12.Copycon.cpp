/*
���� ������: ��ü�� ������ �� ȣ�� �Ǵ� ������
���� ������ ��ü�� �Է����� �������ϴµ� �� �� ���� ��ü�� ������ �Է����� �޴´�.
*/

#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "����Ʈ ������ ȣ��" << endl;

	}
	A(int n) {
		cout << "A(int n)����Ʈ ������ ȣ��" << endl;

	}
	A(const A& r) {	// ���� ������
		cout << "A(const A& r)����Ʈ ������ ȣ��" << endl;

	}
};
int main() {
	A obj1;	// ����Ʈ ������
	A obj2(10);// �Է� �ϳ� ������ ������
	A obj3(obj2); //obj2 ����
	return 0;
}