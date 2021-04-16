// ��Ʈ ���꿡 ����ũ�� ����� ��

#include<stdio.h>

int main()
{
	char a = 'A', b, c; // �빮�� A -> 0110 0001
	char mask = 0x0F; // ����ũ �� (0000 1111) (2) ����, ����ũ -> ���� Ư���ϰ� �ɷ��ִ� ����

	printf("%X & %X = %X\n", a, mask, a & mask); // mask�� 0000 1111 �̹Ƿ� ���� 4��Ʈ�� ������ 0, ���� 4��Ʈ�� a�� ���� �״�� ����
	printf("%X | %X = %X\n", a, mask, a | mask); // mask�� 0000 1111 �̹Ƿ� ���� 4��Ʈ�� a�� ��, ���� 4��Ʈ�� ������ 1

	mask = 'a' - 'A'; // �ҹ��� a���� �빮�� A�� �� ���� ����ũ, 97 - 65 = 32 -> 0010 0000

	b = a ^ mask;
	printf("%c ^ %d = %c\n", a, mask, b);
	a = b ^ mask;
	printf("%c ^ %d = %c\n", b, mask, a);

	return 0;
}