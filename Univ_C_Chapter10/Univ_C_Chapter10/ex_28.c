// �Լ��� �̿��� ��ҹ��� ��ȯ ���α׷�
#include <stdio.h>

void Convert_Case(char str[], int str_length)
{
	int i;

	for (i = 0; i < str_length; i++)
	{
		// �ҹ����� ��� �빮�ڷ� ��ȯ
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		// �빮���� ��� �ҹ��ڷ� ��ȯ
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		// �ҹ��ڵ�, �빮�ڵ� �ƴ� ��쿡�� �ƹ� �͵� ���� �ʴ´�.
	}

	printf("��ȯ�� ��� ==> %s\n", str);
}

int main(void)
{
	char str[101];
	int length;

	printf("���ڿ��� �Է� (100�� �̳�) : ");
	gets(str);

	length = strlen(str);

	Convert_Case(str, length);

	return 0;
}