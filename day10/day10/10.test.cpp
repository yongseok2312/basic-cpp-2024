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
	
	/*Myclass operator+(int c) {	//����Լ� �ۼ�
		Myclass t(a + c);
		return t;
	}*/
	friend Myclass operator+(const Myclass& x,const Myclass&y);	//�����Լ� �ۼ�
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