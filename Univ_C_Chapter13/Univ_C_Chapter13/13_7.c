// 공용체
// 구조체와는 달리, 모든 멤버 변수들이 하나의 공간을 공유한다.

#include <stdio.h>

int main(void)
{
	union student // 공용체 선언
	{
		int total;
		char grade;
	};

	union student u; // 공용체 변수 선언

	// 공용체는 제일 나중에 선언된 변수가 제대로 출력됨.
	u.total = 300; // 321로 출력
	u.grade = 'A';

	printf("\n--- 공용체 활용 ---\n");
	printf("총점 ==> %d\n", u.total);
	printf("등급 ==> %c\n", u.grade);

	return 0;
}