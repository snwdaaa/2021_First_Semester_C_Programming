// �Էµ� ���ڿ� ���� �ݴ��, �׸��� ���ڿ� ���ڵ鵵 �Ųٷ� ����ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* p[3]; // ������ �迭 ����
	char temp[100];
	int i, j, temp_length, p_length;

	for (i = 0; i < 3; i++)
	{
		printf("%d ��° ���ڿ� : ", i + 1);
		gets(temp);

		temp_length = strlen(temp);

		p[i] = (int*)malloc((sizeof(char) * temp_length) + 1); // �Է¹��� ���ڿ��� ���̸�ŭ �޸� ������ �Ҵ��Ѵ�.
		strcpy(p[i], temp); // i �࿡ �Է¹��� ���ڿ� ����
	}
	printf("\n");

	printf("-- �Է°� �ݴ�� ��� (������) : ���� ������ �Ųٷ� --\n");
	for (i = 2; i >= 0; i--)
	{
		printf("%d : ", i + 1);

		p_length = strlen(p[i]);
		for (j = p_length - 1; j >= 0; j--)
		{
			printf("%c", p[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// �޸� �ݳ�
	for (i = 0; i < 3; i++)
	{
		free(p[i]);
	}

	return 0;
}