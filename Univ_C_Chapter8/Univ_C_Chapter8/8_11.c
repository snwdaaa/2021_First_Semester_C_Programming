// strcat �Լ�
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[7] = "XYZ";

	strcat(str, "ABC"); // ���ڿ��� �̾���δ�. ù ��° �μ��� ������ ���ڿ��� �� ���ں��� ����. �̾���̴� ���ڿ��� ���� + 1 �̻��� ������ �ʿ��ϴ�.

	printf("str : %s\n", str);

	return 0;
}