//C++ 타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버 함수를 가진다.

#include <iostream>

typedef struct human {         // human 이라는 구조체 설정 
	char name[20];			   // 구조체 속성 = 멤버변수   
	int age;			       // human 구조체 안에 멤버변수 3개 (name, age, job)
	char job[20];

	void showHuman()	   // 멤버함수
	{
		printf("name:%s age:%d job:%s\n", name, age, job);
	}

}Human;					       // 앞으로 haman 구조체를 Human으로 사용하겠다. (typedef를 안쓰면 struct human 풀로 써야함)


int main()
{
	int a = 10;
	Human h1 = { "홍길동", 50, "의적" }; // human 타입의 변수를 선언하고 초기화를 시킨다
	h1.showHuman();


	return 0;
}
