/*
�޸� �����Ҵ�: new ������ ���
���� �Ҵ� ���α׷� ���� �߿� �޸� �Ҵ� ����
*/

#include <iostream>
using namespace std;

int main() {
	cout << "int size: " << sizeof(int) << endl;
	int *pi = new int; // new �����ڸ� ���ؼ� heap������ int(4byte) ��ŭ �޸� ������ �Ҵ�ް� �Ҵ���� �޸��� �ּҸ� ���� //new �����ڰ� �����ڸ� ����
	*pi = 10;
	cout << "pi�� ����Ű�� ���� ����� ��: " << *pi << endl;
	delete pi; //�������� �޸𸮸� ���� ���������

	int * ptr = new int[10]; //ũ�� 10�� �迭�� �������� �Ҵ�
	for (int i = 0; i < sizeof(ptr); i++) {
		ptr[i] = i + 10;
	}
	for (int i = 0; i < sizeof(ptr); i++) {
		printf("ptr[%d]: %d\n", i, ptr[i]);
	}
	delete []ptr;
	return 0;
}