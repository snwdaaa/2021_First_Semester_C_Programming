// �Էµ� ���ڿ��� �ݴ� ������ ����ϴ� ���α׷�

#include <stdio.h>
#include <string.h>

int main()
{
	char ss[101], tt[101]; // ss : �Է��� ���ڿ�, tt : ss�� �ݴ� ������ ���� �� ���ڿ�
	int i, str_len;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", ss, 100);

	str_len = strlen(ss); // strlen �Լ��� �ι��ڸ� ������ ���� ���� ��ȯ.

	for (i = 0; i <= str_len; i++)
	{
		tt[i] = ss[str_len - (i+1)]; // ss[str_len]�� �� �����̹Ƿ� str_len -1 ���� �����ؾ��Ѵ�.
	}

	tt[str_len] = '\0'; // tt �迭�� ���ڿ��� �Է� ���� ���� ������ �ΰ��� ������ ���� ����. �׷��� ���� ��������� ��.

	printf("������ �Ųٷ� ��� ==> %s", tt);

	return 0;
}