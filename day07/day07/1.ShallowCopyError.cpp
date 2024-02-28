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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;

	}
	Person(const Person& r) {	//깊은 복사
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

/* int func(int a) {		// 복사 개념을 통해 받아옴
	a = 10 + a;
	return a;
}
int num = 10;				// num , a ,res 등 다른 개념
int res = func(num);
*/
