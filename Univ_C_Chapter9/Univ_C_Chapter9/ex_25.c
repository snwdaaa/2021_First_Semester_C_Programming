// ���� 25. �����͸� �̿��� �� ���� ��ȯ
#include <stdio.h>

int main(void)
{
	int a, b, temp;
	int *p1, *p2;

	printf("a �� �Է� : ");
	scanf("%d", &a);

	printf("b �� �Է� : ");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("�ٲ� �� a�� %d, b�� %d\n", a, b);

	return 0;
}