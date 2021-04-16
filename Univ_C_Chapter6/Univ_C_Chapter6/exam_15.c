// for문과 if문을 사용하여 아스키코드의 0~127을 10진수, 16진수, 문자로 출력하는 프로그램.

#include <stdio.h>

int main()
{
	int i;
	
	for (i = 0; i <= 127; i++)
	{
		if (i % 16 == 0)
		{
			printf("---------------------\n");
			printf("10진수\t16진수\t문자\n");
			printf("---------------------\n");
		}

		printf("%5d %5x %5c\n", i, i, i);
	}

	return 0;
}