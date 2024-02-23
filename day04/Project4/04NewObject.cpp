#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple // Ŭ���� Simple
{
public:
	Simple() // �Լ� Simple => ������(Ŭ������ �̸��� ���� �Լ�)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;   // 5�࿡ ���ǵ� �ڷ����� �ٰŷ�, new�����ڸ� ����Ͽ� �� ������ ���� �Ҵ�

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);  // malloc �Լ��� �޸� �Ҵ�

	cout << endl << "end of main" << endl;
	delete sp1;		// �������� �Ҵ�� ��ü ����, ��ü�� ��ȯ
	free(sp2);		// malloc���� �Ҵ�� �޸� ����
	return 0;
}

/*
1. delete ������ �������� �Ҵ�� ��ü�� �����ϰ� �ش� ��ü�� �Ҹ��ڸ� ȣ��.
2. malloc �Լ��� �Ҵ�� �޸𸮿� ���� -> free �Լ��� ȣ���Ͽ� �޸𸮸� �����ؾ� ��.
*/