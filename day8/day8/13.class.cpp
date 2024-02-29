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
		cout << "���� �̸��� " << Myname() << "�̰� ���̴� " << Myage() << "�̸� ��ȭ��ȣ��" << pNumber << "�Դϴ�." << endl;
	}
};

int main() {
	MyInfo s1("�̿뼮", 27, "010-000-0000");
	s1.PrintMyInfo();

	return 0;
}