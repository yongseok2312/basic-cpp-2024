#include <iostream>
using namespace std;

class Computer {
private:
	char owner[50];
public:
	Computer(const char* name) { strcpy(owner, name); }
	void Calculate() {
		cout << "��û ������ ����մϴ�." << endl;
	}

};
class NotebookComp :public Computer {
private:
	int Battery;
public:
	NotebookComp(const char* name, int initchag) :Computer(name), Battery(initchag) {}
	void charging() { Battery += 5; }
	void usebattery() { Battery -= 1; }
	void MovingCal() {
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�" << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		Calculate();
		usebattery();
	}
	int GetBatteryInfo() {
			return Battery;
		}

};

class TabletNotebook : public NotebookComp 
{
private:
	char regstPenMode[50];
public:
	TabletNotebook(const char* name, int initchag, const char* pen) :NotebookComp(name, initchag) {
		strcpy(regstPenMode, pen);

	}
	void Write(const char* penInfo) {
		if (GetBatteryInfo() < 1) {
			cout << "������ �ʿ��մϴ�" << endl;
			return;
		}
		if (strcmp(regstPenMode, penInfo) != 0) {
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout << "�ʱ� ������ ó���մϴ�" << endl;
		usebattery();

	}
	
};

int main() {
	NotebookComp nc("�̼���", 5);
	TabletNotebook tn("������", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}