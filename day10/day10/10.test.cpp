#include <iostream>
using namespace std;

class Myclass {
private:
	int a;
public:
	Myclass(int b): a(b) {}
	void print() const {
		cout << "value: " << a << endl;
	}
	
	/*Myclass operator+(int c) {	//멤버함수 작성
		Myclass t(a + c);
		return t;
	}*/
	friend Myclass operator+(const Myclass& x,const Myclass&y);	//전역함수 작성
};
Myclass operator+(const Myclass& x, const Myclass& y) {
	Myclass t(x.a+y.a);
	return t ;
}

int main()
{
	Myclass a(10);
	a.print();//value =10

	Myclass b(a);
	b.print();

	Myclass c = b;
	c.print();
	
	Myclass d = a + b + c;
	d.print();

	return 0;
}