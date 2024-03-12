#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

int main(void)
{
	Point<int> pos1(3, 4);		   // 클래스템플릿의 객체생성에는 반드시 자료형 명시!! <int>빼면 오류 
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F');    // 좌표정보를 문자로 표시하는 상황의 표현
	pos3.ShowPosition();
	return 0;
}