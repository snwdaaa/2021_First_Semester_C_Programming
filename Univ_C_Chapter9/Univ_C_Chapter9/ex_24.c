// 예제 24. 포인터를 이용하여 문자열을 반대 순서로 출력
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	char* p;
	int i, str_len;

	printf("문자열을 입력하세요 : ");
	gets(str);

	p = str; // 포인터 p에 문자열 배열 str의 주소를 대입
	str_len = strlen(str);

	printf("내용을 거꾸로 출력 ==> ");

	for (i = str_len - 1; i >= 0; i--)
	{
		printf("%c", *(p+i)); // *(p+i) = *(str+i) = str[i] = p[i]
	}

	printf("\n");

	return 0;
}