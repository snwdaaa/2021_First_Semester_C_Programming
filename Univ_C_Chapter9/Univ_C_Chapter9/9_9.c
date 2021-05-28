// 문자열 배열과 포인터의 관계 2
#include <stdio.h>

int main(void)
{
	char s[8] = "Basic-C";
	char* p;
	int i;

	p = s;

	for (i = sizeof(s) - 2; i >= 0; i--)
	{
		printf("%c", *(p + i)); // *(p+i) = *(s+i) = s[i]
	}

	printf("\n");

	return 0;
}