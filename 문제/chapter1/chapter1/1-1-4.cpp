#include <iostream>
using namespace std;

int main() {
	int a = 0;
	for (int a = 0; a > -1; a) {
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> a;

		if (a > -1) {
			cout << "이번 달 급여: " << 50 + a * 0.12 << "만원" << endl;
		}
		else
			cout << "프로그램을 종료합니다" << endl;
		exit;
	}
}