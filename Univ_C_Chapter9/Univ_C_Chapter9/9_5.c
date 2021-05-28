// 배열 이름 활용
#include <stdio.h>

int main(void)
{
	int aa[3] = { 10, 20, 30 };

	// &aa[n] = aa + n
	printf("&aa[0]은 %p, aa+0은 %p \n", &aa[0], aa + 0);
	printf("&aa[1]은 %p, aa+1은 %p \n", &aa[1], aa + 1);
	printf("&aa[2]은 %p, aa+2은 %p \n", &aa[2], aa + 2);

	return 0;
}