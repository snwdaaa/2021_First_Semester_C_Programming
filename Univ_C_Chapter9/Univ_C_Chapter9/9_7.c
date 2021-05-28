// 포인터의 관계
#include <stdio.h>

int main(void)
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*q = 'Z'; // q = p이므로 q가 가리키는 곳의 값을 변경하면 p가 가리키는 곳의 값을 변경하는 것이므로 ch의 값이 변함

	printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);

	return 0;
}