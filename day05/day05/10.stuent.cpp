//�й� �̸� ���� ���� ������ �ִ� Ŭ���� �ۼ�
#include <iostream>

using namespace std; 

class StudentClass {
private:	
	const int ID;		// �й��� ���ȭ
	char name[20];		// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�. 
	char major[20];
	int age;

public:	
	// ���ڿ��� �ּ��̱⶧���� ������ ������ �־ ��� - ���忭�� ù��° ���� �ּҰ� ����ȴ�. 
	StudentClass(int a, const char *uname, const char *m, int e) : ID(a) { //strcp�� ���� ������ const char *
		// int ID = a;  // : ID(a) �������ν� �ּ�ó�� (ID(a) : �ʱ�ȭ- MemberInit)
		// ����̴ϼȶ�����(Member Initializer)�� ��ü ������ �ʱ�ȭ���� �ʴ� ������� �ʱ�ȭ�Ҷ� ���
		// ��, ��ü ������ ��� ���� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ 
		strcpy(name, uname); // ���ڿ� �ʱ�ȭ�� ��� 
		strcpy(major, m);
		age = e;
	}

	void Printstudent() {
		cout << "�й�:" << ID << "�̸�:" << name << "����:" << major << "����:" << age << "�Դϴ�" << endl;

	}
};

int main() {
	StudentClass sc1(2017013198,"�̿뼮","1231",27); //��ü�� �����ϸ� �����ڸ� ȣ���ؾ��Ѵ�. 
	sc1.Printstudent();
	return 0; 
}