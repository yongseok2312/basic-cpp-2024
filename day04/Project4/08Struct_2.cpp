//C++ 클래스 : 클래스 멤버로 멤버 변수와 멤버 함수를 가진다.

#include <iostream>

typedef class human {         // human 이라는 클래스 설정 
public: 	
	char name[20];			   
	int age;			       // 멤버변수 3개 (name, age, job)
	char job[20];

	void showHuman()	   // 멤버함수
	{
		printf("name:%s age:%d job:%s\n", name, age, job);
	}

}Human;					     


int main()
{
	int a = 10;
	//human h1 = { "홍길동", 50, "의적" }; // human 타입의 변수를 선언하고 초기화를 시킨다
	//h1.showHuman();
	Human h1 = { "홍길동", 50, "의적" } ;
	h1.showHuman();

	return 0;
}
