#include <iostream>
using namespace std;

class SoSimple {
private: int num;
public:
	SoSimple(int n) :num(n) {
		cout << "New Object: " << this << endl;

	}
	SoSimple(const SoSimple& copy) :num(copy.num) {
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple() {
		cout << "Destory obj: " << this << endl;
	}
};

SoSimple SimpleFrncObj(SoSimple ob) {
	cout << "Parm ADR: " << &ob << endl;
	return ob;
}

int main() {
	SoSimple obj(7);
	SimpleFrncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFrncObj(obj);
	cout << "Return obj" << &tempRef << endl;
	return 0;
}