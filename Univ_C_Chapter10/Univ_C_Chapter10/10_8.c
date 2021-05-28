// 매개변수 전달 방법 : Call by Value
#include <stdio.h>

// func1의 a와 main의 a는 서로 다른 변수
// 다른 메모리 공간에 할당된다.

void func1(int a)
{
	a += 1;
	printf("전달받은 a ==> %d\n", a);
}

void main()
{
	int a = 10;

	func1(a); // 인자로 main의 a를 넘겨주면, main의 a의 값을 func1의 a에 대입한다.
	printf("func1() 실행 후의 a ==> %d\n", a);

	return 0;
}