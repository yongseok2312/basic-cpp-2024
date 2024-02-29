#include <iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt;
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	}
};
int SoSimple::simObjCnt = 0;
class SoComplex
{
private: 
	static int cmxobjCnt;
public:
	SoComplex() {
		cmxobjCnt++;
		cout << cmxobjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxobjCnt++;
		cout << cmxobjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
	}
};
int SoComplex::cmxobjCnt = 0;

int main() {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}