#include <iostream>
using namespace std;

int main() {
	
	char a[50];
	char b[50];

	cout << "이름을 작성하시오:";
	cin >> a;
	cout << "전화번호를 작성하시오:";
	cin >> b;
	cout << "이름: " << a << "전화번호: " << b << endl;
	return 0;
}