#include <stdio.h>

int main(void)
{
	char s[20];
	FILE* fPtr;

	fPtr = fopen("C:\\CProgramming\\data1.txt", "r");

	fgets(s, 20, fPtr);
	printf("파일에서 읽은 문자열 : ");
	puts(s);
	
	fclose(fPtr);

	return 0;
}