// 고정된 크기의 배열로 인한 메모리 낭비를 보여주는 예
#include <stdio.h>

int main(void)
{
	int aa[10000]; // 40,000 Byte -> 다 못쓰면 낭비 & 10000개 초과하려면 불가능
	int* p;
	int i, sum = 0;
	int cnt;

	printf("입력할 개수는? ");
	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++)
	{
		printf("%d 번째 숫자 : ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < cnt; i++)
	{
		sum += *(p + i);
	}

	printf("입력한 숫자의 합: %d\n", sum);

	return 0;
}