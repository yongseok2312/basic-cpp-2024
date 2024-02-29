#include <iostream>
using namespace std;

class Person {
private:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage) {
		cout << "부모 생성자 실행" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void Whatyouname() const {
		cout << "My name is " << name << endl;

	}
	void HowOldAreYou() const {
		cout << "My age is " << age << endl;
	}
	

};

class UnivStudent :public Person {	//상속
	string major;	//확장내용은 작성하면 댐 // 문자열 string
public: 
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage) {	// 부모 생성자 호출하여 초기화 시킴
		cout << "자식 생성자 실행" << endl;
		this->major = major;

	}
	void  WhoAreYou() const {	// 부모 클래스 함수 가져와서 사용 가능
		Whatyouname();
		HowOldAreYou();
	}
	void Whatyourmajor() const {
		cout << "My major is " << major << endl;
	}

};



int main() {

	UnivStudent S("이용석", 27, "고분자 공학과");
	S.WhoAreYou();
	S.Whatyourmajor();
	return 0;
}