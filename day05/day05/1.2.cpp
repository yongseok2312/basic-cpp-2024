#include <iostream>
#include "1.h"
using namespace std;

int main(void) {
	Fruitseller seller;
	seller.Initmembers(1000, 20, 0);
	Fruitbuyer buyer;
	buyer.initmembers(5000);
	buyer.buyapples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.Showsalesresult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.showbuyresult();
	return 0;
}