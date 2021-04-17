// 문자열을 입력 받고, 그 문자열에서 변환할 기존 문자와 새로운 문자를 입력 -> 변환한 문자열을 출력

#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	char ex_ch, cv_ch; // 변환할 기존 문자, 변환한 자리에 넣을 문자
	int str_len, i;

	printf("여러 글자를 입력 : ");
	gets(str);

	printf("기존 문자와 새로운 문자 : ");
	scanf_s(" %c", &ex_ch, 1);
	scanf_s(" %c", &cv_ch, 1);

	str_len = strlen(str);

	// ex_ch와 같은 문자를 찾으면 cv_ch로 변환
	for (i = 0; i < str_len; i++)
	{
		if (str[i] == ex_ch)
		{
			str[i] = cv_ch;
		}
	}

	puts(str); // 변환된 문자열 출력

	return 0;
}