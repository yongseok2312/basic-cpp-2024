#include <iostream>
using namespace std;

class MyClass {
	int num;

public:
	MyClass() {	// defalt 생성자 --> 입력을 받고 있지 않은 생성자
		cout <<"생성자 호출" << endl;
		num = 10;
		//cout << num << endl;
	}
	MyClass(int anum) {
		num = anum;
		cout << num << endl;
	}
	void MyClassinfo() {
		cout << "num" << num << endl;
	}
};

int main() {
	
	//MyClass* m = new MyClass();
	MyClass m; // 객체생성 명령으로 생성자는 자동 호출 됨
	MyClass m2(20);
	m2.MyClassinfo();


	return 0;
}