#include <iostream>
#include <cstring>
using namespace std;
#define  _CRT_SECURE_NO_WARNINGS

class Person {
private:
	char* name;
	int age;
public:
	Person(const char * myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;

	}
	Person(const Person& r) {	//���� ����
		this->name = new char[strlen(r.name) + 1];
		strcpy(this->name, r.name);
		this->age = r.age;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

/* int func(int a) {		// ���� ������ ���� �޾ƿ�
	a = 10 + a;
	return a;
}
int num = 10;				// num , a ,res �� �ٸ� ����
int res = func(num);
*/
