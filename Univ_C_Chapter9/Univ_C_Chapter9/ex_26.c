// 포인터를 이용한 배열의 정렬
// 배열의 들어 있는 값 10개를 정렬하는 프로그램.
// 두 값을 비교하고 작은 값을 앞으로 옮기는 선택 정렬 사용
#include <stdio.h>

int main(void)
{
	int arr[] = { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8 };
	int* p;
	int i, k;
	int array_length;
	int min, min_index, temp;

	p = arr; // 포인터에 배열의 주소를 저장

	array_length = sizeof(arr) / sizeof(int); // 배열의 길이를 구한다

	printf("정렬 전 배열 arr ==> ");
	for (i = 0; i < array_length; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	// 선택 정렬
	for (i = 0; i < array_length; i++)
	{
		min = *(p + i);

		for (k = i + 1; k < array_length; k++)
		{
			// 새로운 최솟값 갱신
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

	printf("정렬 후 배열 arr ==> ");
	for (i = 0; i < array_length; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	return 0;
}