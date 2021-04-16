#include<stdio.h>

int main()
{
	int type, num;

	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf_s("%d", &type);
	printf("값 입력 : ");

	if (type == 1)
		scanf_s("%d", &num);
	else if (type == 2)
		scanf_s("%x", &num);
	else if (type == 3)
		scanf_s("%o", &num);

	printf("10진수 ==> %d\n", num);
	printf("16진수 ==> %X\n", num);
	printf("8진수 ==> %o\n", num);

	return 0;
}