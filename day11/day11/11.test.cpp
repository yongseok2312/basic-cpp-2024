//5���� �л��� ������ ������ ���հ� ��� �� �� ���� ���հ� ���

#include <iostream>
using namespace std;

class Grade {
private:
	string name;
	int kr;
	int math;
	int english;
public:
	Grade(){
		cout << "�̸��� �Է��ϼ���\n";
		cin >> name;
		cout << "���� ������ �Է��ϼ���\n";
		cin >> kr;
		cout << "���� ������ �Է��ϼ���\n";
		cin >> math;
		cout << "���� ������ �Է��ϼ���\n";
		cin >> english;

		cout << "�̸���" << name << "����: " << kr + math + english << "���: " << (kr + math + english) / 3 << "�Դϴ�." << endl;
	}
	friend Grade operator+ (const Grade& n1, const Grade& n2);
};

Grade operator+(const Grade& t, const Grade& q) {
	Grade x;
	x.name = "Total"; // Combine names manually if necessary
	x.kr = t.kr + q.kr;
	x.math = t.math + q.math;
	x.english = t.english + q.english;
	return x;
	
}

int main() {
	const int numStudent = 5;
	Grade students[numStudent];
	for (int i = 0; i < numStudent; i++)
	{
		cout << " �л�" << i + 1 << " �� ������ �Է��ϼ���" << endl;
		students[i]=Grade();
	}
		
	
	//cout << "����" << total.kr << "����" << total.math << "����" << total.english << "�Դϴ�." << endl;
	
	return 0;
}