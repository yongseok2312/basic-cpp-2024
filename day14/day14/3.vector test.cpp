/*
vector ��ü�� �����ϰ� ������ �Է� ���������� ���Ϳ� �����ϰ� ����� ����Ͻÿ�
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	int b=0;
	vector<int> a;
	while (true) {
		int c;
		cout << "������ �Է��ϼ���" << endl;
		cin >> c;
		if (!c) break;
		a.push_back(c);
		for (int i = 0; i < a.size(); i++)
			cout << a.at(i) << ' ';
		cout << endl;
		b += c;
		cout << " ��� = " << b / a.size() << endl;


	}


	return 0;
}