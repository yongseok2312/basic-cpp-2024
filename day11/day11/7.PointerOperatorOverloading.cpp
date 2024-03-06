#include <iostream>
using namespace std;

class Number {
private:
	int num;
public:
	Number(int n) : num(n) {}
	void Showdata() { cout << num << endl; }
	Number* operator->()
	{
		return this;

	}
	Number& operator*()
	{
		return *this;
	}
};

int main() {
	Number num(20);
	num.Showdata();

	(*num) = 30;
	num->Showdata();
	(*num).Showdata();
	return 0;
}