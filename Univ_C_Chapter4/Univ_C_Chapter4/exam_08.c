#include<stdio.h>

// �Էµ� �� �Ǽ��� �������
int main()
{
	float a, b;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &a);

	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &b);

	printf("%5.2f + %5.2f = %5.2f\n", a, b, a + b);
	printf("%5.2f - %5.2f = %5.2f\n", a, b, a - b);
	printf("%5.2f * %5.2f = %5.2f\n", a, b, a * b);
	printf("%5.2f / %5.2f = %5.2f\n", a, b, a / b);
	printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);

	return 0;
}