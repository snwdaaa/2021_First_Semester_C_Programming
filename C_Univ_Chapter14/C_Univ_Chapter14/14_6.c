// static 예약어
#include <stdio.h>

void myFunc();

int main(void)
{
	myFunc();
	myFunc();

	return 0;
}

void myFunc()
{
	static int a = 0; // 함수를 다시 실행해도 a의 값이 초깃값으로 초기화되지 않는다. -> 함수가 끝나도 변수가 소멸되지 않는다.

	a += 100;
	printf("a의 값 ==> %d\n", a);
}