// 함수를 이용한 대소문자 변환 프로그램
#include <stdio.h>

void Convert_Case(char str[], int str_length)
{
	int i;

	for (i = 0; i < str_length; i++)
	{
		// 소문자인 경우 대문자로 변환
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		// 대문자인 경우 소문자로 변환
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		// 소문자도, 대문자도 아닌 경우에는 아무 것도 하지 않는다.
	}

	printf("변환된 결과 ==> %s\n", str);
}

int main(void)
{
	char str[101];
	int length;

	printf("문자열을 입력 (100자 이내) : ");
	gets(str);

	length = strlen(str);

	Convert_Case(str, length);

	return 0;
}