// �Է¹��� ���ڿ����� ���� ġȯ
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	char ex_ch, new_ch;
	int i, str_length;

	printf("���ڿ��� �Է� : ");
	gets(str);

	str_length = strlen(str);

	printf("���� ���ڿ� ���ο� ���� : ");
	scanf(" %c %c", &ex_ch, &new_ch);

	for (i = 0; i < str_length; i++)
	{
		if (str[i] == ex_ch)
			str[i] = new_ch;
	}

	printf("��ȯ�� ��� ==> %s\n", str);

	return 0;
}