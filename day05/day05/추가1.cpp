#include <iostream>
#include "추가.h"
using namespace std;

human::human(const char* anum, int ag, const char* mjob, int birth) : 생년월일(birth) {
	strcpy(name, anum);
	age = ag;
	strcpy(job, mjob);

}
void human::printhuman() {
	cout << "학번:" << name << "이름:" << age << "전공:" << job << "나이:" << 생년월일 << "입니다" << endl;
}