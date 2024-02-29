#include <iostream>
using namespace std;

class PermanetWorker {
private:
	char name[100];
	int salary;
public:
	PermanetWorker(const char* name, int money)
		:salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() const {
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl;
	}
};

class EmployeeHandler {
private:
	PermanetWorker* empList[50];	// ��ü ������ �迭
	int empNum;

public:
	EmployeeHandler(): empNum(0) {}
	void AddEmployee(PermanetWorker* emp) {	// ������ ��ü�� �����͸� �޾Ƽ� empList �迭�� ���� �ִ´�
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();

	}
	void ShowTotalSalary() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;

	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void) {
	EmployeeHandler handler;

	handler.AddEmployee(new PermanetWorker("Kim", 1000));
	handler.AddEmployee(new PermanetWorker("Lee", 1500));
	handler.AddEmployee(new PermanetWorker("Jun", 2000));

	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();
	return 0;
}