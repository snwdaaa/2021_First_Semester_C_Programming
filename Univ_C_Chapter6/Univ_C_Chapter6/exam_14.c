// ��ø for���� ����Ͽ� ����� �������� ����ϴ� ���α׷�.

#include <stdio.h>

int main()
{
	int i, j;

	for (i = 2; i <= 9; i++)
		printf(" #�� %d ��# \t", i);

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