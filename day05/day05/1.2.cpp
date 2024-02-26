#include <iostream>
#include "1.h"
using namespace std;

int main(void) {
	Fruitseller seller;
	seller.Initmembers(1000, 20, 0);
	Fruitbuyer buyer;
	buyer.initmembers(5000);
	buyer.buyapples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.Showsalesresult();
	cout << "과일 구매자의 현황" << endl;
	buyer.showbuyresult();
	return 0;
}