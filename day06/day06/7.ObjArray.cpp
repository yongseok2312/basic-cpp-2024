/*
객체 배열
*/

# include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;
public:
	Human(const char * aname, int aage){
		cout << "생성자 호출" << endl;
		strcpy(name, aname);
		age = aage;
	}
	void PrintHuman() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Human() {
		cout << "소멸자 호출" << endl;
		delete []name;
		
	}
};

int main() {
	Human h[3] = {Human("홍길동",40),Human("바보",20),Human("영희",32)}; //객체 배열  객체 h[0]-[0]출력,h[1]-[1],h[2]-[2]

	for (int i = 0; i < 3; i++) {		// h1.printhuman,h2.printhuman,h3.printhuman
			
		h[i].PrintHuman();				// 객체 배열은 .으로 접근
	}


	Human *h1 = new Human("가나다", 50);	// 객체 포인터 배열은 arrow 연산자 사용 // human클래스 안에 h1주소에 객체 힙메모리에 가나다,50을 할당
	
	h1->PrintHuman();

	delete h1;


	return 0;
}
