// 입력된 액수만큼 500원, 100원, 50원, 10원짜리 동전으로 교환해주는 프로그램
// 동전의 총 수를 최소화한다.
// 고액의 동전을 먼저 바꿔준다.

#include<stdio.h>

int main()
{
	int money, money_calc;
	int c500, c100, c50, c10; // 각 동전

	printf(" ## 교환할 돈은? ");
	scanf_s("%d", &money);

	money_calc = money; // 계산을 하기 위한 변수

	c500 = money_calc / 500;
	money_calc -= 500 * c500; // money_calc = money % c500로 하면 더 깔끔함. 이하 동일.    몫과 나머지 잘 이용

	c100 = money_calc / 100;
	money_calc -= 100 * c100;

	c50 = money_calc / 50;
	money_calc -= 50 * c50;

	c10 = money_calc / 10;
	money_calc -= 10 * c10;

	printf("오백원짜리 ==> %d개\n", c500);
	printf("백원짜리 ==> %d개\n", c100);
	printf("오십원짜리 ==> %d개\n", c50);
	printf("십원짜리 ==> %d개\n", c10);
	printf("바꾸지 못한 잔돈 ==> %d원\n", money_calc);

	return 0;
}