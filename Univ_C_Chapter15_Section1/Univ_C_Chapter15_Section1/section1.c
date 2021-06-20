// 연락처 관리 프로그램 -> 연락처 출력, 연락처 등록, 연락처 삭제, 끝내기
#include <stdio.h>
#include <string.h>

#define FILEADDRESS "c:\\CProgramming\\address.txt" // 파일 주소

// 전역 변수 선언부
FILE* fPtr; // 쓰기 파일

// 연락처 구조체 선언
typedef struct _Address
{
	char name[30]; // 이름
	char age[5]; // 나이
	char phoneNum[15]; // 휴대폰 번호
	char department[50]; // 학과
	char birthday[12]; // 생일 -> xxxx.xx.xx 형태
}Address;

// 연락처 파일이 없을 때 새로 만드는 함수
void MakeNewAddressFile(FILE* filePointer)
{
	filePointer = fopen(FILEADDRESS, "w");
	fclose(filePointer);
}

// 연락처 출력 함수
void PrintAddress()
{
	fPtr = fopen(FILEADDRESS, "r");

	// 연락처 파일이 없으면 새로 만듦
	if (fPtr == NULL)
	{
		MakeNewAddressFile(fPtr);
		fPtr = fopen(FILEADDRESS, "r");
	}

	int i;
	char str[200] = "";

	for (i = 1; ; i++)
	{
		fgets(str, 199, fPtr);

		if (feof(fPtr))
		{
			break;
		}
		else
		{
			printf("%2d: %s", i, str); // 연락처 출력
		}
	}

	if (i == 1)
	{
		puts("\n ** 연락처 파일에 전화번호가 없습니다. **\n\n");
	}

	fclose(fPtr);
}

// 연락처 등록 함수
// 이름, 나이, 전화번호 -> 구조체에 저장 -> 그 구조체를 배열에 저장 -> 배열 내용을 txt 파일에 저장
void AddAddress()
{
	fPtr = fopen(FILEADDRESS, "a");
	char str[200] = "";
	Address address = { "", "", "" }; // 구조체 초기화

	// 연락처에 저장할 정보 입력
	printf("이름을 입력 ==> ");
	gets(address.name);
	printf("나이를 입력 ==> ");
	gets(address.age);
	printf("전화번호를 입력 ==> ");
	gets(address.phoneNum);
	printf("학과를 입력 ==> ");
	gets(address.department);
	printf("생일을 입력 ==> ");
	gets(address.birthday);

	// 문자형 배열에 이름, 나이, 전화번호 입력하기.
	// 이름		나이		전화번호  꼴
	strcat(str, address.name); 
	strcat(str, "\t");
	strcat(str, address.age);
	strcat(str, "\t");
	strcat(str, address.phoneNum);
	strcat(str, "\t");
	strcat(str, address.department);
	strcat(str, "\t");
	strcat(str, address.birthday);
	strcat(str, "\t");
	strcat(str, "\n");

	fputs(str, fPtr); // txt 파일에 배열 내용 저장

	fclose(fPtr);
}

// 연락처 삭제 함수
// 2차원 배열에 연락처를 저장한다(각 행마다 한 사람씩 오도록) -> 삭제할 행 번호를 입력받는다 -> 해당 행을 제외하고 다시 파일에 쓴다.
void DeleteAddress()
{
	fPtr = fopen(FILEADDRESS, "r");
	char addresses[50][200]; // 연락처는 최대 50개로 지정
	int i = 0, deleteNum, addressCount;

	// 연락처 파일이 없으면 다시 메뉴로 돌아간다.
	if (fPtr == NULL)
	{
		printf("\n ** 연락처 파일이 존재하지 않습니다. **\n");
		return;
	}

	// 배열의 각 행마다 한 사람씩의 연락처를 저장한다.
	for (i = 0; ; i++)
	{
		fgets(addresses[i], 199, fPtr);

		// 더 이상 연락처가 없다면 저장하는 것을 멈춤.
		if (feof(fPtr))
		{
			addressCount = i;
			break;
		}
	}

	fclose(fPtr);

	// 삭제할 행 번호 입력
	printf("삭제할 행 번호는 ? ");
	scanf("%d", &deleteNum);

	// 해당 행을 제외한 나머지 정보들을 다시 txt 파일에 저장
	fPtr = fopen(FILEADDRESS, "w"); // 쓰기 모드

	for (i = 0; i < addressCount; i++)
	{
		if (i == deleteNum-1) continue; // 삭제할 행을 제외

		fputs(addresses[i], fPtr);
	}

	fclose(fPtr);
}

// 메뉴 출력 함수
void PrintMenu()
{
	printf("\n** 숫자 입력 후 엔터키를 눌러주세요 **\n");
	printf("1. 연락처 출력\n");
	printf("2. 연락처 등록\n");
	printf("3. 연락처 삭제\n");
	printf("4. 끝내기\n");
}

int main(void)
{
	// 변수 선언부
	char selectNum = 0; // 선택지

	printf("\n### 친구 핸펀 Ver 2.0 ###\n\n\n");

	while (1)
	{
		PrintMenu();
		selectNum = getch();
		getchar(); // 버퍼에서 문자 하나 제거

		switch (selectNum) // 입력값에 따라 함수 실행
		{
			case '1':
				PrintAddress();
				break;
			case '2':
				AddAddress();
				break;
			case '3':
				DeleteAddress();
				break;
			case '4':
				return 0;
				break;
			default:
				printf("다시 입력해 주세요\n");
				break;
		}
	}

	return 0;
}