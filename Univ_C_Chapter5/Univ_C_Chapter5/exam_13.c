// switch-case ���� Ȱ���� ������ ����

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

	switch (op)
	{
		case '+':
			printf("%d + %d = %d �Դϴ�.", num1, num2, num1 + num2);
			break;
		case '-':
			printf("%d - %d = %d �Դϴ�.", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%d * %d = %d �Դϴ�.", num1, num2, num1 * num2);
			break;
		case '/':
			printf("%d / %d = %d �Դϴ�.", num1, num2, num1 / num2);
			break;
		case '%':
			printf("%d %% %d = %d �Դϴ�.", num1, num2, num1 % num2);
			break;
		default:
			printf("�����ڸ� �߸� �Է��߽��ϴ�.");
			break;
	}

	return 0;
}