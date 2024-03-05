#include <iostream>

class Point {
private:
	int xpos, ypos;
public:
	Point(int a, int b) :xpos(a), ypos(b) {}
	void viewPoint() {
		std::cout << '[' << xpos << "," << ypos << ']' << std::endl;
	}
	
	friend Point operator+(Point& a, Point& b);
	friend Point operator+(Point& a, int b);
	friend Point operator+(int b,Point& a);
	friend std::ostream& operator<<(std::ostream& os, const Point& point);

};
Point operator+(Point& a, Point& b) {
	Point t(a.xpos + b.xpos, a.ypos + b.ypos);
	return t;
}
Point operator+(Point& a, int b) {
	Point t(a.xpos + b, a.ypos + b);
	return t;
}
Point operator+(int b,Point& a) {
	Point t(a.xpos + b, a.ypos + b);
	return t;
}

std::ostream& operator<<(std::ostream& a, const Point& point) {
	a << '[' << point.xpos << "," << point.ypos << ']';
	return a;
}


int main() {
	
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;
	c.viewPoint();
	d.viewPoint();
	e.viewPoint();
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	return 0;
}