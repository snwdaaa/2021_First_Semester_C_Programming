// ���ڿ��� �Է� �ް�, �� ���ڿ����� ��ȯ�� ���� ���ڿ� ���ο� ���ڸ� �Է� -> ��ȯ�� ���ڿ��� ���

#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	char ex_ch, cv_ch; // ��ȯ�� ���� ����, ��ȯ�� �ڸ��� ���� ����
	int str_len, i;

	printf("���� ���ڸ� �Է� : ");
	gets(str);

	printf("���� ���ڿ� ���ο� ���� : ");
	scanf_s(" %c", &ex_ch, 1);
	scanf_s(" %c", &cv_ch, 1);

	str_len = strlen(str);

	// ex_ch�� ���� ���ڸ� ã���� cv_ch�� ��ȯ
	for (i = 0; i < str_len; i++)
	{
		if (str[i] == ex_ch)
		{
			str[i] = cv_ch;
		}
	}

	puts(str); // ��ȯ�� ���ڿ� ���

	return 0;
}