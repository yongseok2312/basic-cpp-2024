#include <iostream>
using namespace std;

class Point;

class PointOP
{private:
	int opcnt;
public:
	PointOP() :opcnt(0) {}
	Point PointAdd(const Point&, const Point&);
	Point Pointsub(const Point&, const Point&);
	~PointOP() {
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point {
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos) {}

	friend Point PointOP::PointAdd(const Point&, const Point&);	// 함수 선언에서는 매개변수의 이름은 생략가능하나 매개변수 타입은 생략할 수 없다.
	friend Point PointOP::Pointsub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);

};
Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2) {
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);

}
Point PointOP::Pointsub(const Point& pnt1, const Point &pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);

}
int main() {
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.Pointsub(pos2, pos1));
	return 0;

}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ",";
		cout << "Y: " << pos.y << endl;
}