// 지역변수와 전역변수
#include <stdio.h>

int a = 100;

void func1()
{
	// 함수 내부에서는 전역 변수와 지역 변수의 이름이 같으면
	// 지역 변수가 우선시 된다.
	int a = 200;
	printf("func1()에서 a의 값 ==> %d\n", a);
}

int main()
{
	func1();
	printf("main()에서 a의 값 ==> %d\n", a);
	
	return 0;
}