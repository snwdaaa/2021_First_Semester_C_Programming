// 비빔밥 ㅋㅋ

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct bibim // 구조체 선언
	{
		int a;
		float b;
		char c;
		char d[5];
	};

	struct bibim b1; // 구조체 변수 선언

	b1.a = 10;
	b1.b = 1.1f;
	b1.c = 'A';
	strcpy(b1.d, "ABCD");

	printf("b1.a  ==> %d \n", b1.a);
	printf("b1.b  ==> %f \n", b1.b);
	printf("b1.c ==> %c \n", b1.c);
	printf("b1.d  ==> %s \n", b1.d);

	return 0;
}