// �Լ��� �̿��� ������ ���α׷�
#include <stdio.h>

void times_table(int);

int main(void)
{
	int num;

	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &num);

	times_table(num);

	return 0;
}

void times_table(int num)
{
	int i;
	
	for (i = 1; i <= 9; i++)
	{
		printf("%d X %2d = %2d\n", num, i, num * i);
	}
}