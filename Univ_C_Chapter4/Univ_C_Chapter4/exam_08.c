#include<stdio.h>

// 입력된 두 실수의 산술연산
int main()
{
	float a, b;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &a);

	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf_s("%f", &b);

	printf("%5.2f + %5.2f = %5.2f\n", a, b, a + b);
	printf("%5.2f - %5.2f = %5.2f\n", a, b, a - b);
	printf("%5.2f * %5.2f = %5.2f\n", a, b, a * b);
	printf("%5.2f / %5.2f = %5.2f\n", a, b, a / b);
	printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);

	return 0;
}