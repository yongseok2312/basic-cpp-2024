#include <iostream>
using namespace std;
void swap(void);

int main() {
	int a = 10;
	int b = 20;

	cout << "�ʱ� a: " << a << endl;
	cout << "�ʱ� b: " << b << endl;

	swap(a,b);
	cout << "�ٲ��� a: " << a << endl;
	cout << "�ٲ��� b: " << b << endl;
	return 0;

	
}
void swap(int& c, int& d) {
	int temp = c;
	c = d;
	d = temp;

}
