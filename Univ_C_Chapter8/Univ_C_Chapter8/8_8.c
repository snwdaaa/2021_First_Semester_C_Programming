// 문자열을 저장한 후, 다른 배열에 역순으로 저장하고 그것을 출력하는 프로그램

#include <stdio.h>

int main(void)
{
	char str[5] = "abcd";
	char str_inverted[5];
	int i;

	for (i = 0; i < 4; i++)
	{
		str_inverted[i] = str[3 - i]; // 역순으로 저장
	}

	str_inverted[4] = '\0'; // 문자열로 만들기 위해 마지막에 널 문자 입력

	printf("str : %s \nstr_inverted : %s \n", str, str_inverted);

	return 0;
}