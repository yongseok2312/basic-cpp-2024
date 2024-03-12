#include <iostream>
#include "05PointTemplate.h"
#include "05PointTemplate.cpp"
using namespace std;

int main()
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F');    // 좌표정보를 문자로 표시하는 상황의 표현
	pos3.ShowPosition();
	return 0;
}