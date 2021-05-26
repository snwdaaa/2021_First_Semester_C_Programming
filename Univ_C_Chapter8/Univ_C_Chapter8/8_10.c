// strcpy 함수

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[4];

	strcpy(str, "XYZ"); // 문자열의 내용(첫 번째 인수)를 새로운 문자열 또는 문자형 배열(두 번째 인수)로 덮어쓴다.

	printf("문자열 str의 내용 : %s\n", str);

	return 0;
}