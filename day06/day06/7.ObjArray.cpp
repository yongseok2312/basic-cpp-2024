/*
��ü �迭
*/

# include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;
public:
	Human(const char * aname, int aage){
		cout << "������ ȣ��" << endl;
		strcpy(name, aname);
		age = aage;
	}
	void PrintHuman() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Human() {
		cout << "�Ҹ��� ȣ��" << endl;
		delete []name;
		
	}
};

int main() {
	Human h[3] = {Human("ȫ�浿",40),Human("�ٺ�",20),Human("����",32)}; //��ü �迭  ��ü h[0]-[0]���,h[1]-[1],h[2]-[2]

	for (int i = 0; i < 3; i++) {		// h1.printhuman,h2.printhuman,h3.printhuman
			
		h[i].PrintHuman();				// ��ü �迭�� .���� ����
	}


	Human *h1 = new Human("������", 50);	// ��ü ������ �迭�� arrow ������ ��� // humanŬ���� �ȿ� h1�ּҿ� ��ü ���޸𸮿� ������,50�� �Ҵ�
	
	h1->PrintHuman();

	delete h1;


	return 0;
}
