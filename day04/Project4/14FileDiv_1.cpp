#include <iostream>

class AClass
{
private :					// ���������� 
	int num;

public:						// ��������������
	AClass(int anum)		// ������ : �ʱ�ȭ ���
	{
		num = anum;
	}
	void Alnfo()
	{
		std::cout << "A::num:" << num << std::endl;
	}
};

int main()
{
	AClass a(10);
	a.Alnfo();

	return 0;
}