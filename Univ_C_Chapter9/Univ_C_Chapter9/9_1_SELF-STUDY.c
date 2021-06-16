#include <stdio.h>

int main()
{
	char stack[5]; // 배열 -> 스택
	char inputData = 'A';
	int top = 0;

	// Push

	while (1)
	{
		if (top >= 5)
		{
			printf("터널이 꽉 차서 차가 못 들어감.\n");
			break; // while문 탈출
		}
		else
		{
			stack[top] = inputData;
			printf("%c 자동차가 터널에 들어감\n", stack[top]);
			top++;
			inputData++;
		}
	}
	printf("\n");

	// Pop
	while (1)
	{
		if (top <= 0)
		{
			printf("현재 터널에 자동차가 없음.\n");
			break; // while문 탈출
		}
		else
		{
			top--;
			printf("%c 자동차가 터널을 빠져나감\n", stack[top]);
			stack[top] = ' ';
		}
	}
	printf("\n");

	return 0;
}