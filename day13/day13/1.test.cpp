/*
Parent class
class Product : id, price, producer
Child class
class Book : ISBN, author, title
class HandPhone:model, RAM
class Computer: model, cpu, RAM
��ü ������ �迭 ���: product [100]
string ��밡��
���� ����

���� 
---��ǰ���� �ý���---
1 ��ǰ �߰� 2 ��ǰ ��� 3 ��ǰ �˻� 0 ����
>

1�Ǵ� 2�Ǵ� 3�� ������ ���
1 å 2 �ڵ��� 3 ��ǻ��
���� ����� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ���, �Ǵ� �˻� ����ȴ�.
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
	cout << "------ ��ǰ���� ���α׷� ------" << endl;
	cout << "1 ��ǰ�߰�" << " 2 ��ǰ���" << " 3 ��ǰ�˻� " << "0 ����" << endl;
	cin >> a;
	if (int a = 1) {
		int b;
		cout << "1 å" << " 2 �ڵ���" << " 3 ��ǻ��" << endl;
		cin >> b;
			int id = 0;
			int price = 0;
			int RAM = 0;
		else if ( b == 2) {
			string producer, model;
		if (b == 1) {
			string  producer, ISBN, author, title;
			cout << "å ������ �������� -> id, price,producer, ISBN, author, title" << endl;
			cin >> id >> price >> producer >> ISBN >> author >> title;
			product[i] = new Book(id, price, producer, ISBN, author, title);
		}
			cout << "�ڵ��� ������ ��������-> id,price,producer,model,RAM" << endl;
			cin >> id >> price >> producer >> model >> RAM;
			product[i] = new HandPhone(id, price, producer, model, RAM);
		}
		else if ( b == 3) {
			string producer, model, cpu;
			cout << "��ǻ�� ������ ��������-> id,price,producer,model,cpu,RAM" << endl;
			cin >> id >> price >> producer >> model >>cpu>> RAM;
			product[i] = new Computer(id, price, producer, model,cpu, RAM);
		}
		i++;

	}

	return 0;
}