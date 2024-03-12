/*
Parent class
class Product : id, price, producer
Child class
class Book : ISBN, author, title
class HandPhone:model, RAM
class Computer: model, cpu, RAM
객체 포인터 배열 사용: product [100]
string 사용가능
파일 분할

메인 
---상품관리 시스템---
1 상품 추가 2 상품 출력 3 상품 검색 0 종료
>

1또는 2또는 3을 선택한 경우
1 책 2 핸드폰 3 컴퓨터
선택 목록을 띄워 해당 상품을 선택한 후에 추가, 출력, 또는 검색 실행된다.
*/

#include <iostream>
using namespace std;

class Product {
private:
	int id;
	int price;
	string producer;

public:
	Product(int id, int price, string producer):id(id),price(price),producer(producer) {};
	int getid() {
		return id;
		
	}
	int getprice() {
		return price;

	}
	string getproducer() {
		return producer;

	}		

};

class Book :public Product{
private:
	string ISBN;
	string author;
	string title;
public:
	Book(int id, int price, string producer, string ISBN, string author, string title)
		: Product(id, price, producer), ISBN(ISBN), author(author), title(title) {}
};

class HandPhone :public Product {
private:
	string model;
	int RAM;
public:
	HandPhone(int id, int price, string producer, string model, int RAM) :Product(id, price, producer), model(model), RAM(RAM) {}
};
class Computer :public Product {
private:
	string model;
	string cpu;
	int RAM;
public:
	Computer(int id, int price, string producer, string model, string cpu, int RAM) :Product(id, price, producer), model(model), cpu(cpu), RAM(RAM) {}
};


int main() {
	Product* product[100];
	int i = 0;
	int a;
	cout << "------ 상품관리 프로그램 ------" << endl;
	cout << "1 상품추가" << " 2 상품출력" << " 3 상품검색 " << "0 종료" << endl;
	cin >> a;
	if (int a = 1) {
		int b;
		cout << "1 책" << " 2 핸드폰" << " 3 컴퓨터" << endl;
		cin >> b;
			int id = 0;
			int price = 0;
			int RAM = 0;
		else if ( b == 2) {
			string producer, model;
		if (b == 1) {
			string  producer, ISBN, author, title;
			cout << "책 정보를 적으세요 -> id, price,producer, ISBN, author, title" << endl;
			cin >> id >> price >> producer >> ISBN >> author >> title;
			product[i] = new Book(id, price, producer, ISBN, author, title);
		}
			cout << "핸드폰 정보를 적으세요-> id,price,producer,model,RAM" << endl;
			cin >> id >> price >> producer >> model >> RAM;
			product[i] = new HandPhone(id, price, producer, model, RAM);
		}
		else if ( b == 3) {
			string producer, model, cpu;
			cout << "컴퓨터 정보를 적으세요-> id,price,producer,model,cpu,RAM" << endl;
			cin >> id >> price >> producer >> model >>cpu>> RAM;
			product[i] = new Computer(id, price, producer, model,cpu, RAM);
		}
		i++;

	}

	return 0;
}