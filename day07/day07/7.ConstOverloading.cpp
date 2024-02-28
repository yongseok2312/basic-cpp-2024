#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n) {}
	SoSimple& AddNum(int n) {
		num += n;
		return *this;

	}
	void SimpleFunc() {
		cout << "SimpleFunc: " << num <<endl;
	}
	void SimpleFunc() const {
		cout << "const SimpleFunc: " << num << endl;
	}
};
void YOurFunc(const SoSimple& obj) {
	obj.SimpleFunc();
}
int main() {
	SoSimple obj(1);
	const SoSimple obj2(7);

	obj.SimpleFunc();
	obj2.SimpleFunc();

	YOurFunc(obj);
	YOurFunc(obj2);
	return 0;
}