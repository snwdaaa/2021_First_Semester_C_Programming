// strlen �Լ�

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "XYZ";
	int str_length;

	str_length = strlen(str); // ���ڿ��� ���̸� ��ȯ. �̶� �� ���� �ձ����� ���̸� ��ȯ�Ѵ�.	���ڿ��� ����(�� ���� ����) != ������ �迭�� ũ��(�� ���� ����)

	printf("���ڿ� str�� ���� : %d\n", str_length);

	return 0;
}