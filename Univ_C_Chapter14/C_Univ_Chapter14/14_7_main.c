#include <stdio.h>

void func();

int a; // 전역변수 and 외부변수로 사용될 변수

int main(void)
{
	a = 100; // main 소스파일에서 대입한 a의 값이 func 소스파일에서도 그대로.

	func();

	return 0;
}