// �빮�� <-> �ҹ��� ���� ��ȯ�ϴ� ���α׷�.
// �� ���� ���ڴ� �״�� ���.

#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int case_convert_mask = 'a' - 'A'; // 97 - 65 = 32
	int i, str_len;

	printf("���� �Է� : ");
	//scanf_s("%s", str, 49); scanf �Լ��� ������ �Է��� �� ����. ������ �Է��ϸ� �� ���ڰ� �Էµ�. �׷��� ������ �ִ� ���ڿ��� �Է��Ϸ��� gets�� ����.
	gets(str);

	str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z')) // �ҹ��� ����
		{
			str[i] -= case_convert_mask;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z')) // �빮�� ����
		{
			str[i] += case_convert_mask;
		}

	}

	printf("��ȯ�� ���� => %s\n", str);

	return 0;
}