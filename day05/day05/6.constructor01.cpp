#include <iostream>
using namespace std;

class MyClass {
	int num;

public:
	MyClass() {	// defalt ������ --> �Է��� �ް� ���� ���� ������
		cout <<"������ ȣ��" << endl;
		num = 10;
		//cout << num << endl;
	}
	MyClass(int anum) {
		num = anum;
		cout << num << endl;
	}
	void MyClassinfo() {
		cout << "num" << num << endl;
	}
};

int main() {
	
	//MyClass* m = new MyClass();
	MyClass m; // ��ü���� ������� �����ڴ� �ڵ� ȣ�� ��
	MyClass m2(20);
	m2.MyClassinfo();


	return 0;
}