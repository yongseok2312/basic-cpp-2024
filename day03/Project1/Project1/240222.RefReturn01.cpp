#include <iostream>
using namespace std;
int& function(void);

int main() {
	int a = 1;
	int& b = function(a);

	a++;
	b++;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;


	return 0;
}
int& function(int &y) {
	y++;
	return y;
}