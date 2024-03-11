//5명의 학생의 국영수 점수의 총합과 평균 및 각 과목별 총합과 평균
// 객체 배열 사용
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
		cout << "소멸자" << endl;
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
		cout << "이름을 입력하세요\n";
		cin >> name;
		cout << "국어 성적을 입력하세요\n";
		cin >> kr;
		cout << "수학 성적을 입력하세요\n";
		cin >> math;
		cout << "영어 성적을 입력하세요\n";
		cin >> english;
		gradeAry[i].aGrade(name, kr, math, english);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 학생 총점: %d, 평점: %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}
	double totalkor = 0;
	double totalMath = 0;
	double totalEng = 0;
	for (int i = 0; i < 3; i++) {
		totalkor += gradeAry[i].getKr();
		totalMath += gradeAry[i].getMath();
		totalEng += gradeAry[i].getEng();

	}
	printf("국어 총점: %.1f, 평점: %.1lf\n", totalkor, totalkor / 3);
	printf("수학 총점: %.1f, 평점: %.1f\n", totalMath, totalMath / 3);
	printf("영어 총점: %.1f, 평점: %.1f\n", totalEng, totalEng / 3);


	return 0;
}