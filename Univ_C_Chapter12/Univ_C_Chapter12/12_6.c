// ������ �迭
#include <stdio.h>

int main()
{
	char data[3][100]; // 3 * 100 ũ���� ������ 2���� �迭
	int i;

	// �� �ึ�� ���ڿ��� ������.
	for (i = 0; i < 3; i++)
	{
		printf("%d ��° ���ڿ� : ", i + 1);
		gets(data[i]);
	}
	printf("\n");

	printf("-- �Է°� �ݴ�� ��� (������ �迭) --\n");
	for (i = 2; i >= 0; i--)
	{
		printf("%d : %s\n", i + 1, data[i]);
	}

	return 0;
}