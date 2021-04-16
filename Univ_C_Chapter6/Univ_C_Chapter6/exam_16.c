// 입력된 영문자나 숫자를 for문을 이용하여 반대 순서로 출력하는 프로그램.

#include <stdio.h>

int main()
{
	char str[101];
	int str_cnt;
	int i;

	printf("영문자 및 숫자를 입력 (100자 이하) : ");
	scanf_s("%s", str, 100);

	str_cnt = strlen(str); // strlen(문자열) => 문자열의 길이를 int형으로 반환하는 함수

	printf("입력한 문자열 ==> %s\n", str);
	printf("변환된 문자열 ==> ");

	
	for (i = str_cnt; i >= 0; i--)
		printf("%c", str[i]);

	
	return 0;
}