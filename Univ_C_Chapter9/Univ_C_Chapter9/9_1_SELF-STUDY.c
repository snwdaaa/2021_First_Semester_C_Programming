#include <stdio.h>

int main()
{
	char stack[5]; // �迭 -> ����
	char inputData = 'A';
	int top = 0;

	// Push

	while (1)
	{
		if (top >= 5)
		{
			printf("�ͳ��� �� ���� ���� �� ��.\n");
			break; // while�� Ż��
		}
		else
		{
			stack[top] = inputData;
			printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
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
			printf("���� �ͳο� �ڵ����� ����.\n");
			break; // while�� Ż��
		}
		else
		{
			top--;
			printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
			stack[top] = ' ';
		}
	}
	printf("\n");

	return 0;
}