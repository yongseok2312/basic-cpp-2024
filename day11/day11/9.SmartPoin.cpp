#include <iostream>
using namespace std;

class Myclass {
private:
	int* ptr;
public:
	Myclass(int p) :ptr(new int[100]) {
		printf("������ȣ��\n");
	}
	~Myclass() {
		printf("�Ҹ��� ȣ��\n");
		delete[]ptr;
	}
};


int main() {
	Myclass* m1 = new Myclass(10);
	std::cout << "-----------" << std::endl;
	std::unique_ptr<Myclass>m2(new Myclass(20));
	return 0;
}