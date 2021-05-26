#include <stdio.h>

int main()
{
	int arr[3][4];
	int i, k;

	int input_value = 1;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			arr[i][k] = input_value;
			input_value++;
		}
	}

	printf("arr[0][0]부터 arr[2][3]까지 출력 \n");

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d ", arr[i][k]);
		}
		printf("\n");
	}

	return 0;
}