//C++ Ÿ���� ����ü : ����ü ����� ��� ������ ��� �Լ��� ������.

#include <iostream>

typedef struct human {         // human �̶�� ����ü ���� 
	char name[20];			   // ����ü �Ӽ� = �������   
	int age;			       // human ����ü �ȿ� ������� 3�� (name, age, job)
	char job[20];

	void showHuman()	   // ����Լ�
	{
		printf("name:%s age:%d job:%s\n", name, age, job);
	}

}Human;					       // ������ haman ����ü�� Human���� ����ϰڴ�. (typedef�� �Ⱦ��� struct human Ǯ�� �����)


int main()
{
	int a = 10;
	Human h1 = { "ȫ�浿", 50, "����" }; // human Ÿ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��
	h1.showHuman();


	return 0;
}
