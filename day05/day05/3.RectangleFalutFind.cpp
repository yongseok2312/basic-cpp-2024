#include<iostream>
#include"point.h"
#include"Recatnagle.h"
using namespace std;

int main() {
	point pos1;
	if (!pos1.InitMemebers(-2, 4))
		cout << "�ʱ�ȭ ����" << endl;
	if (!pos1.InitMemebers(2, 4))
		cout << "�ʱ�ȭ ����" << endl;

	point pos2;
	if (!pos2.InitMemebers(5, 9))
		cout << "�ʱ�ȭ ����" << endl;
	
	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
		cout << "���簢�� �ʱ�ȭ ����" << endl;
	if (!rec.InitMembers(pos1, pos2))
		cout << "���簢�� �ʱ�ȭ ����" << endl;

	rec.ShowRecInfo();
	return 0;
}