//5���� �л��� ������ ������ ���հ� ��� �� �� ���� ���հ� ���
// ��ü �迭 ���
#include <iostream>
using namespace std;

class Grade {
private:
	char* name;
	int kr;
	int math;
	int english;
public:
	void aGrade(const char* name, int kr, int math, int english) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->kr = kr;
		this->math = math;
		this->english = english;

	}
	Grade() {
		name = NULL;
		kr = 0;
		math = 0;
		english = 0;
	}
	~Grade() {
		delete []name;
		cout << "�Ҹ���" << endl;
	}
	int sum() const {
		int sum = kr + english + math;
		return sum;
	}
	double avr() const{
		double avr = sum() / 3;
		return avr;
	}
	int getKr() {
		return kr;
	}
	int getMath() {
		return math;
	}
	int getEng() {
		return english;
	}

};

int main() {
	Grade gradeAry[3];	
	char name[20] = {};
	int kr;
	int math;
	int english;


	for (int i = 0; i < 3; i++) {
		cout << "�̸��� �Է��ϼ���\n";
		cin >> name;
		cout << "���� ������ �Է��ϼ���\n";
		cin >> kr;
		cout << "���� ������ �Է��ϼ���\n";
		cin >> math;
		cout << "���� ������ �Է��ϼ���\n";
		cin >> english;
		gradeAry[i].aGrade(name, kr, math, english);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d��° �л� ����: %d, ����: %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}
	double totalkor = 0;
	double totalMath = 0;
	double totalEng = 0;
	for (int i = 0; i < 3; i++) {
		totalkor += gradeAry[i].getKr();
		totalMath += gradeAry[i].getMath();
		totalEng += gradeAry[i].getEng();

	}
	printf("���� ����: %.1f, ����: %.1lf\n", totalkor, totalkor / 3);
	printf("���� ����: %.1f, ����: %.1f\n", totalMath, totalMath / 3);
	printf("���� ����: %.1f, ����: %.1f\n", totalEng, totalEng / 3);


	return 0;
}