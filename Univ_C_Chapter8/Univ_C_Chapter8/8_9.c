// strlen 함수

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "XYZ";
	int str_length;

	str_length = strlen(str); // 문자열의 길이를 반환. 이때 널 문자 앞까지의 길이를 반환한다.	문자열의 길이(널 문자 제외) != 문자형 배열의 크기(널 문자 포함)

	printf("문자열 str의 길이 : %d\n", str_length);

	return 0;
}