// ��ȯ�� ������ ���� �Լ� ��
#include <stdio.h>

void func1()
{
	printf("void �� �Լ��� ������ ���� ����.\n");
}

int func2()
{
	return 100;
}

int main(void)
{
	int a;

	func1(); // void �� �Լ��� �Լ� �̸��� ��� �Լ� ȣ��
	a = func2(); // ���ϰ��� �ִ� �Լ��� ������ ���� �ʿ�

	printf("int �� �Լ����� ������ �� ==> %d\n", a);

	return 0;
}