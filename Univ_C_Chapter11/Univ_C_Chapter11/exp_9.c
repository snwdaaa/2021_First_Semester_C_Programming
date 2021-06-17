#include <stdio.h>

int main(void)
{
	FILE* rPtr;
	FILE* wPtr;
	int i;
	char str[200];

	rPtr = fopen("c:\\windows\\win.ini", "r");
	wPtr = fopen("c:\\CProgramming\\exp_9.txt", "w");

	for (i=1;;i++)
	{
		fgets(str, 200, rPtr);

		if (feof(rPtr)) break;

		fprintf(wPtr, "%dวเ : %s", i, str);
	}

	fclose(rPtr);
	fclose(wPtr);

	return 0;
}