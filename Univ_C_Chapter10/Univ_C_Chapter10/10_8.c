// �Ű����� ���� ��� : Call by Value
#include <stdio.h>

// func1�� a�� main�� a�� ���� �ٸ� ����
// �ٸ� �޸� ������ �Ҵ�ȴ�.

void func1(int a)
{
	a += 1;
	printf("���޹��� a ==> %d\n", a);
}

void main()
{
	int a = 10;

	func1(a); // ���ڷ� main�� a�� �Ѱ��ָ�, main�� a�� ���� func1�� a�� �����Ѵ�.
	printf("func1() ���� ���� a ==> %d\n", a);

	return 0;
}