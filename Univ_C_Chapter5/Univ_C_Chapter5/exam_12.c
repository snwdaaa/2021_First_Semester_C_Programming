// �ߺ� if���� Ȱ���� ������ ����

#include <stdio.h>

int main()
{
	int num1, num2;
	char op;

	printf("ù ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	printf("��� �� �����ڸ� �Է��ϼ��� : ");
	scanf_s(" %c", &op, 1);
	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &num2);

	if (op == '+')
		printf("%d + %d = %d �Դϴ�.", num1, num2, num1 + num2);
	else if (op == '-')
		printf("%d - %d = %d �Դϴ�.", num1, num2, num1 - num2);
	else if (op == '*')
		printf("%d * %d = %d �Դϴ�.", num1, num2, num1 * num2);
	else if (op == '/')
		printf("%d / %d = %d �Դϴ�.", num1, num2, num1 / num2);
	else if (op == '%')
		printf("%d %% %d = %d �Դϴ�.", num1, num2, num1 % num2);
	else
		printf("�����ڸ� �߸� �Է��߽��ϴ�.");

	return 0;
}