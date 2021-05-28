// 포인터를 사용하여 정수 합계를 구하는 예
#include <stdio.h>

int main(void)
{
	int aa[3];
	int* p;
	int i, sum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 숫자 입력: ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < 3; i++)
	{
		sum += *(p + i);
	}

	printf("입력한 숫자의 합: %d\n", sum);

	return 0;
}