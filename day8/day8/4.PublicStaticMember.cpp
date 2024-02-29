#include <iostream>
using namespace std;

class SoSimple {
public:	
	static int simObjCnt;
public:
	SoSimple() { simObjCnt++; }

};
int SoSimple::simObjCnt = 0;	//	static 멤버변수 초기화 //class 밖이어서 public이어야 만함 private 선언불가

int main() {
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;

	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	return 0;
}