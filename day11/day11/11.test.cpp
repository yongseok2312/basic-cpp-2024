//5명의 학생의 국영수 점수의 총합과 평균 및 각 과목별 총합과 평균

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
		cout << "이름을 입력하세요\n";
		cin >> name;
		cout << "국어 성적을 입력하세요\n";
		cin >> kr;
		cout << "수학 성적을 입력하세요\n";
		cin >> math;
		cout << "영어 성적을 입력하세요\n";
		cin >> english;

		cout << "이름은" << name << "총점: " << kr + math + english << "평균: " << (kr + math + english) / 3 << "입니다." << endl;
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
	//cout << "국어" << total.kr << "수학" << total.math << "영어" << total.english << "입니다." << endl;
	
	return 0;
}