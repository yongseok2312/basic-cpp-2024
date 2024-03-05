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
Point& operator--(Point& ref) {							// ���� - �����ϰ� ������	a =++i
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;

}
const Point operator--(Point& ref, int) {				// ���� - �����ְ� ������	a =i++	-> a=i -> i+1    a=1, i=2
	// ������ �Ӱ�ü�� �����Ͽ� ������ �Ӽ����� ������Ų��
	const Point retobj(ref);
	// ���� ��ü�� �Ӽ����� 1�� ������
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