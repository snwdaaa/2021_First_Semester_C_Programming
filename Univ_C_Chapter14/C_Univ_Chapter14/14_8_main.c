// 외부 변수를 활용해 두 값을 교환하는 프로그램
#include <stdio.h>

void exchange();

int a, b;

int main(void)
{
	printf("a의 값을 입력 : ");
	scanf("%d", &a);
	printf("b의 값을 입력 : ");
	scanf("%d", &b);

	exchange();

	printf("\n바뀐 값 a는 %d, b는 %d\n", a, b);

	return 0;
}