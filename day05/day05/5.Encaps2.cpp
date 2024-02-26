#include <iostream>
using namespace std;

class SinivelCap {
public:
	void Take() const {
		cout << "Äà¹°ÀÌ ½Ï! ³³´Ï´Ù." << endl;
	}
};
class sneezeCap {
public:
	void Take() const {
		cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù" << endl;
	}
};
class snuffleCap {
public:
	void Take() const {
		cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù." << endl;
	}

};
class Contac600 {
private:
	SinivelCap sin;
	sneezeCap sne;
	snuffleCap snu;
public:
	void Take() const {
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class coldpatient
{
public:
	void TakeContac600(const Contac600& cap) const { cap.Take(); }
};

int main() {
	Contac600 cap;
	coldpatient sufferer;
	sufferer.TakeContac600(cap);
	return 0;
}