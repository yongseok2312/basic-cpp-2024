//5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오 

#define _CRT_SECURE_NO_WARNING
#include <iostream>
using namespace std;

class Grade
{
private: 
    char* Name;
    int Korean;
    int Math;
    int English;
	
public: 
	Grade(const char* n, int kor, int mat, int eng)
	{
        this->Name = new char[strlen(n) + 1];
        strcpy(Name, n);
        this->Korean = kor;
        this->Math = mat;
        this->English = eng;
	}
    ~Grade()
    {
        printf("소멸자호출\n");
        delete[] Name;
    }
    int sum()
    {
        int sum = Korean + Math + English; 
        return sum; 
    }
    double average()
    {
        double average = sum() / 3;
        return average;
    }
    int getKo()
    {
        return Korean;
    }
    int getMa()
    {
        return Math;
    }
    int getEn()
    {
        return English;
    }
};

int main()
{
    Grade* GradeAry[3]; // 객체포인트 배열

   
    int Korean;
    int Math;
    int English;

    char Name[50] = {};

    const int NUM_STUDENTS = 2;
    for (int i = 0; i < NUM_STUDENTS; ++i) {

        cout << "학생의 이름을 입력하세요: ";
        cin >> Name;

        cout << "국어 점수를 입력하세요: ";
        cin >> Korean;

        cout << "수학 점수를 입력하세요: ";
        cin >> Math;

        cout << "영어 점수를 입력하세요: ";
        cin >> English;

        cout << "이름 : " << Name << " => " << "국어점수 : " << Korean << " , " << "수학점수 : " << Math << " , " << "영어점수 : " << English << endl;

        GradeAry[i] = new Grade(Name, Korean, Math, English);

        cout << "이름 : " << Name << " => " << "합계 : " << GradeAry[i]->sum() << " , " << "평점 : " << GradeAry[i]->average() << endl;
    }

    
    double totalKo = 0;
    double totalMa = 0;
    double totalEn = 0;

    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        totalKo+=GradeAry[i]->getKo();
        totalMa+=GradeAry[i]->getMa();
        totalEn+=GradeAry[i]->getEn();

    }
    cout << "\n과목별 점수 및 평균" << endl;
    cout <<"국어점수 합계 : "<< totalKo << " , " << "수학점수 합계 : " << totalMa << " , " << "영어점수 합계 : " << totalEn << endl;
    cout <<"국어점수 평균 : " << totalKo/3.0 << " , " << "수학점수 평균 : " << totalMa/3.0 << " , " << "영어점수 평균 : " << totalEn/3.0 << endl;

    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        printf("객체 할당 소멸자 호출\n");
        delete GradeAry[i];
    }
    return 0; 
}