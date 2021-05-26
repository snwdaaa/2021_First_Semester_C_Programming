// 입력받은 문자열에서 문자 치환
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	char ex_ch, new_ch;
	int i, str_length;

	printf("문자열을 입력 : ");
	gets(str);

	str_length = strlen(str);

	printf("기존 문자와 새로운 문자 : ");
	scanf(" %c %c", &ex_ch, &new_ch);

	for (i = 0; i < str_length; i++)
	{
		if (str[i] == ex_ch)
			str[i] = new_ch;
	}

	printf("변환된 결과 ==> %s\n", str);

	return 0;
}