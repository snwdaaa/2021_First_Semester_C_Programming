// 윤년 계산 프로그램
// 4로 나누어 떨어지고 100으로 나누어 떨어지지 않으면 윤년이다.
// 400으로 나누어 떨어지는 해도 윤년에 포함된다.

#include <stdio.h>

int main()
{
	int year;
	char condition1, condition2; // 조건1 : 4로 나누어 떨어지고 100으로 나누어 떨어지지 않으면 윤년이다.    조건2 : 400으로 나누어 떨어지는 해도 윤년에 포함된다.

	printf("년도를 입력하세요. : ");
	scanf_s("%d", &year);

	condition1 = (year % 4 == 0) && (year % 100 != 0); // 윤년 조건 1
	condition2 = year % 400 == 0; // 윤년 조건 2

	if (condition1 || condition2) // 둘 중 한 조건만 만족해도 윤년이다.
		printf("%d 년은 윤년입니다.\n", year);
	else
		printf("%d 년은 윤년이 아닙니다.\n", year);

	return 0;
}