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

Grade operator+(const Grade &t, const Grade &q)
{
	Grade x(q.name, t.kr + q.kr, t.math + q.math, t.english + q.english);
	return x;
	
}

int main() {
	//for (int i=0;i<=5;i++)
		
	Grade a;
	Grade b;
	Grade total = a + b;
	//cout << "����" << total.kr << "����" << total.math << "����" << total.english << "�Դϴ�." << endl;
	
	return 0;
}