//C Ÿ���� ����ü : ����� ��� ������ ������. 

#include <stdio.h>

typedef struct human {         // human �̶�� ����ü ���� 
	char name[20];			   // ����ü �Ӽ� = �������   
	int age;			       // human ����ü �ȿ� ������� 3�� (name, age, job)
	char job[20];

}Human;					       // ������ haman ����ü�� Human���� ����ϰڴ�. 

void showHuman(Human h)
{
	printf("name:%s age:%d job:%s\n", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	Human h1 = { "ȫ�浿", 50, "����" }; // human Ÿ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��
	showHuman(h1);


	return 0; 
}


