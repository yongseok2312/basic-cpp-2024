#include <iostream>

int main(int argc, char* argv[])				//int main()기존의 메인함수는 입력은 없고(void), 출력은 있음(int) 
{
	printf("argc: %d\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	printf("프로그램을 종료합니다!!\n");

	return 0; 
}

/* 
관리자 명령 프롬프트 실행

cmd - cd - dir C:\Sources\Basic-cpp-2024\day12\x64\Debug 

exe 파일 확인

C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12 입력시 실행가능 - day12와 같은 프로젝트명으로 입력!

C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12 1 2 3 4 5 입력시 해당값이 들어간 출력값 산출 

<산출값>
C:\Users\Administrator>C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12 1 2 3 4 5
argc: 6
argv[0]: C:\Sources\Basic-cpp-2024\day12\x64\Debug\day12
argv[1]: 1
argv[2]: 2
argv[3]: 3
argv[4]: 4
argv[5]: 5
프로그램을 종료합니다!!

*/
