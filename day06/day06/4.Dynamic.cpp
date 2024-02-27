/*
메모리 동적할당: new 연산자 사용
동적 할당 프로그램 실행 중에 메모리 할당 받음
*/

#include <iostream>
using namespace std;

int main() {
	cout << "int size: " << sizeof(int) << endl;
	int *pi = new int; // new 연산자를 통해서 heap영역에 int(4byte) 만큼 메모리 공간을 할당받고 할당받은 메모리의 주소를 리턴 //new 연산자가 생성자를 생성
	*pi = 10;
	cout << "pi가 가리키는 곳에 저장된 값: " << *pi << endl;
	delete pi; //힙영역에 메모리를 제거 시켜줘야함

	int * ptr = new int[10]; //크기 10의 배열을 힙영역에 할당
	for (int i = 0; i < sizeof(ptr); i++) {
		ptr[i] = i + 10;
	}
	for (int i = 0; i < sizeof(ptr); i++) {
		printf("ptr[%d]: %d\n", i, ptr[i]);
	}
	delete []ptr;
	return 0;
}