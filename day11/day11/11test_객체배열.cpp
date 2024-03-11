#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Grade
{
private:
    char* Name;
    int Korean;
    int Math;
    int English;

public:
    Grade()
    {
        Name = nullptr;
        Korean = 0;
        Math = 0;
        English = 0;
    }
    Grade(const char* n, int kor, int mat, int eng)
    {
        this->Name = new char[strlen(n) + 1];
        strcpy(this->Name, n);
        Korean = kor;
        Math = mat;
        English = eng;
    }
    ~Grade()
    {
        delete[] Name;
    }
    int sum() const
    {
        return Korean + Math + English;
    }
    double average() const
    {
        return sum() / 3.0;
    }
    int getKo() const
    {
        return Korean;
    }
    int getMa() const
    {
        return Math;
    }
    int getEn() const
    {
        return English;
    }
};

int main()
{
    const int NUM_STUDENTS = 2;
    Grade GradeAry[NUM_STUDENTS];     // ��ü�迭

    int Korean;
    int Math;
    int English;

    char Name[50];

    for (int i = 0; i < NUM_STUDENTS; ++i) {

        cout << "�л��� �̸��� �Է��ϼ���: ";
        cin >> Name;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> Korean;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> Math;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> English;

        cout << "�̸� : " << Name << " => " << "�������� : " << Korean << " , " << "�������� : " << Math << " , " << "�������� : " << English << endl;

        GradeAry[i] = Grade(Name, Korean, Math, English);

        cout << "�̸� : " << Name << " => " << "�հ� : " << GradeAry[i].sum() << " , " << "���� : " << GradeAry[i].average() << endl;
    }

    int totalKo = 0;
    int totalMa = 0;
    int totalEn = 0;

    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        totalKo += GradeAry[i].getKo();
        totalMa += GradeAry[i].getMa();
        totalEn += GradeAry[i].getEn();

    }
    cout << "\n���� ���� �� ���" << endl;
    cout << "�������� �հ� : " << totalKo << " , " << "�������� �հ� : " << totalMa << " , " << "�������� �հ� : " << totalEn << endl;
    cout << "�������� ��� : " << totalKo / 3 << " , " << "�������� ��� : " << totalMa / 3 << " , " << "�������� ��� : " << totalEn / 3 << endl;


    return 0;
}
