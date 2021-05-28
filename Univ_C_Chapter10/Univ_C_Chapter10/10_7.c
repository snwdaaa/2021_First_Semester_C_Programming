// 반환값 유무에 따른 함수 비교
#include <stdio.h>

void func1()
{
	printf("void 형 함수는 돌려줄 것이 없음.\n");
}

int func2()
{
	return 100;
}

int main(void)
{
	int a;

	func1(); // void 형 함수는 함수 이름만 적어서 함수 호출
	a = func2(); // 리턴값이 있는 함수는 대입할 곳이 필요

	printf("int 형 함수에서 돌려준 값 ==> %d\n", a);

	return 0;
}