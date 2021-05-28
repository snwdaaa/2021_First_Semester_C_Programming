// �Ű����� ���� ��� ��
#include <stdio.h>

// Call by Value
void func1(char a, char b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void func2(char* a, char* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	char x = 'A';
	char y = 'Z';

	printf("���� ��: x = %c, y = %c\n", x, y);

	// Call by Value
	func1(x, y);
	printf("���� ������ ��: x = %c, y = %c\n", x, y);

	// Call by Address
	func2(&x, &y);
	printf("���� ������ ��: x = %c, y = %c\n", x, y);

	return 0;
}