#include <stdio.h>

int main(void)
{
	char str[200];
	FILE* fPtr;

	fPtr = fopen("C:\\windows\\win.ini", "r");

	int i = 1;

	while (1)
	{
		fgets(str, 200, fPtr);

		if (feof(fPtr))
		{
			break;
		}

		printf("%dวเ: %s", i++, str);
	}

	fclose(fPtr);

	return 0;
}