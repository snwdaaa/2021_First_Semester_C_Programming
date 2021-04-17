// 입력한 두 수 사이의 합계를 구하되 원하는 배수를 선택하는 프로그램

#include <stdio.h>

int main()
{
	int start_num, end_num;
	int multiple;
	int sum = 0;
	int i;

	printf("합계의 시작값 ==> ");
	scanf_s("%d", &start_num);

	printf("합계의 끝값 ==> ");
	scanf_s("%d", &end_num);

	printf("배수 ==> ");
	scanf_s("%d", &multiple);

	i = start_num;

	while (i <= end_num)
	{
		if (i % multiple == 0)
			sum += i;

		i++;
	}

	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start_num, end_num, multiple, sum);

	return 0;
}