#include <stdio.h>

int main(void)
{
	char ss[8] = "Basic-C"; // B, a, s, i, c, -, C, \0
	int i;

	ss[5] = '#'; // '-' -> '#'

	for (i = 0; i < 8; i++)
	{
		printf("ss[%d] ==> %c \n", i, ss[i]);
	}

	printf("문자열 배열 ss ==> %s \n", ss); // 배열 전체를 문자열로 출력

	return 0;
}