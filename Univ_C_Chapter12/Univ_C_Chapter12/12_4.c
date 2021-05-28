// malloc �Լ��� calloc �Լ��� ��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p, *s;
	int i, j;

	printf("malloc() �Լ� ���\n");
	// 12 ����Ʈ ��ŭ�� ������ �Ҵ� ����
	p = (int*)malloc(sizeof(int) * 3);

	for (i = 0; i < 3; i++)
	{
		printf("�Ҵ�� ���� �ʱⰪ p[%d] = %d\n", i, p[i]);
	}
	printf("\n");
	free(p);

	printf("calloc() �Լ� ���\n");
	// 12 ����Ʈ ��ŭ�� ������ �Ҵ� ����
	// calloc -> �Ҵ� ���� ������ ��� ���� 0���� �ʱ�ȭ
	s = (int*)calloc(3, sizeof(int));

	for (j = 0; j < 3; j++)
	{
		printf("�Ҵ�� ���� �ʱⰪ s[%d] = %d\n", j, s[j]);
	}
	printf("\n");
	free(s);

	return 0;
}