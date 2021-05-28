// 본격적인 함수 사용 예 2
#include <stdio.h>

int calc(int, int, int);

int main(void)
{
	int result;
	int oper, a, b;

	printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
	scanf("%d", &oper);
	printf("계산 할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);

	result = calc(a, b, oper);

	printf("계산 결과는 : %d\n", result);

	return 0;
}

int calc(int v1, int v2, int op)
{
	int result;

	switch (op)
	{
		case 1:
			result = v1 + v2;
			break;
		case 2:
			result = v1 - v2;
			break;
		case 3:
			result = v1 * v2;
			break;
		case 4:
			result = v1 / v2;
			break;
		default:
			result = 0;
			break;
	}

	return result;
}