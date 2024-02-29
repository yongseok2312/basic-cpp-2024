#include <iostream>
using namespace std;

class Gun {
private:
	int bullet;
public:
	Gun(int bnum) :bullet(bnum) {
	}
	void Shot() {
		cout << "BBAN" << endl;
		bullet--;
	
	}
	
	int Bullet() {
		return bullet;
	}

};
class Police : public Gun {
private: int handcuffs;
public:
	Police(int bnum, int bcuff) :Gun(bnum), handcuffs(bcuff) {}
	void PutHandcuff() {
		cout << "SNAP" << endl;
		handcuffs--;
	}
	void a() {
		cout << Bullet() << "," << handcuffs << endl;
	}
};

int main() {
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandcuff();
	pman.a();
	return 0;
}