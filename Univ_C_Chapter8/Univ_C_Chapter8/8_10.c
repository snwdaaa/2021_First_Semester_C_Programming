// strcpy �Լ�

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[4];

	strcpy(str, "XYZ"); // ���ڿ��� ����(ù ��° �μ�)�� ���ο� ���ڿ� �Ǵ� ������ �迭(�� ��° �μ�)�� �����.

	printf("���ڿ� str�� ���� : %s\n", str);

	return 0;
}