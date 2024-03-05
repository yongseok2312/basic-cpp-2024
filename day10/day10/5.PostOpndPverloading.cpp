#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	void ShowPosition() const {
		cout << '[' << xpos << "," << ypos << ']' << endl;
}
	Point& operator++() {
		xpos += 1;
		ypos += 1;
		return *this;
	}
	const Point operator++(int) {
		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}
	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
};
Point& operator--(Point& ref) {							// 전위 - 증감하고 던져줌	a =++i
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;

}
const Point operator--(Point& ref, int) {				// 후위 - 던져주가 증감소	a =i++	-> a=i -> i+1    a=1, i=2
	// 현재으 ㅣ객체를 복사하여 현재의 속성값을 유지시킨다
	const Point retobj(ref);
	// 현재 객체의 속성값을 1씩 증감함
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main() {
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();
	cpy.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();
	return 0;
}