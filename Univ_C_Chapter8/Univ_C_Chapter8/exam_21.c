#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int i, str_len;

	printf("���� �Է� : ");
	gets(str);

	str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		// �빮�� <-> �ҹ���. �� �ܿ��� �״��
		if (str[i] >= 65 && str[i] <= 90) // �빮��
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122) // �ҹ���
			str[i] -= 32;
	}

	printf("��ȯ�� ���� => %s\n", str);

	return 0;
}