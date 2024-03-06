#include <iostream>
using namespace std;

class Myclass {
private:
	int* ptr;
public:
	Myclass(int p) :ptr(new int[100]) {
		printf("생성자호출\n");
	}
	~Myclass() {
		printf("소멸자 호출\n");
		delete[]ptr;
	}
};


int main() {
	Myclass* m1 = new Myclass(10);
	std::cout << "-----------" << std::endl;
	std::unique_ptr<Myclass>m2(new Myclass(20));
	return 0;
}