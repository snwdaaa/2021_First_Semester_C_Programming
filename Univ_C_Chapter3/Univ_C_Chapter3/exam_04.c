#include<stdio.h>

int main()
{
	int num;

	printf("������ �Է��ϼ��� ==> ");
	scanf_s("%d", &num);

	printf("10���� ==> %d\n", num);
	printf("16���� ==> %X\n", num);
	printf("8���� ==> %o\n", num);

	return 0;
}