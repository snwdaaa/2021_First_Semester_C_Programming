#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	char str[20];

	fPtr = fopen("C:\\CProgramming\\data4.txt", "a"); // 쓰기 모드로 파일 open

	printf("파일에 입력할 문자열을 입력하세요(최대 19자) : ");
	gets(str);

	fputs(str, fPtr); // 파일에 입력

	fclose(fPtr);

	return 0;
}