/*
C에서 메모리
스택 : 지역변수, 매개변수
heap : 사용자에게 할당된 영역
	malloc()할당 - free()반환
data: 함수, 전역변수, 상수, 문자리터럴

컴퓨터에서 뺄셈 하는 방법: 보수(더해서 10이되는)를 더하여 10의 자리를 뺌
	*/
#include <iostream>
using namespace std;

int main() {
	const int num = 10;

	int num1 = 10;
	int *pnum1;			// 포인터(주소) 변수 pnum1 선언 *는 그냥 기호
	pnum1 = &num1;	// 변수 num1의 주소값을 포인터변수 pnum1에 저장한다. &주소연산자
	

	cout << "num에 저장된 값: "<< num << endl;
	cout << "num1에 저장된 값: "<<num1 << endl;
	cout << "num1에 주소 값: " << &num1 << endl;
	cout << "pnum1에 저장된 값: "<<pnum1 << endl;
	cout << "pnum1에 데이터 값: " << *pnum1 << endl;


	return 0;
}