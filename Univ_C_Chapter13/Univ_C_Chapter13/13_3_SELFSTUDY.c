// 13_3 -> 구조체 초깃값, typedef로 구조체 선언

#include <stdio.h>

int main(void)
{
	typedef struct _student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	}student;

	student s1 = { "John", 87, 72, }; // avg는 0으로 초기화, 멤버 변수 선언 순서대로 적어야 함
	student s2 = { .kor = 40, .eng = 80, .name = "Doe" }; // 선언 순서대로 적을 필요 X 

	s1.avg = (s1.kor + s1.eng) / 2.0f;
	s2.avg = (s2.kor + s2.eng) / 2.0f;

	printf("학생 이름 ==> %s\n", s1.name);
	printf("국어 점수 ==> %d\n", s1.kor);
	printf("영어 점수 ==> %d\n", s1.eng);
	printf("평균 점수 ==> %5.1f\n", s1.avg);

	printf("\n");

	printf("학생 이름 ==> %s\n", s2.name);
	printf("국어 점수 ==> %d\n", s2.kor);
	printf("영어 점수 ==> %d\n", s2.eng);
	printf("평균 점수 ==> %5.1f\n", s2.avg);

	return 0;
}