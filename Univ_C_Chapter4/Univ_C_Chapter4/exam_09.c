// �Էµ� �׼���ŭ 500��, 100��, 50��, 10��¥�� �������� ��ȯ���ִ� ���α׷�
// ������ �� ���� �ּ�ȭ�Ѵ�.
// ����� ������ ���� �ٲ��ش�.

#include<stdio.h>

int main()
{
	int money, money_calc;
	int c500, c100, c50, c10; // �� ����

	printf(" ## ��ȯ�� ����? ");
	scanf_s("%d", &money);

	money_calc = money; // ����� �ϱ� ���� ����

	c500 = money_calc / 500;
	money_calc -= 500 * c500; // money_calc = money % c500�� �ϸ� �� �����. ���� ����.    ��� ������ �� �̿�

	c100 = money_calc / 100;
	money_calc -= 100 * c100;

	c50 = money_calc / 50;
	money_calc -= 50 * c50;

	c10 = money_calc / 10;
	money_calc -= 10 * c10;

	printf("�����¥�� ==> %d��\n", c500);
	printf("���¥�� ==> %d��\n", c100);
	printf("���ʿ�¥�� ==> %d��\n", c50);
	printf("�ʿ�¥�� ==> %d��\n", c10);
	printf("�ٲ��� ���� �ܵ� ==> %d��\n", money_calc);

	return 0;
}