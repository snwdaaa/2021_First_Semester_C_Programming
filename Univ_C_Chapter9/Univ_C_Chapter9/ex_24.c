// ���� 24. �����͸� �̿��Ͽ� ���ڿ��� �ݴ� ������ ���
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	char* p;
	int i, str_len;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	p = str; // ������ p�� ���ڿ� �迭 str�� �ּҸ� ����
	str_len = strlen(str);

	printf("������ �Ųٷ� ��� ==> ");

	for (i = str_len - 1; i >= 0; i--)
	{
		printf("%c", *(p+i)); // *(p+i) = *(str+i) = str[i] = p[i]
	}

	printf("\n");

	return 0;
}