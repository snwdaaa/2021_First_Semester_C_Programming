// #define문 사용
#include <stdio.h>

// #define -> 숫자, 문자열, 함수를 쉬운 기호로 표현
#define PI 3.1415926535
#define STR "원의 면적을 계산했습니다.\n"
#define END_MSG printf("프로그램이 종료되었습니다.\n\n")

int main(void)
{
	printf("반지름이 10인 원의 면적은 ==> %10.5f\n", 10 * 10 * PI);
	printf(STR);
	
	END_MSG;

	return 0;
}