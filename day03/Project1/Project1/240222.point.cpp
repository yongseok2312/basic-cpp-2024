/*
C���� �޸�
���� : ��������, �Ű�����
heap : ����ڿ��� �Ҵ�� ����
	malloc()�Ҵ� - free()��ȯ
data: �Լ�, ��������, ���, ���ڸ��ͷ�

��ǻ�Ϳ��� ���� �ϴ� ���: ����(���ؼ� 10�̵Ǵ�)�� ���Ͽ� 10�� �ڸ��� ��
	*/
#include <iostream>
using namespace std;

int main() {
	const int num = 10;

	int num1 = 10;
	int *pnum1;			// ������(�ּ�) ���� pnum1 ���� *�� �׳� ��ȣ
	pnum1 = &num1;	// ���� num1�� �ּҰ��� �����ͺ��� pnum1�� �����Ѵ�. &�ּҿ�����
	

	cout << "num�� ����� ��: "<< num << endl;
	cout << "num1�� ����� ��: "<<num1 << endl;
	cout << "num1�� �ּ� ��: " << &num1 << endl;
	cout << "pnum1�� ����� ��: "<<pnum1 << endl;
	cout << "pnum1�� ������ ��: " << *pnum1 << endl;


	return 0;
}