// �Է��� �� �� ������ �հ踦 ���ϵ� ���ϴ� ����� �����ϴ� ���α׷�

#include <stdio.h>

int main()
{
	int start_num, end_num;
	int multiple;
	int sum = 0;
	int i;

	printf("�հ��� ���۰� ==> ");
	scanf_s("%d", &start_num);

	printf("�հ��� ���� ==> ");
	scanf_s("%d", &end_num);

	printf("��� ==> ");
	scanf_s("%d", &multiple);

	i = start_num;

	while (i <= end_num)
	{
		if (i % multiple == 0)
			sum += i;

		i++;
	}

	printf("%d���� %d������ %d����� �հ� ==> %d\n", start_num, end_num, multiple, sum);

	return 0;
}