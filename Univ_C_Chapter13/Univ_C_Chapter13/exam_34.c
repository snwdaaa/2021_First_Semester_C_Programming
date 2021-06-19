// 구조체 포인터와 메모리 할당 함수를 이용해 학생의 이름, 나이를 입력받아 출력하는 프로그램
// 구조체 포인터 -> 동적할당(이름:최대 10자 -> 11바이트, 나이:4바이트)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 구조체 선언
	typedef struct _student
	{
		char name[11];
		int age;
	}student;

	student* sPtr; // 구조체 포인터
	int studentCount;

	printf("입력할 학생 수 : ");
	scanf("%d", &studentCount);

	// 구조체 포인터 -> 배열처럼 이용. sPtr[i] -> i번째 포인터 변수
	sPtr = (student*)malloc(sizeof(student) * studentCount); // 학생 수 * 구조체 크기 만큼의 공간 할당

	// 학생 정보 입력
	for (int i = 0; i < studentCount; i++)
	{
		printf("이름과 나이 입력 : ");
		scanf("%s %d", sPtr[i].name, &sPtr[i].age);
	}

	printf("\n-- 학생 명단 --\n");
	// 학생 정보 출력
	for (int i = 0; i < studentCount; i++)
	{
		printf("이름:%s, 나이:%d\n", sPtr[i].name, sPtr[i].age);
	}

	free(sPtr);

	return 0;
}