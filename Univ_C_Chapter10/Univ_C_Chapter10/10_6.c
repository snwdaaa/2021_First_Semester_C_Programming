// ���������� ��������
#include <stdio.h>

int a = 100;

void func1()
{
	// �Լ� ���ο����� ���� ������ ���� ������ �̸��� ������
	// ���� ������ �켱�� �ȴ�.
	int a = 200;
	printf("func1()���� a�� �� ==> %d\n", a);
}

int main()
{
	func1();
	printf("main()���� a�� �� ==> %d\n", a);
	
	return 0;
}