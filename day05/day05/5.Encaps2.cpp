#include <iostream>
using namespace std;

class SinivelCap {
public:
	void Take() const {
		cout << "�๰�� ��! ���ϴ�." << endl;
	}
};
class sneezeCap {
public:
	void Take() const {
		cout << "��ä�Ⱑ �ܽ��ϴ�" << endl;
	}
};
class snuffleCap {
public:
	void Take() const {
		cout << "�ڰ� �� �ո��ϴ�." << endl;
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