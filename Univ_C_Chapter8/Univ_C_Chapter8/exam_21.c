#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int i, str_len;

	printf("문자 입력 : ");
	gets(str);

	str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		// 대문자 <-> 소문자. 그 외에는 그대로
		if (str[i] >= 65 && str[i] <= 90) // 대문자
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122) // 소문자
			str[i] -= 32;
	}

	printf("변환된 문자 => %s\n", str);

	return 0;
}