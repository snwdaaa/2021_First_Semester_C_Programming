// �迭 �̸� Ȱ��
#include <stdio.h>

int main(void)
{
	int aa[3] = { 10, 20, 30 };

	// &aa[n] = aa + n
	printf("&aa[0]�� %p, aa+0�� %p \n", &aa[0], aa + 0);
	printf("&aa[1]�� %p, aa+1�� %p \n", &aa[1], aa + 1);
	printf("&aa[2]�� %p, aa+2�� %p \n", &aa[2], aa + 2);

	return 0;
}