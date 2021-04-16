// 중첩 for문을 사용하여 제목과 구구단을 출력하는 프로그램.

#include <stdio.h>

int main()
{
	int i, j;

	for (i = 2; i <= 9; i++)
		printf(" #제 %d 단# \t", i);

	printf("\n\n");

	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++)
		{
			printf("%d X %d = %d\t", j, i, j * i);
		}

		printf("\n");
	}

	return 0;
}