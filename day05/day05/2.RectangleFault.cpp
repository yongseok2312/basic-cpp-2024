#include <iostream>
using namespace std;

class point {
public:
	int x;
	int y;
};
class Rectangle {
public:
	point upLeft;
	point lowRight;

	void showRecInfo()
	{
		cout << "좌 상단: " << '[' << upLeft.x << ",";
		cout << upLeft.y << ']' << endl;
		cout << "우 하단: " << '[' << lowRight.x << ",";
		cout <<lowRight.y << ']' << endl;
}
};
int main() {
	point pos1 = { -2,4 };
	point pos2 = { 5,9 };
	Rectangle rec = { pos2,pos1 };
	rec.showRecInfo();
	return 0;
}