// ������ �迭�� �޸� �Ҵ�
#include <stdio.h>

int main(void)
{
	int aa[3] = { 10, 20, 30 };

	printf("aa[0]�� ���� %d, �ּҴ� %p \n", aa[0], &aa[0]);
	printf("aa[1]�� ���� %d, �ּҴ� %p \n", aa[1], &aa[1]);
	printf("aa[2]�� ���� %d, �ּҴ� %p \n", aa[2], &aa[2]);
	printf("�迭 �̸� aa�� ��(=�ּ�)�� %p \n", aa);

	return 0;
}