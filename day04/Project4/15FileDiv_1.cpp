#include <iostream>

class human
{
private:
	int num;

public:
	char name[20];
	int age;
	char job[20];

	void humanlifo()
	{
		std::cout << "name: " << name << " age: " << age << " job: " << job << std::endl;
	}

	human() 
	{
	}
	human(const char* aName, int anAge, const char* aJob)
	{
		strcpy(name, aName);
		age = anAge;
		strcpy(job, aJob);
	}

};