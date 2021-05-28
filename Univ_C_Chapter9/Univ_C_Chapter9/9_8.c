// 문자열 배열과 포인터의 관계
#include <stdio.h>

int main(void)
{
	char s[8] = "Basic-C";
	char* p;

	p = s;

	// &s[3] == p + 3
	// 주소를 string으로 출력?
	printf("&s[3] ==> %s\n", &s[3]);
	printf("p+3 ==> %s\n\n", p + 3);

	// s[3] == *(p + 3)
	printf("s[3] ==> %c\n", s[3]);
	printf("*(p+3) ==> %c\n", *(p + 3));

	return 0;
}