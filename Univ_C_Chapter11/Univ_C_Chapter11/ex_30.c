// �������� ���Ͽ� ����ϴ� ����
#include <stdio.h>

int main(void)
{
	int i, j;
	FILE* fPtr;

	fPtr = fopen("C:\\CProgramming\\Times_Table.txt", "w");

	for (i = 1; i < 9; i++)
	{
		fprintf(fPtr, "#��%d��# ", i + 1);
	}
	fprintf(fPtr, "\n\n");


	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			fprintf(fPtr, "%dX%d=%d ", j + 1, i + 1, (i + 1) * (j + 1));
		}
		fprintf(fPtr, "\n");
	}

	fclose(fPtr);

	return 0;
}