// 2차원 배열의 초기화
#include <stdio.h>

int main(void)
{
	// 중괄호와 콤마로 행 구분
	int arr[3][4] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	};

	int i, k;

	printf("arr[0][0]부터 arr[2][3]까지 출력 \n");

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