// main 함수에서의 매개변수 사용 1
#include <stdio.h>

int main(int argc, char* argv[]) // 매개변수 지정
{
	int i;

	printf("argc 매개변수 ==> %d\n", argc-1); // 매개변수의 개수 출력

	for (i = 1; i < argc; i++)
	{
		printf("argv[%d] 매개변수 ==> %s\n", i, argv[i]); // 매개변수의 내용 출력
	}

	return 0;
}