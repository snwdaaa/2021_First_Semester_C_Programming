#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	char str_inverted[10];
	int i, str_length;

	printf("문자열을 입력하세요 : ");
	gets(str);

	str_length = strlen(str);

	for (i = 0; i < str_length; i++)
	{
		str_inverted[i] = str[(str_length - 1) - i];
	}

	str_inverted[i] = '\0';

	printf("내용을 거꾸로 출력 ==> %s\n", str_inverted);
}