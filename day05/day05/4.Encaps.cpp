#include <iostream>
using namespace std;

class SinivelCap {
public:
	void Take() const { cout << "�๰�� ��! ���ϴ�." << endl;
	}
};
class sneezeCap {
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�" << endl;
	}
};
class snuffleCap {
public:
	void Take() const {
		cout << "�ڰ� �� �ո��ϴ�." << endl;
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