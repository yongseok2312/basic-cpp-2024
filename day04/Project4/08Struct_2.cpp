//C++ Ŭ���� : Ŭ���� ����� ��� ������ ��� �Լ��� ������.

#include <iostream>

typedef class human {         // human �̶�� Ŭ���� ���� 
public: 	
	char name[20];			   
	int age;			       // ������� 3�� (name, age, job)
	char job[20];

	void showHuman()	   // ����Լ�
	{
		printf("name:%s age:%d job:%s\n", name, age, job);
	}

}Human;					     


int main()
{
	int a = 10;
	//human h1 = { "ȫ�浿", 50, "����" }; // human Ÿ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��
	//h1.showHuman();
	Human h1 = { "ȫ�浿", 50, "����" } ;
	h1.showHuman();

	return 0;
}
