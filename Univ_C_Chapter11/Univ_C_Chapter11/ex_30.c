// 구구단을 파일에 출력하는 예제
#include <stdio.h>

int main(void)
{
	int i, j;
	FILE* fPtr;

	fPtr = fopen("C:\\CProgramming\\Times_Table.txt", "w");

	for (i = 1; i < 9; i++)
	{
		fprintf(fPtr, "#제%d단# ", i + 1);
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