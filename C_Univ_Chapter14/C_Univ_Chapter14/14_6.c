// static �����
#include <stdio.h>

void myFunc();

int main(void)
{
	myFunc();
	myFunc();

	return 0;
}

void myFunc()
{
	static int a = 0; // �Լ��� �ٽ� �����ص� a�� ���� �ʱ갪���� �ʱ�ȭ���� �ʴ´�. -> �Լ��� ������ ������ �Ҹ���� �ʴ´�.

	a += 100;
	printf("a�� �� ==> %d\n", a);
}