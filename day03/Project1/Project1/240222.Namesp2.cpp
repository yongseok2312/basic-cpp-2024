/*
#include <iostream>
using namespace std;
namespace BestComImpl		// �Լ� ����
{
	void SimpleFunc();
}
namespace ProgComImpl
{
	void SimpleFunc();

}
int main() {				// �Լ� ȣ��
	BestComImpl::SimpleFunc();	//a::b a������ �ִ� b�Լ�
	ProgComImpl::SimpleFunc();
	return 0;

}
void BestComImpl::SimpleFunc() {	// �Լ� ����
	cout << "BestCom�� ������ �Լ�" << endl;

}
void ProgComImpl::SimpleFunc() {
	cout << "ProgCom�� ������ �Լ�" << endl;
}
*/