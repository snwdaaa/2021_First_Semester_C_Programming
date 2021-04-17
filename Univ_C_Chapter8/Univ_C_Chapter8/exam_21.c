// 대문자 <-> 소문자 서로 변환하는 프로그램.
// 그 외의 문자는 그대로 출력.

#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int case_convert_mask = 'a' - 'A'; // 97 - 65 = 32
	int i, str_len;

	printf("문자 입력 : ");
	//scanf_s("%s", str, 49); scanf 함수는 공백을 입력할 수 없다. 공백을 입력하면 널 문자가 입력됨. 그래서 공백이 있는 문자열을 입력하려면 gets를 쓰자.
	gets(str);

	str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z')) // 소문자 검출
		{
			str[i] -= case_convert_mask;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z')) // 대문자 검출
		{
			str[i] += case_convert_mask;
		}

	}

	printf("변환된 문자 => %s\n", str);

	return 0;
}