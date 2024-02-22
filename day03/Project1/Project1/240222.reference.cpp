#include <iostream>
using namespace std;
void swap(void);

int main() {
	int a = 10;
	int b = 20;

	cout << "ÃÊ±â a: " << a << endl;
	cout << "ÃÊ±â b: " << b << endl;

	swap(a,b);
	cout << "¹Ù²ïÈÄ a: " << a << endl;
	cout << "¹Ù²ïÈÄ b: " << b << endl;
	return 0;

	
}
void swap(int& c, int& d) {
	int temp = c;
	c = d;
	d = temp;

}
