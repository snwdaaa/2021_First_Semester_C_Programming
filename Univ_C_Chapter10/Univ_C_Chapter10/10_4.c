// 본격적인 함수 사용 예 1
#include <stdio.h>

int plus(int, int);

int main(void)
{
	int sum;

	sum = plus(100, 200);

	printf("100과 200의 plus() 함수 결과는 : %d \n", sum);

	return 0;
}

int plus(int v1, int v2)
{
	int result;
	result = v1 + v2;

	return result;
}