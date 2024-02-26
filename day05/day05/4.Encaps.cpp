#include <iostream>
using namespace std;

class SinivelCap {
public:
	void Take() const { cout << "Äà¹°ÀÌ ½Ï! ³³´Ï´Ù." << endl;
	}
};
class sneezeCap {
public:
	void Take() const { cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù" << endl;
	}
};
class snuffleCap {
public:
	void Take() const {
		cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù." << endl;
	}

};
class ColdPatient {
public: 
	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
	void TakesneezeCap(const sneezeCap& cap) const { cap.Take(); }
	void TakesnuffleCap(const snuffleCap& cap) const { cap.Take(); }
};

int main() {
	SinivelCap scap;
	sneezeCap zcap;
	snuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakesneezeCap(zcap);
	sufferer.TakesnuffleCap(ncap);
	return 0;
}