#include<stdio.h>

int main()
{
	int type, num;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf_s("%d", &type);
	printf("�� �Է� : ");

	if (type == 1)
		scanf_s("%d", &num);
	else if (type == 2)
		scanf_s("%x", &num);
	else if (type == 3)
		scanf_s("%o", &num);

	printf("10���� ==> %d\n", num);
	printf("16���� ==> %X\n", num);
	printf("8���� ==> %o\n", num);

	return 0;
}