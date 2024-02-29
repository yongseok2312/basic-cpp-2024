#include <iostream>
using namespace std;

class Person {
private:
	char* name;
public:
	Person(const char* myname) {
		name = new char [strlen(myname) + 1];
		strcpy(name, myname);

	}
	~Person() {
		delete[]name;

	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
};
class UniverStudent : public Person {
private:
	char* major;
public:
	UniverStudent(const char* myname,const char* mymajor) : Person(myname) {
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UniverStudent() {
		delete[]major;
	}
	void WjpAreUpi()const {
		WhatYourName();
		cout << "My major is " << major << endl;
	}
};

int main() {
	UniverStudent st1("kim", "mathematics");
	st1.WjpAreUpi();
	UniverStudent st2("Hong", "physics");
	st2.WjpAreUpi();
	return 0;
};