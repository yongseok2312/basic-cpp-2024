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
		cout << " 학생" << i + 1 << " 의 정보를 입력하세요" << endl;
		students[i]=Grade();
	}
		
	
	//cout << "국어" << total.kr << "수학" << total.math << "영어" << total.english << "입니다." << endl;
	
	return 0;
}