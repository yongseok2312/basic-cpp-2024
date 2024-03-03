#include <iostream>
using namespace std;

class Person {
	char* name;
	int age;
public:
	Person(const char* aname, int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		age = aage;
		
	}

	Person(const Person& r) {
		name = new char[strlen(r.name) + 1];
		strcpy(name, r.name);
		age = r.age;
		
	}

	~Person() {
		cout << "제거" << endl;
		delete[]name;
	}


	void PersonInfo() {

		cout << "이름: " << name << "나이: " << age << endl;

	}

};


int main() {
	Person p("xxx", 30);
	p.PersonInfo();
	Person copyp(p);
	copyp.PersonInfo();
	return 0;
}
