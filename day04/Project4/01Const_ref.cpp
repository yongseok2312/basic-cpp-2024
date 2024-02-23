#include <iostream> 

int main()
{
	/*
	const int num = 10; // 상수를 선언할때는 바로 초기화 해야함 
	int& ref = num;     // 

	// const int 라는 하나의 타입이므로, int와는 자료형이 불일치 하므로 변경할 수 없다.

	return 0; 
	*/

	const int num = 20;
	const int& ref = num;  // 타입 일치 시키기

	const int& ref = 50; // 상수도 참조 가능
	// 90p 임시변수 개념 이해하기 




}