#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	char str_inverted[10];
	int i, str_length;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	str_length = strlen(str);

	for (i = 0; i < str_length; i++)
	{
		str_inverted[i] = str[(str_length - 1) - i];
	}

	str_inverted[i] = '\0';

	printf("������ �Ųٷ� ��� ==> %s\n", str_inverted);
}