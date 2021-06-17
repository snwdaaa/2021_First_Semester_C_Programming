// getchar()

#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자열을 입력하세요 : ");
	ch = getchar();
	putchar(ch);

	ch = getchar();
	putchar(ch);

	ch = getchar();
	putchar(ch);

	return 0;
}