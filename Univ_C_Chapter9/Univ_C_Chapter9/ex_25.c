// 예제 25. 포인터를 이용한 두 값의 교환
#include <stdio.h>

int main(void)
{
	int a, b, temp;
	int *p1, *p2;

	printf("a 값 입력 : ");
	scanf("%d", &a);

	printf("b 값 입력 : ");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("바뀐 값 a는 %d, b는 %d\n", a, b);

	return 0;
}