// ����ü
// ����ü�ʹ� �޸�, ��� ��� �������� �ϳ��� ������ �����Ѵ�.

#include <stdio.h>

int main(void)
{
	union student // ����ü ����
	{
		int total;
		char grade;
	};

	union student u; // ����ü ���� ����

	// ����ü�� ���� ���߿� ����� ������ ����� ��µ�.
	u.total = 300; // 321�� ���
	u.grade = 'A';

	printf("\n--- ����ü Ȱ�� ---\n");
	printf("���� ==> %d\n", u.total);
	printf("��� ==> %c\n", u.grade);

	return 0;
}