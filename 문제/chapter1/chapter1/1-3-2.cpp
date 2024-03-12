#include <iostream>
using namespace std;

int main() {
	
}
int SimpleFunc(int a = 10) {
	return a + 1;
}
int SimpleFunc() {
	return 0;
}
/*
SimpleFuc()를 호출시 둘이 서로 겹치기 때문에 불가능
*/