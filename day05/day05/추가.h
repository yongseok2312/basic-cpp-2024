class human {
private:	
	char name[20];
	int age;
	char job[20];
	const int 생년월일;
public:
	human(const char* anum, int ag, const char* mjob, int birth);
	void printhuman();

};