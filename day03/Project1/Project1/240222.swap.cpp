
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	cout << "�ٲٱ� ��" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	int temp; //temp���ٰ� a ���� �����ص����ν� a = b�� �����Ҷ� a ���� ������� �ʵ��� ��
	temp = a;
	a = b;
	b = temp;

	cout << "�ٲٱ� ��" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;


	return 0;

}
