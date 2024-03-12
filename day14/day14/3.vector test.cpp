/*
vector 객체를 생성하고 정수를 입력 받을때마다 벡터에 삽입하고 평균을 출력하시오
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	int b=0;
	vector<int> a;
	while (true) {
		int c;
		cout << "정수를 입력하세요" << endl;
		cin >> c;
		if (!c) break;
		a.push_back(c);
		for (int i = 0; i < a.size(); i++)
			cout << a.at(i) << ' ';
		cout << endl;
		b += c;
		cout << " 평균 = " << b / a.size() << endl;


	}


	return 0;
}