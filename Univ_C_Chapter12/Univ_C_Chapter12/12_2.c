// ������ ũ���� �迭�� ���� �޸� ���� �����ִ� ��
#include <stdio.h>

int main(void)
{
	int aa[10000]; // 40,000 Byte -> �� ������ ���� & 10000�� �ʰ��Ϸ��� �Ұ���
	int* p;
	int i, sum = 0;
	int cnt;

	printf("�Է��� ������? ");
	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++)
	{
		printf("%d ��° ���� : ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < cnt; i++)
	{
		sum += *(p + i);
	}

	printf("�Է��� ������ ��: %d\n", sum);

	return 0;
}