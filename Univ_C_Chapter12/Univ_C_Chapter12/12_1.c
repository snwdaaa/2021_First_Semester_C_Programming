// �����͸� ����Ͽ� ���� �հ踦 ���ϴ� ��
#include <stdio.h>

int main(void)
{
	int aa[3];
	int* p;
	int i, sum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d ��° ���� �Է�: ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < 3; i++)
	{
		sum += *(p + i);
	}

	printf("�Է��� ������ ��: %d\n", sum);

	return 0;
}