#include <iostream>
#include <vector>
using namespace std;





int main() {
	vector<int>v; // int Ÿ�� vector ����

	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
		printf( "v[%d]: %d\n",i+1,v[i]);
		printf("v.size(): %d\n", v.size());	//���Ұ���
		printf("v.capacity(): %d\n", v.capacity());	// �޸� ����
	}

	cout << "iterator: �ݺ���" << endl;
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << "iter: " << *iter << endl;
	}

	vector<string> vs;
	vs.push_back("Hi");
	vs.push_back("HELLO");
	vs.push_back("Hoongkildong");
	cout << "vs.front():" << vs.front() << endl;
	cout << "vs.back():" << vs.back() << endl;
	vector<string>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++) {
		cout << *it << endl;

	}

	vector<int>v1;	//�ʱ�ȭ (ũ�Ⱑ 0�� ���Ͱ� ����)
	vector<int>v2(5);// ũ�Ⱑ 5�� ���Ͱ� ����
	vector<int>v3 = { 10,20,30 };
	vector<int> v4(10, 7);	//ũ�Ⱑ 10�̰�, 7�� �ʱ�ȭ
	return 0;
}