#include <iostream>
#include "05PointTemplate.h"
using namespace std;

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)					// 생성자를 밖으로 빼내서 사용 
{  }

template <typename T>											// 멤버함수도 마찬가지
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}
