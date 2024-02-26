#pragma once

class Fruitseller {
private:
	int Apple_price;
	int numofApples;
	int mymoneys;
public:
	void Initmembers(int price, int num, int money);
	int SaleApples(int money);
	void Showsalesresult();
};

class Fruitbuyer {
private:
	int mymoney;
	int numofApples;

public:
	void initmembers(int money);
	void buyapples(Fruitseller &seller, int money);
	void showbuyresult();
};