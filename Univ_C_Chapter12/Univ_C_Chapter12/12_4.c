// malloc 함수와 calloc 함수의 비교
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p, *s;
	int i, j;

	printf("malloc() 함수 사용\n");
	// 12 바이트 만큼의 공간을 할당 받음
	p = (int*)malloc(sizeof(int) * 3);

	for (i = 0; i < 3; i++)
	{
		printf("할당된 곳의 초기값 p[%d] = %d\n", i, p[i]);
	}
	printf("\n");
	free(p);

	printf("calloc() 함수 사용\n");
	// 12 바이트 만큼의 공간을 할당 받음
	// calloc -> 할당 받은 공간의 모든 값을 0으로 초기화
	s = (int*)calloc(3, sizeof(int));

	for (j = 0; j < 3; j++)
	{
		printf("할당된 곳의 초기값 s[%d] = %d\n", j, s[j]);
	}
	printf("\n");
	free(s);

	return 0;
}