#include <iostream>
using namespace std;

class Myclass {
private:
	char name[30];
	int age;
public:
	Myclass(const char* aname, int myage) :age(myage) {
		strcpy(name, aname);
	}
	string Myname() { return name; }
	int Myage() { return age; }

};

class MyInfo :public Myclass {
private:
	string pNumber;
public:
	MyInfo(const char* aname, int myage, const char* pNumber) :Myclass(aname, myage) {
		this-> pNumber=pNumber;
	}
	void PrintMyInfo() {
		cout << "나의 이름은 " << Myname() << "이고 나이는 " << Myage() << "이며 전화번호는" << pNumber << "입니다." << endl;
	}
};

int main() {
	MyInfo s1("이용석", 27, "010-000-0000");
	s1.PrintMyInfo();

	return 0;
}