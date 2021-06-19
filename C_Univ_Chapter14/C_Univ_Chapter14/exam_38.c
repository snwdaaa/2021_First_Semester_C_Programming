// static ���� �̿��Ͽ� �������� ����ϴ� ���α׷�
#include <stdio.h>

void PrintTimesTable()
{
	static int a = 2; // static ������ �Լ��� ��ȣ����� �� �ٽ� �ʱ�ȭ���� �ʴ´�. �Լ��� �������� ������ �����Ѵ�.
	int i;

	printf(" ** %d �� ** \n", a);

	for (i = 1; i < 10; i++)
	{
		printf("%3d X %3d = %3d\n", a, i, a * i);
	}
	printf("\n\n");

	a++; // �� ����
}

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		PrintTimesTable();
	}

	return 0;
}