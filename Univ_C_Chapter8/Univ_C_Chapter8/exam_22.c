// 2차원 배열에 구구단 저장
#include <stdio.h>

int main(void)
{
	int times_table[9][9] = { 0 };
	int i, j;
	
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			times_table[i-1][j-1] = i * j;
		}
	}

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%dX%d=%2d\t", i, j, times_table[i - 1][j - 1]);
		}
		printf("\n");
	}

	return 0;
}