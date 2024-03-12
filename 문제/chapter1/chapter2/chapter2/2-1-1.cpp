#include <iostream>
using namespace std;

int as(int &a) {
	return a ++;
}
void in(int& b) {
	 b *= -1;
}

int main() {
	int a = 0;
	as(a);

	cout << a << endl;

}