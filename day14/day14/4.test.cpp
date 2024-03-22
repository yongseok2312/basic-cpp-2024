/*
char ary[] = {'a','b','c','d','e','f'};
조건: while문과 if문만으로 배열 순서를 바꾸어 저장 출력 하시오.
*/
#include <iostream>

using namespace std;


int main() {
	int i = 0;
	char ary[] = { 'a','b','c','d','e','f' };
	while (i < sizeof(ary)/2) {
		if (i >= 0) {
			char temp = ary[i];
			ary[i] = ary[sizeof(ary) - i - 1];
			ary[sizeof(ary) - i - 1] = temp;
		}
		i++;
	}

	for (int a = 0; a < sizeof(ary); a++) {
		cout << ary[a];
		
	}
	cout << endl;



	return 0;
}