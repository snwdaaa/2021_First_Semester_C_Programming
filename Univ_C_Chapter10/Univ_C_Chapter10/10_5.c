// �������� �Լ� ��� �� 2
#include <stdio.h>

int calc(int, int, int);

int main(void)
{
	int result;
	int oper, a, b;

	printf("��� �Է� (1:+, 2:-, 3:*, 4:/) : ");
	scanf("%d", &oper);
	printf("��� �� �� ���ڸ� �Է� : ");
	scanf("%d %d", &a, &b);

	result = calc(a, b, oper);

	printf("��� ����� : %d\n", result);

	return 0;
}

int calc(int v1, int v2, int op)
{
	int result;

	switch (op)
	{
		case 1:
			result = v1 + v2;
			break;
		case 2:
			result = v1 - v2;
			break;
		case 3:
			result = v1 * v2;
			break;
		case 4:
			result = v1 / v2;
			break;
		default:
			result = 0;
			break;
	}

	return result;
}