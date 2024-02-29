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
	PermanetWorker* empList[50];	// 객체 포인터 배열
	int empNum;

public:
	EmployeeHandler(): empNum(0) {}
	void AddEmployee(PermanetWorker* emp) {	// 정규직 객체의 포인터를 받아서 empList 배열에 집어 넣는다
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