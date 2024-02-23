//C 타입의 구조체 : 멤버로 멤버 변수만 가진다. 

#include <stdio.h>

typedef struct human {         // human 이라는 구조체 설정 
	char name[20];			   // 구조체 속성 = 멤버변수   
	int age;			       // human 구조체 안에 멤버변수 3개 (name, age, job)
	char job[20];

}Human;					       // 앞으로 haman 구조체를 Human으로 사용하겠다. 

void showHuman(Human h)
{
	printf("name:%s age:%d job:%s\n", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	Human h1 = { "홍길동", 50, "의적" }; // human 타입의 변수를 선언하고 초기화를 시킨다
	showHuman(h1);


	return 0; 
}


