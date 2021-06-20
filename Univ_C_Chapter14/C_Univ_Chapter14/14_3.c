// 사용자 정의 헤더 파일 사용
#include <stdio.h>
#include "myHeader.h" // 컴파일러 제공 헤더파일은 <>, 사용자 정의 헤더파일은 ""

int main()
{
	func(10);

	return 0;
}

void func(int num)
{
	printf("%d\n", num);
}