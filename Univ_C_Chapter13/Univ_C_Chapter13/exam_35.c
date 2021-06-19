// 사용자 이름을 입력하고 전화번호 또는 주민번호 중 한 가지만 입력하는 프로그램.
// 전화번호와 주민번호는 공용체로 동일한 메모리를 차지함으로써 공간을 절약.
// 구조체와 공용체를 혼합해서 사용

#include <stdio.h>

int main(void)
{
	// 사용자의 정보를 담는 구조체
	typedef struct _userInfo
	{
		char name[10]; // 이름
		union tel_id // 전화번호 또는 주민번호를 담는 공용체. 크기가 15여야 할 변수가 두 개 있지만 공용체 전체 크기는 15
		{
			char telNum[15];
			char idNum[15];
		}tel_id;
	}userInfo;

	userInfo uInfo; // 구조체 변수

	printf("이름 -> ");
	gets(uInfo.name);
	printf("전화번호 또는 주민번호 -> ");
	gets(uInfo.tel_id.idNum);

	printf("\n-- 구조체/공용체 혼합 활용 --\n");
	printf("이름 ==> %s\n", uInfo.name);
	printf("전화번호/주민번호 ==> %s\n", uInfo.tel_id.idNum);

	return 0;
}