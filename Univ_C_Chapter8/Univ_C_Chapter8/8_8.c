// ���ڿ��� ������ ��, �ٸ� �迭�� �������� �����ϰ� �װ��� ����ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	char str[5] = "abcd";
	char str_inverted[5];
	int i;

	for (i = 0; i < 4; i++)
	{
		str_inverted[i] = str[3 - i]; // �������� ����
	}

	str_inverted[4] = '\0'; // ���ڿ��� ����� ���� �������� �� ���� �Է�

	printf("str : %s \nstr_inverted : %s \n", str, str_inverted);

	return 0;
}