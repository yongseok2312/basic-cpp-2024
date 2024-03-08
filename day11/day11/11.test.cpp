//5명의 학생의 국영수 점수의 총합과 평균 및 각 과목별 총합과 평균
// 객체 포인터 배열 사용
#include <iostream>
using namespace std;

class Grade {
private:
	char * name;
	int kr;
	int math;
	int english;
public:
	Grade(const char * name, int kr, int math, int english){
		this->name =new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->kr = kr;
		this->math = math;
		this->english = english;

	}
	~Grade() {
		delete[]name;
	}
	int sum() {
		int sum = kr + english + math;
		return sum;
	}
	double avr() {
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
	Grade* gradeAry[3];	// Grade타입의 객체 포인터 배열



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
		gradeAry[i] = new Grade(name, kr, math, english);
	}
	for (int i = 0;i<3;i++){
		//cout << "이름은" << name << "총점: " << gradeAry[i]->sum() << "평균: " << gradeAry[i]-> avr() << "입니다." << endl;
		printf("%d번째 학생 총점: %d, 평점: %.1lf\n",i+1, gradeAry[i]->sum(), gradeAry[i]->avr());
	}
	double totalkor = 0;
	double totalMath = 0;
	double totalEng=0;
	for (int i = 0; i < 3; i++) {
		totalkor += gradeAry[i]->getKr();
		totalMath += gradeAry[i]->getMath();
		totalEng += gradeAry[i]->getEng();
		
	}
	printf("국어 총점: %.1f, 평점: %.1lf\n", totalkor, totalkor / 3);
	printf("수학 총점: %.1f, 평점: %.1f\n", totalMath, totalMath / 3);
	printf("영어 총점: %.1f, 평점: %.1f\n", totalEng, totalEng / 3);
	for (int i = 0; i < 3; i++) {
		delete gradeAry[i];
	}
	
	
	return 0;
}