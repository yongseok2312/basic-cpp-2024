//5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ� 

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
        printf("�Ҹ���ȣ��\n");
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
    Grade* GradeAry[3]; // ��ü����Ʈ �迭

   
    int Korean;
    int Math;
    int English;

    char Name[50] = {};

    const int NUM_STUDENTS = 2;
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

        GradeAry[i] = new Grade(Name, Korean, Math, English);

        cout << "�̸� : " << Name << " => " << "�հ� : " << GradeAry[i]->sum() << " , " << "���� : " << GradeAry[i]->average() << endl;
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
    cout << "\n���� ���� �� ���" << endl;
    cout <<"�������� �հ� : "<< totalKo << " , " << "�������� �հ� : " << totalMa << " , " << "�������� �հ� : " << totalEn << endl;
    cout <<"�������� ��� : " << totalKo/3.0 << " , " << "�������� ��� : " << totalMa/3.0 << " , " << "�������� ��� : " << totalEn/3.0 << endl;

    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
        delete GradeAry[i];
    }
    return 0; 
}