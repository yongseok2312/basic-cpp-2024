#include <iostream>
using namespace std;

class Person {
private:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage) {
		cout << "�θ� ������ ����" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void Whatyouname() const {
		cout << "My name is " << name << endl;

	}
	void HowOldAreYou() const {
		cout << "My age is " << age << endl;
	}
	

};

class UnivStudent :public Person {	//���
	string major;	//Ȯ�峻���� �ۼ��ϸ� �� // ���ڿ� string
public: 
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage) {	// �θ� ������ ȣ���Ͽ� �ʱ�ȭ ��Ŵ
		cout << "�ڽ� ������ ����" << endl;
		this->major = major;

	}
	void  WhoAreYou() const {	// �θ� Ŭ���� �Լ� �����ͼ� ��� ����
		Whatyouname();
		HowOldAreYou();
	}
	void Whatyourmajor() const {
		cout << "My major is " << major << endl;
	}

};



int main() {

	UnivStudent S("�̿뼮", 27, "����� ���а�");
	S.WhoAreYou();
	S.Whatyourmajor();
	return 0;
}