#include <iostream>

int main(int argc, char* argv[])				//int main()������ �����Լ��� �Է��� ����(void), ����� ����(int) 
{
	printf("argc: %d\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	printf("���α׷��� �����մϴ�!!\n");

	return 0; 
}

/* 
������ ��� ������Ʈ ����

cmd - cd - dir C:\Sources\Basic-cpp-2024\day12\x64\Debug 

exe ���� Ȯ��

C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12 �Է½� ���డ�� - day12�� ���� ������Ʈ������ �Է�!

C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12 1 2 3 4 5 �Է½� �ش簪�� �� ��°� ���� 

<���Ⱚ>
C:\Users\Administrator>C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12 1 2 3 4 5
argc: 6
argv[0]: C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12
argv[1]: 1
argv[2]: 2
argv[3]: 3
argv[4]: 4
argv[5]: 5
���α׷��� �����մϴ�!!

*/
