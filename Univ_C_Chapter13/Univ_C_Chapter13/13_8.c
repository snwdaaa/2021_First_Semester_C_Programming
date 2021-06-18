// 열거형 (enumerated type)

#include <stdio.h>

int main(void)
{
	enum week // 열거형 선언
	{
		sun, // 열거형 멤버 변수
		mon,
		tue,
		wed,
		thu,
		fri,
		sat	// 마지막은 쉼표 안써도 OK
	};

	enum week wk; // 열거형 변수 선언

	wk = sat; // 열거형 변수에 값을 대입

	if (wk == sun)
		printf("오늘은 일요일입니다.\n\n");
	else
		printf("오늘은 일요일이 아닙니다.\n\n");

	return 0;
}