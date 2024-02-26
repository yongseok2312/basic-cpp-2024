#ifndef __POINT_H_
#define __POINT_H_


class point
{
private:
	int x;
	int y;

public:
	bool InitMemebers(int xpos, int ypos);
	int Getx() const;
	int Gety() const;
	bool SetX(int xpos);
	bool SetY(int ypos);

};
#endif
