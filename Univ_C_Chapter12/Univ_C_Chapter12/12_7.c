// ������ �迭
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* p[3]; // �ּҸ� ������ ������ �迭
	char temp[100]; // �Է� ���� ������ �ӽ� ����
	int i, size;

	for (i = 0; i < 3; i++)
	{
		printf("%d ��° ���ڿ� : ", i + 1);
		gets(temp);

		size = strlen(temp); // n��° ���ڿ��� ���̸� �����Ѵ�.
		p[i] = (char*)malloc((sizeof(char) * size) + 1); // �Է¹��� ���ڿ��� ũ�⸸ŭ�� ������ �Ҵ��Ѵ�.

		// ���� �Ҵ���� �������� �Է¹��� ���ڿ� ����
		strcpy(p[i], temp);
	}
	printf("\n");
	
	printf("-- �Է°� �ݴ�� ��� (������) --\n");
	for (i = 2; i >= 0; i--)
	{
		printf("%d : %s\n", i+1, p[i]);
	}

	// ������ �迭�� ���� ��ҵ� -> �޸� �ݳ�
	for (i = 0; i < 3; i++)
	{
		free(p[i]);
	}

	return 0;
}