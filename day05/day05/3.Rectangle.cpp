#include <iostream>
#include "Recatnagle.h"

using namespace std;

bool Rectangle::InitMembers(const point& ul, const point& lr) {
	if (ul.Getx() > lr.Getx() || ul.Gety() > lr.Gety())
	{
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}


void Rectangle::ShowRecInfo() const {
	cout << "좌 상단: " << '[' << upLeft.Getx() << ",";
	cout << upLeft.Gety() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.Getx() << ",";
	cout << lowRight.Gety() << ']' << endl<<endl;

}