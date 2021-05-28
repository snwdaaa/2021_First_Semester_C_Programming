// 포인터 배열
#include <stdio.h>

int main()
{
	char data[3][100]; // 3 * 100 크기의 문자형 2차원 배열
	int i;

	// 각 행마다 문자열을 저장함.
	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 문자열 : ", i + 1);
		gets(data[i]);
	}
	printf("\n");

	printf("-- 입력과 반대로 출력 (이차원 배열) --\n");
	for (i = 2; i >= 0; i--)
	{
		printf("%d : %s\n", i + 1, data[i]);
	}

	return 0;
}