// 입력된 문자열에 대문자와 소문자, 숫자가 각각 몇 개 입력되었는지 세는 프로그램.
// 대문자, 소문자, 숫자 외에는 무시

#include <stdio.h>

int main()
{
	char str[101];
	char ch;
	int index = 0;
	int str_len;
	int upper_cnt = 0, lower_cnt = 0, num_cnt = 0;

	printf("문자열을 입력(100자 이내) : ");
	scanf_s("%s", str, 100);

	// 문자열 길이
	str_len = strlen(str);

	// 인덱스 변수 <= str_len인 동안 -> 문자열 하나씩 열어보면서 A~Z, a~z, 0~9인거 찾기
	while (index <= str_len) // 문자열의 마지막인 '\0' (널 문자)가 아닐 때까지 반복해도 OK => while(str[index] != '0')
	{
		if ((str[index] >= 'A') && (str[index] <= 'Z')) // 대문자
		{
			upper_cnt++;
		}
		else if ((str[index] >= 'a') && (str[index] <= 'z')) // 소문자
		{
			lower_cnt++;
		}
		else if ((str[index] >= '0') && (str[index] <= '9')) // 숫자
		{
			num_cnt++;
		}

		index++;
	}

	printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_cnt, lower_cnt, num_cnt);

	return 0;
}