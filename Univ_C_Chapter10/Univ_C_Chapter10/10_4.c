// �������� �Լ� ��� �� 1
#include <stdio.h>

int plus(int, int);

int main(void)
{
	int sum;

	sum = plus(100, 200);

	printf("100�� 200�� plus() �Լ� ����� : %d \n", sum);

	return 0;
}

int plus(int v1, int v2)
{
	int result;
	result = v1 + v2;

	return result;
}