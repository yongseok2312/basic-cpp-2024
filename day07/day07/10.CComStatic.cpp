#include <iostream>
using namespace std;

void Counter() {
	static int cnt;			// static을 사용하면 함수를 빠져 나가도 소멸 되지 않음 즉 변수의 크기가 그대로
	cnt++;
	cout << "Current cnt: " << cnt << endl;

}
int main() {
	for (int i = 0; i < 10; i++) // counter 함수를 for문 사용
		Counter();
	return 0;
};