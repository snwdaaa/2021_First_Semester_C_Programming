// ����� ���� ��� ���� ���
#include <stdio.h>
#include "myHeader.h" // �����Ϸ� ���� ��������� <>, ����� ���� ��������� ""

int main()
{
	func(10);

	return 0;
}

void func(int num)
{
	printf("%d\n", num);
}