#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1; // 뒤에 Null문자를 넣기에 +1 을 해야함
		name = new char[len];
		cout << "char 크기: " << sizeof(char) << endl;
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

