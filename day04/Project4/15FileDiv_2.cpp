#include <iostream>
#include "15FileDiv_2.h"

human::human(int anum)
{
	num = anum;
}
void human::humanlifo()
{
	std::cout << "human::num" << num << std::endl;

}

int main()
{
	human a(10);

	human h = ( "������", 27, "����" );
	h.humanlifo();

	return 0;

}