#include<stdio.h>

int main()
{
	char str[10] = " ";
	int i;

	printf("문자열을 입력 ==> ");
	scanf("%s", str);

	for (i = sizeof(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}