#include <stdio.h>

int main(void)
{
	char s[20];

	printf("문자열을 입력 : ");
	gets(s); // gets(문자열 배열)
	
	puts(s); // puts(문자열 배열)

	return 0;
}