// 매개변수 전달 방법 : Call by Address
#include <stdio.h>

// Call by Value -> main 함수의 a의 주소를 건네 받았으므로 
// func1에서 a에 영향을 주면 main의 a에도 영향을 끼친다.
void func1(int* a)
{
	*a += 1;
	printf("전달받은 a ==> %d\n", *a);
}

int main(void)
{
	int a = 10;

	func1(&a); // a(main)의 주소 값을 넘긴다.
	printf("func1() 실행 후의 a ==> %d\n", a);

	return 0;
}
