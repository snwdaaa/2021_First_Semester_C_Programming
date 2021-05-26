// strcat 함수
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[7] = "XYZ";

	strcat(str, "ABC"); // 문자열을 이어붙인다. 첫 번째 인수로 들어오는 문자열의 널 문자부터 시작. 이어붙이는 문자열의 길이 + 1 이상의 공간이 필요하다.

	printf("str : %s\n", str);

	return 0;
}