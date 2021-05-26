// gets, puts 함수
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	int str1_length, str2_length;

	puts("첫 번째 문자열을 입력하세요 : ");
	gets(str1);

	puts("두 번째 문자열을 입력하세요 : ");
	gets(str2);

	str1_length = strlen(str1);
	str2_length = strlen(str2);

	printf("첫 번째 문자열의 길이 : %d\n", str1_length);
	printf("두 번째 문자열의 길이 : %d\n", str2_length);

	if (strcmp(str1, str2) == 0) // 두 문자열이 같으면
		puts("두 문자열이 같습니다.\n");
	else
		puts("두 문자열이 다릅니다.\n");

	return 0;
}