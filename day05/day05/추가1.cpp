#include <iostream>
#include "�߰�.h"
using namespace std;

human::human(const char* anum, int ag, const char* mjob, int birth) : �������(birth) {
	strcpy(name, anum);
	age = ag;
	strcpy(job, mjob);

}
void human::printhuman() {
	cout << "�й�:" << name << "�̸�:" << age << "����:" << job << "����:" << ������� << "�Դϴ�" << endl;
}