#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	cout << "T Add(T num1, T num2)" << endl;
	return num1 + num2;
}
int Add(int num1, int num2)
{
	cout << "Add(int num1, int num2)" << endl;
	return num1 + num2;

}
double Add(double num1, double num2) {
	cout << "Add(double num1, doubel num2)" << endl;
	return num1 + num2;
}

int main() {
	cout << Add(15, 20) << endl;
	cout << Add(2.9, 3.7) << endl;
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(3.14, 2.75) << endl;
	return 0;
}