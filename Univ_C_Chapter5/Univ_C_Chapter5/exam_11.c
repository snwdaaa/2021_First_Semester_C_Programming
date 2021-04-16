// 단순 if문을 사용하여 두 수의 사칙연산, 모듈로연산을 수행하는 프로그램.

#include<stdio.h>

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

	if (op == '+')
		printf("%d + %d = %d 입니다.", num1, num2, num1 + num2);
	if (op == '-')
		printf("%d - %d = %d 입니다.", num1, num2, num1 - num2);
	if (op == '*')
		printf("%d * %d = %d 입니다.", num1, num2, num1 * num2);
	if (op == '/')
		printf("%d / %d = %d 입니다.", num1, num2, num1 / num2);
	if (op == '%')
		printf("%d %% %d = %d 입니다.", num1, num2, num1 % num2);

	return 0;
}