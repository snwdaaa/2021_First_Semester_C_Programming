// switch-case 문을 활용한 간단한 계산기

#include <stdio.h>

int main()
{
	int num1, num2;
	char op;

	printf("첫 번째 수를 입력하세요 : ");
	scanf_s("%d", &num1);
	printf("계산 할 연산자를 입력하세요 : ");
	scanf_s(" %c", &op, 1);
	printf("두 번째 수를 입력하세요 : ");
	scanf_s("%d", &num2);

	switch (op)
	{
		case '+':
			printf("%d + %d = %d 입니다.", num1, num2, num1 + num2);
			break;
		case '-':
			printf("%d - %d = %d 입니다.", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%d * %d = %d 입니다.", num1, num2, num1 * num2);
			break;
		case '/':
			printf("%d / %d = %d 입니다.", num1, num2, num1 / num2);
			break;
		case '%':
			printf("%d %% %d = %d 입니다.", num1, num2, num1 % num2);
			break;
		default:
			printf("연산자를 잘못 입력했습니다.");
			break;
	}

	return 0;
}