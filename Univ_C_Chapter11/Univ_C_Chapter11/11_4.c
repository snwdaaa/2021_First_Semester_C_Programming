#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[5] = "5678";
	char input[5];

	input[4] = '\0';

	printf("비밀번호 네 글자를 입력하세요 : ");
	for (int i = 0; i < 4; i++)
	{
		input[i] = getch();
		putch('*');
	}

	// 입력값 = 비밀번호
	if (strcmp(password, input) == 0)
	{
		printf("\n비밀번호 통과\n");
	}
	else
	{
		printf("\n입력한 비밀번호 ");

		for (int i = 0; i < 4; i++)
		{
			putchar(input[i]);
		}

		printf(" 가 틀렸음\n");
	}

	return 0;
}