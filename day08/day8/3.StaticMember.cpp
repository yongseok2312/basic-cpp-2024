#include <iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt;
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
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
		cout << cmxobjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxobjCnt++;
		cout << cmxobjCnt << "��° SoComplex ��ü" << endl;
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