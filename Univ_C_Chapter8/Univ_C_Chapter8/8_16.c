// 2���� �迭�� �ʱ�ȭ
#include <stdio.h>

int main(void)
{
	// �߰�ȣ�� �޸��� �� ����
	int arr[3][4] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	};

	int i, k;

	printf("arr[0][0]���� arr[2][3]���� ��� \n");

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", arr[i][k]);
		}
		printf("\n");
	}

	return 0;
}