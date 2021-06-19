// 열거형을 활용해서 입력된 월의 이름을 출력하는 프로그램
#include <stdio.h>

int main(void)
{
	int month_num;
	enum _month // 열거형
	{
		Jan = 1,
		Feb,
		Mar,
		Apr,
		May,
		Jun,
		Jul,
		Aug,
		Sep,
		Oct,
		Nov,
		Dec,
	}month;

	printf("월 입력 : ");
	scanf("%d", &month); // month 값 입력

	// 열거형 값 -> 정수 => 스위치문 이용
	switch (month)
	{
		case Jan:
			printf("%d월은 January 입니다.", month);
			break;
		case Feb:
			printf("%d월은 February입니다.", month);
			break;
		case Mar:
			printf("%d월은 March 입니다.", month);
			break;
		case Apr:
			printf("%d월은 April 입니다.", month);
			break;
		case May:
			printf("%d월은 May 입니다.", month);
			break;
		case Jun:
			printf("%d월은 June 입니다.", month);
			break;
		case Jul:
			printf("%d월은 July 입니다.", month);
			break;
		case Aug:
			printf("%d월은 August 입니다.", month);
			break;
		case Sep:
			printf("%d월은 September 입니다.", month);
			break;
		case Oct:
			printf("%d월은 October 입니다.", month);
			break;
		case Nov:
			printf("%d월은 November 입니다.", month);
			break;
		case Dec:
			printf("%d월은 December 입니다.", month);
			break;
		default:
			printf("잘 못 입력했습니다.");
			break;
	}

	return 0;
}