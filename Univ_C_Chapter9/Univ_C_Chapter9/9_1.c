#include <stdio.h>

int main()
{
	char stack[5]; // �迭 -> ����
	int top = 0;

	// Push

	stack[top] = 'A';
	printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
	top++;

	stack[top] = 'B';
	printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
	top++;

	stack[top] = 'C';
	printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
	top++;

	printf("\n");

	// Pop
	top--;
	printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
	stack[top] = ' ';

	top--;
	printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
	stack[top] = ' ';

	top--;
	printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
	stack[top] = ' ';
	
	return 0;
}