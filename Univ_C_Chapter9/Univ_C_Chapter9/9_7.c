// �������� ����
#include <stdio.h>

int main(void)
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*q = 'Z'; // q = p�̹Ƿ� q�� ����Ű�� ���� ���� �����ϸ� p�� ����Ű�� ���� ���� �����ϴ� ���̹Ƿ� ch�� ���� ����

	printf("ch�� ������ �ִ� �� : ch ==> %c \n\n", ch);

	return 0;
}