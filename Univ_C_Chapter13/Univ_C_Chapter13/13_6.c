// 구조체 포인터

#include <stdio.h>

int main(void)
{
	// 메모리 상에서 구조체의 크기는 멤버 변수가 많을수록 커진다.
	typedef struct _student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	}student;

	student s;
	student* sPtr; // 구조체 포인터

	sPtr = &s; // 구조체의 주소를 구조체 포인터에 대입

	// '->' : 간접 멤버 연산자 or Arrow Operator
	// 포인터가 가리키는 구조체의 멤버변수의 값을 가져올 때 사용한다.
	// '구조체 포인터변수' -> '해당 포인터가 가리키는 구조체의 멤버변수'   ==    구조체변수.멤버변수

	printf("이름 입력 : ");
	scanf("%s", sPtr->name);

	printf("국어 점수 : ");
	scanf("%d", &sPtr->kor);

	printf("영어 점수 : ");
	scanf("%d", &sPtr->eng);

	sPtr->avg = (sPtr->kor + sPtr->eng) / 2.0f;

	printf("\n--- 구조체 포인터 활용 ---\n");
	printf("학생 이름 ==> %s\n", sPtr->name);
	printf("국어 점수 ==> %d\n", sPtr->kor);
	printf("영어 점수 ==> %d\n", sPtr->eng);
	printf("평균 점수 ==> %5.1f\n", sPtr->avg);

	return 0;
}