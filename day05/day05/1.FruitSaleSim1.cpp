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
		cout << "���� ���: " << numofApples << endl;
		cout << "�Ǹ� ����: " << mymoneys << endl;
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
		cout << "���� �ܾ�: " << mymoney << endl;
		cout << "��� ����: " << numofApples << endl;
	}


};

int main(void) {
	Fruitseller seller;
	seller.Initmembers(1000, 20, 0);	//����1000,����20,�ܾ�0
	Fruitbuyer buyer;
	buyer.initmembers(5000);	//����0,�ܾ�5000
	buyer.buyapples(seller, 2000);	//����	1000,18,2000    2,3000

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.Showsalesresult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.showbuyresult();
	return 0;
}