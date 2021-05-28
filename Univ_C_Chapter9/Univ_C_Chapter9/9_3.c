// 변수의 주소 알아내기
#include <stdio.h>

int main(void)
{
	int a = 100;
	int b = 200;
	
	// 주소 연산자 &
	printf("변수 a의 주소는 %p 입니다. \n", &a);
	printf("변수 b의 주소는 %p 입니다. \n", &b);

	return 0;
}