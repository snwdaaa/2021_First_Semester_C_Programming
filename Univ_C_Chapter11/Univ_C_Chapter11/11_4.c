#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[5] = "5678";
	char input[5];

	input[4] = '\0';

	printf("��й�ȣ �� ���ڸ� �Է��ϼ��� : ");
	for (int i = 0; i < 4; i++)
	{
		input[i] = getch();
		putch('*');
	}

	// �Է°� = ��й�ȣ
	if (strcmp(password, input) == 0)
	{
		printf("\n��й�ȣ ���\n");
	}
	else
	{
		printf("\n�Է��� ��й�ȣ ");

		for (int i = 0; i < 4; i++)
		{
			putchar(input[i]);
		}

		printf(" �� Ʋ����\n");
	}

	return 0;
}