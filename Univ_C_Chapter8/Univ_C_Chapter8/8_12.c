// strcmp �Լ�
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "XYZ";
	char str_compare[] = "xyz";
	int result;

	result = strcmp(str, str_compare); // ����� -> 0 : �� ���ڿ��� ����. �� �̿��� �� : �� ���ڿ��� �ٸ�.

	// �� �̿��� ���� ������ ���� => �� ���ڿ��� �ƽ�Ű�ڵ� ���� ���� ����. �׷��� ������ ������ 0�� ������ ���̰� �ٸ��� �� ���� ���� ������ ��.

	printf("�� ���ڿ��� �� ��� : %d\n", result);

	return 0;
}