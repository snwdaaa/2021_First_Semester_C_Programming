// 사용자가 입력한 여러 숫자 중에서 짝수의 합계를 출력하는 프로그램
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt, i;
	int sum = 0;
	int* p;

	printf("입력할 개수는 ? ");
	scanf("%d", &cnt);

	// 메모리의 힙 영역에 cnt * 4 바이트 만큼의 크기를 할당한다.
	p = (int*)malloc(sizeof(int) * cnt);

	// 값 입력
	for (i = 0; i < cnt; i++)
	{
		printf("%d 번째 숫자 : ", i + 1);
		scanf("%d", &p[i]);
	}

	// 짝수의 합을 구한다.
	for (i = 0; i < cnt; i++)
	{
		if (*(p + i) % 2 == 0)
		{
			sum += *(p + i);
		}
	}

	printf("입력한 짝수합 ==> %d\n", sum);

	return 0;
}