#include <iostream>
#include "1.h"
using namespace std;

void Fruitseller::Initmembers(int price, int num, int money)
	{
		Apple_price = price;
		numofApples = num;
		mymoneys = money;
	}
int Fruitseller::SaleApples(int money)
	{
		int num = money / Apple_price;
		numofApples -= num;
		mymoneys += money;
		return num;
	}
void Fruitseller::Showsalesresult()
	{
		cout << "���� ���: " << numofApples << endl;
		cout << "�Ǹ� ����: " << mymoneys << endl;
	}

void Fruitbuyer::initmembers(int money) {
		mymoney = money;
		numofApples = 0;

	}
void Fruitbuyer::buyapples(Fruitseller& seller, int money)
	{
		numofApples += seller.SaleApples(money);
		mymoney -= money;

	}
void Fruitbuyer::showbuyresult() {
		cout << "���� �ܾ�: " << mymoney << endl;
		cout << "��� ����: " << numofApples << endl;
	}

