#include <iostream>
using namespace std;

class Fruitseller {
private:
	int Apple_price;
	int numofApples;
	int mymoneys; 

	

public:
	void Initmembers(int price, int num, int money)
	{
		Apple_price = price;
		numofApples = num;
		mymoneys = money;
	}
	int SaleApples(int money)
	{
		int num = money / Apple_price;
		numofApples -= num;
		mymoneys += money;
		return num;
	}
	void Showsalesresult()
	{
		cout << "남은 사과: " << numofApples << endl;
		cout << "판매 수익: " << mymoneys << endl;
	}
};

class Fruitbuyer {
private:
		int mymoney;
		int numofApples;

public:
	void initmembers(int money) {
		mymoney = money;
		numofApples = 0;

	}
	void buyapples(Fruitseller &seller, int money)
	{
		numofApples += seller.SaleApples(money);
		mymoney -= money;

	}
	void showbuyresult() {
		cout << "현재 잔액: " << mymoney << endl;
		cout << "사과 개수: " << numofApples << endl;
	}


};

int main(void) {
	Fruitseller seller;
	seller.Initmembers(1000, 20, 0);	//가격1000,개수20,잔액0
	Fruitbuyer buyer;
	buyer.initmembers(5000);	//개수0,잔액5000
	buyer.buyapples(seller, 2000);	//개수	1000,18,2000    2,3000

	cout << "과일 판매자의 현황" << endl;
	seller.Showsalesresult();
	cout << "과일 구매자의 현황" << endl;
	buyer.showbuyresult();
	return 0;
}