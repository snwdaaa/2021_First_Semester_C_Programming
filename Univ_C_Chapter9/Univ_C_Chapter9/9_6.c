// �Ϲ� ������ ������ ������ ����
#include <stdio.h>

int main(void)
{
	char ch;
	char* p; // ������ ���� p ����
	
	ch = 'A';
	p = &ch; // ������ ���� p�� ch�� �ּҸ� ����

	printf("ch�� ������ �ִ� �� : %c \n", ch);
	printf("ch�� �ּ� : %p \n", &ch);
	printf("p�� ������ �ִ� �� : %p \n", p);
	printf("p�� ����Ű�� ���� ������ : %c \n", *p);

	return 0;
}