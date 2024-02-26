#include <iostream>
#include "Recatnagle.h"

using namespace std;

bool Rectangle::InitMembers(const point& ul, const point& lr) {
	if (ul.Getx() > lr.Getx() || ul.Gety() > lr.Gety())
	{
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}


void Rectangle::ShowRecInfo() const {
	cout << "�� ���: " << '[' << upLeft.Getx() << ",";
	cout << upLeft.Gety() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.Getx() << ",";
	cout << lowRight.Gety() << ']' << endl<<endl;

}