// �����͸� �̿��� �迭�� ����
// �迭�� ��� �ִ� �� 10���� �����ϴ� ���α׷�.
// �� ���� ���ϰ� ���� ���� ������ �ű�� ���� ���� ���
#include <stdio.h>

int main(void)
{
	int arr[] = { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8 };
	int* p;
	int i, k;
	int array_length;
	int min, min_index, temp;

	p = arr; // �����Ϳ� �迭�� �ּҸ� ����

	array_length = sizeof(arr) / sizeof(int); // �迭�� ���̸� ���Ѵ�

	printf("���� �� �迭 arr ==> ");
	for (i = 0; i < array_length; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	// ���� ����
	for (i = 0; i < array_length; i++)
	{
		min = *(p + i);

		for (k = i + 1; k < array_length; k++)
		{
			// ���ο� �ּڰ� ����
			if (min > *(p + k))
			{
				min = *(p + k);
				min_index = k;
			}
		}

		temp = *(p + i);
		*(p + i) = min;
		*(p + min_index) = temp;
	}

	printf("���� �� �迭 arr ==> ");
	for (i = 0; i < array_length; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	return 0;
}