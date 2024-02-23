#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple // 클래스 Simple
{
public:
	Simple() // 함수 Simple => 생성자(클래스와 이름이 같은 함수)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;   // 5행에 정의된 자료형을 근거로, new연산자를 사용하여 힙 영역에 변수 할당

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);  // malloc 함수로 메모리 할당

	cout << endl << "end of main" << endl;
	delete sp1;		// 동적으로 할당된 객체 삭제, 객체를 반환
	free(sp2);		// malloc으로 할당된 메모리 해제
	return 0;
}

/*
1. delete 연산은 동적으로 할당된 객체를 삭제하고 해당 객체의 소멸자를 호출.
2. malloc 함수로 할당된 메모리에 대해 -> free 함수를 호출하여 메모리를 해제해야 함.
*/