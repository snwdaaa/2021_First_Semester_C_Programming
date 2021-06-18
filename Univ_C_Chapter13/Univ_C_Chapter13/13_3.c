// 13_2 => 구조체 사용

#include <stdio.h>

int main(void)
{
	struct student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s1;

	printf("이름 : ");
	scanf("%s", s1.name, 9);

	printf("국어 점수 : ");
	scanf("%d", &s1.kor);

	printf("영어 점수 : ");
	scanf("%d", &s1.eng);

	s1.avg = (s1.kor + s1.eng) / 2.0f;

	printf("\n");

	printf("학생 이름 ==> %s\n", s1.name);
	printf("국어 점수 ==> %d\n", s1.kor);
	printf("영어 점수 ==> %d\n", s1.eng);
	printf("평균 점수 ==> %5.1f\n", s1.avg);

	return 0;
}