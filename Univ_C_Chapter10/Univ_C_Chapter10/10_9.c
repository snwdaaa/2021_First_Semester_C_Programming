// �Ű����� ���� ��� : Call by Address
#include <stdio.h>

// Call by Value -> main �Լ��� a�� �ּҸ� �ǳ� �޾����Ƿ� 
// func1���� a�� ������ �ָ� main�� a���� ������ ��ģ��.
void func1(int* a)
{
	*a += 1;
	printf("���޹��� a ==> %d\n", *a);
}

int main(void)
{
	int a = 10;

	func1(&a); // a(main)�� �ּ� ���� �ѱ��.
	printf("func1() ���� ���� a ==> %d\n", a);

	return 0;
}
