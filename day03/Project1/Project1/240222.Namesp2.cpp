/*
#include <iostream>
using namespace std;
namespace BestComImpl		// 함수 선언
{
	void SimpleFunc();
}
namespace ProgComImpl
{
	void SimpleFunc();

}
int main() {				// 함수 호출
	BestComImpl::SimpleFunc();	//a::b a공간에 있는 b함수
	ProgComImpl::SimpleFunc();
	return 0;

}
void BestComImpl::SimpleFunc() {	// 함수 정의
	cout << "BestCom이 정의한 함수" << endl;

}
void ProgComImpl::SimpleFunc() {
	cout << "ProgCom이 정의한 함수" << endl;
}
*/