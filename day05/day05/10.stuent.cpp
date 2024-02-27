//학번 이름 전공 나이 가지고 있는 클래스 작성
#include <iostream>

using namespace std; 

class StudentClass {
private:	
	const int ID;		// 학번을 상수화
	char name[20];		// 문자열 배열을 선언하고 바로 초기화 하지 않는 경우는 strcpy()를 통하여 초기화 한다. 
	char major[20];
	int age;

public:	
	// 문자열은 주소이기때문에 포인터 변수에 넣어서 사용 - 문장열의 첫번째 문자 주소가 저장된다. 
	StudentClass(int a, const char *uname, const char *m, int e) : ID(a) { //strcp를 사용시 무조건 const char *
		// int ID = a;  // : ID(a) 넣음으로써 주석처리 (ID(a) : 초기화- MemberInit)
		// 멤버이니셜라이즈(Member Initializer)는 객체 생성시 초기화되지 않는 멤버들을 초기화할때 사용
		// 즉, 객체 생성과 상관 없이 미리 초기화가 되는 멤버들에 초기화 
		strcpy(name, uname); // 문자열 초기화시 사용 
		strcpy(major, m);
		age = e;
	}

	void Printstudent() {
		cout << "학번:" << ID << "이름:" << name << "전공:" << major << "나이:" << age << "입니다" << endl;

	}
};

int main() {
	StudentClass sc1(2017013198,"이용석","1231",27); //객체를 생성하면 생성자를 호출해야한다. 
	sc1.Printstudent();
	return 0; 
}