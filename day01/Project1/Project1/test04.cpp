/*
지역변수 = 로컬변수 : 선언되어진 범위안에서만 사용이 가능
전역변수 :어디서든 사용가능

제어문
1. 선택 제어문: if, switch
2. 반복 제어문: for, while

for( 초기식 ; 조건식 ; 증감식 ) : 초기식 ->  조건식 True  -> 내용 -> 증감식
								   				    False -> for문 break
												   
*/
/*
#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;	// 변수 선언과 동시에 값을 대입: 변수 초기화
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;

	}
	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}
*/