// static 예약어를 이용하여 구구단을 출력하는 프로그램
#include <stdio.h>

void PrintTimesTable()
{
	static int a = 2; // static 변수는 함수가 재호출됐을 때 다시 초기화되지 않는다. 함수가 끝나더라도 변수는 생존한다.
	int i;

	printf(" ** %d 단 ** \n", a);

	for (i = 1; i < 10; i++)
	{
		printf("%3d X %3d = %3d\n", a, i, a * i);
	}
	printf("\n\n");

	a++; // 단 증가
}

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		PrintTimesTable();
	}

	return 0;
}