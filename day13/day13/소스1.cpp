# include <iostream>
using namespace std;

class Product
{
private:
	int id;
	int price;
	string producer;

public:
	Product(int inid, int inprice, string inproducer)
		: id(inid), price(inprice), producer(inproducer)
	{
		cout << "Product ��ü" << endl;
	}

	virtual void ShowInfo() { cout << '[' << id << ']' << endl << '[' << producer << ']' << " ����: " << price << endl; }
	string Showproducer() { return producer; }
	int getID() { return id; }

};


class Book : public Product
{
private:
	string ISBN;
	string author;
	string title;

public:
	Book(int inid, int inprice, string inproducer, string intitle, string inauthor, string inISBN)
		: Product(inid, inprice, inproducer), ISBN(inISBN), author(inauthor), title(intitle)
	{
		cout << "Book ��ü" << endl;
	}

	virtual void ShowInfo()
	{
		Product::ShowInfo();
		cout << "����: " << title << " ����: " << author << " ISBN: " << ISBN << endl;
	}

};


class Handsphone : public Product
{
private:
	string model;
	int HpRam;

public:
	Handsphone(int inid, int inprice, string inproducer, string inmodel, int inHpRam)
		: Product(inid, inprice, inproducer), model(inmodel), HpRam(inHpRam)
	{
		cout << "Handsphone ��ü" << endl;
	}

	virtual void ShowInfo()
	{
		Product::ShowInfo();
		cout << "�𵨸�: " << model << " RAM: " << HpRam << endl << endl;
	}
};


class Computer : public Product
{
private:
	string model;
	int cptRam;

public:
	Computer(int inid, int inprice, string inproducer, string inmodel, int incptRam)
		: Product(inid, inprice, inproducer), model(inmodel), cptRam(incptRam)
	{
		cout << "Computer ��ü" << endl;
	}

	virtual void ShowInfo()
	{
		Product::ShowInfo();
		cout << "�𵨸�: " << model << " RAM: " << cptRam << endl << endl;
	}

	virtual string Name() { return model; }
};


// ī�װ� ���� ��ȣ ����
int num;
void PoductList()
{
	cout << "[1] ����	[2] �޴���	[3] ��ǻ��" << endl << "�Է� >> ";
	cin >> num;
	cout << endl;
}



int main(void)
{
	Product* product[100];

	// product �Է� ����
	int id = -1;
	int inprice;
	string producer;

	// ���� �Է� ����
	string inISBN;
	string inauthor;
	string intitle;

	// �޴��� �� ��ǻ�� �Է� ����
	string inmodel;
	int inhpRam;

	// �˻�Ű����
	int search;


	while (1)
	{
		cout << "--------------- ��ǰ ���� ���α׷� --------------- " << endl;
		cout << "[1] ��ǰ�߰�	[2] ��ǰ���	[3] ��ǰ�˻�	[0] ����" << endl << "�Է� >> ";
		cin >> num;

		if (num == 1) // ��ǰ�߰�
		{
			id++;
			PoductList();

			if (num == 1) // ����
			{
				producer = "����";
				cout << endl << "����, ����, ����, ISBN �Է� : ";
				cin >> inprice >> intitle >> inauthor >> inISBN;
				product[id] = new Book(id, inprice, producer, intitle, inauthor, inISBN);
				product[id]->ShowInfo();
				cout << endl;
			}

			if (num == 2) // �޴���
			{
				producer = "�޴���";
				cout << endl << "����, �𵨸�, RAM ũ�� �Է� : ";
				cin >> inprice >> inmodel >> inhpRam;
				product[id] = new Handsphone(id, inprice, producer, inmodel, inhpRam);
				product[id]->ShowInfo();
				cout << endl;
			}

			if (num == 3) // ��ǻ��
			{
				producer = "��ǻ��";
				cout << endl << "����, �𵨸�, RAM ũ�� �Է� : ";
				cin >> inprice >> inmodel >> inhpRam;
				product[id] = new Computer(id, inprice, producer, inmodel, inhpRam);
				product[id]->ShowInfo();
				cout << endl;
			}

			continue;
		}

		// ��ǰ���
		else if (num == 2)
		{
			PoductList();

			if (num == 1)
			{
				cout << "[���� ��ǰ ���]" << endl << endl;
				for (int i = 0; i < id + 1; i++)
					if (product[i]->Showproducer() == "����")
						product[i]->ShowInfo();
					else
						continue;
			}

			if (num == 2)
			{
				cout << "[�ڵ��� ��ǰ ���]" << endl << endl;
				for (int i = 0; i < id + 1; i++)
					if (product[i]->Showproducer() == "�޴���")
						product[i]->ShowInfo();
					else
						continue;
			}

			if (num == 3)
			{
				cout << "[��ǻ�� ��ǰ ���]" << endl << endl;
				for (int i = 0; i < id + 1; i++)
					if (product[i]->Showproducer() == "��ǻ��")
						product[i]->ShowInfo();
					else
						continue;
			}
			continue;
		}

		// ��ǰ �˻�
		else if (num == 3)
		{
			PoductList();


			if (num == 1)
			{
				cout << "------- ���� �˻� -------" << endl;
				cout << "��ǰ ��ȣ(ID)�Է� >> ";
				cin >> search;

				for (int i = 0; i < id + 1; i++)
				{
					if (product[i]->Showproducer() != "����")
						cout << "��ϵ� ���� ��ǰ�� �����ϴ�" << endl;
					else
					{
						if (product[i]->getID() == search)
							product[i]->ShowInfo();

						else
							continue;
					}
				}
			}
			continue;


			if (num == 2)
			{
				cout << "------- �޴��� �˻� -------" << endl;
				cout << "��ǰ ��ȣ(ID)�Է� >> ";
				cin >> search;

				for (int i = 0; i < id + 1; i++)
				{
					if (product[i]->Showproducer() != "�޴���")
						cout << "��ϵ� �޴��� ��ǰ�� �����ϴ�" << endl;
					else
					{
						if (product[i]->getID() == search)
							product[i]->ShowInfo();

						else
							continue;
					}
				}
			}

			if (num == 3)
			{
				cout << "------- ��ǻ�� �˻� -------" << endl;
				cout << "��ǰ ��ȣ(ID)�Է� >> ";
				cin >> search;

				for (int i = 0; i < id + 1; i++)
				{
					if (product[i]->Showproducer() != "��ǻ��")
						cout << "��ϵ� ��ǻ�� ��ǰ�� �����ϴ�" << endl;
					else
					{
						if (product[i]->getID() == search)
							product[i]->ShowInfo();

						else
							continue;
					}
				}
			}
			continue;
		}


		else if (num == 0) // ���α׷� ����
			for (int i = 0; i < id + 1; i++)
				delete product[i];
		break;

	}

	return 0;
}