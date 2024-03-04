#include <iostream>
using namespace std;

class RemoteControl {
public:
	 virtual void on() {
		cout  << " on" << endl;
	}
};

class SamsungTv :public RemoteControl {
public:
	 virtual void on() { cout << "Samsung TV on" << endl; }

};

class LgTv : public RemoteControl {
public:
	virtual void on() {cout <<"LgTv on"<<endl; }

};

int main() {
	RemoteControl * remote = new SamsungTv();	// �ڿ� ��ü ����� �����Լ� ���
	remote->on();
	new LgTv();
	remote = new LgTv();
	remote->on();
	delete remote;
	return 0;
}