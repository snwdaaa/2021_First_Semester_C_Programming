// �������� ����� 2���� �迭�� ������ �� ����ϴ� ���α׷�.

#include <stdio.h>

int main()
{
	int multiply_table[9][9];
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			multiply_table[i][j] = (i+1) * (j+1);
		}
	}

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%d X %d = %d\t", i + 1, j + 1, multiply_table[i][j]);
		}
		printf("\n");
	}

	return 0;
}