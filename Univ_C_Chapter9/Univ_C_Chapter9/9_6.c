// 일반 변수와 포인터 변수의 관계
#include <stdio.h>

int main(void)
{
	char ch;
	char* p; // 포인터 변수 p 선언
	
	ch = 'A';
	p = &ch; // 포인터 변수 p에 ch의 주소를 대입

	printf("ch가 가지고 있는 값 : %c \n", ch);
	printf("ch의 주소 : %p \n", &ch);
	printf("p가 가지고 있는 값 : %p \n", p);
	printf("p가 가리키는 곳의 실제값 : %c \n", *p);

	return 0;
}