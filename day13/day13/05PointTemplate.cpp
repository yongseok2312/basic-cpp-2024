#include <iostream>
#include "05PointTemplate.h"
using namespace std;

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)					// �����ڸ� ������ ������ ��� 
{  }

template <typename T>											// ����Լ��� ��������
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}
