// main 함수 매개변수를 이용해 cmd에 있는 type 구현
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc-1 != 1)
	{
		printf("\n-- 매개변수를 1개 사용하세요 --\n\n");
		return 0;
	}

	FILE* fPtr;
	char str[200];

	fPtr = fopen(argv[1], "r"); // File Open

	for (;;)
	{
		fgets(str, 200, fPtr); // 파일 내용 읽어오기

		if (feof(fPtr)) break; // 파일 끝났으면 for문 탈출

		printf("%s", str); // 출력
	}
	printf("\n");

	fclose(fPtr);

	return 0;
}