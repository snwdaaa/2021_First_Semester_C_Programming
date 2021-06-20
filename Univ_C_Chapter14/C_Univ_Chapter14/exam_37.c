// cmd copy 명령어 동일한 기능 구현
// main 함수 매개변수, 파일 입출력 이용

/* 실행 과정
1. 복사할 내용을 불러올 파일, 복사한 내용을 붙여넣을 파일 두 경로 준비
2. 배열에 복사 내용 저장 -> 배열 내용을 다른 파일에 쓰기
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	// 입력값이 잘못되었을 때
	if ((argc - 1) != 2)
	{
		printf("2개의 인수를 입력해주세요.\n");
		return 0;
	}

	// 파일 포인터 선언
	FILE* fRPtr; // 읽기 파일, file Read Pointer
	FILE* fWPtr; // 쓰기 파일, file Write Pointer
	char str[200]; // 내용을 저장할 배열
	
	// argv[1]: 복사할 내용이 들어있는 파일
	// argv[2]: 복사한 내용을 붙여넣을 파일

	fRPtr = fopen(argv[1], "r");
	fWPtr = fopen(argv[2], "w");

	for (;;)
	{
		fgets(str, 199, fRPtr); // 배열로 내용 가져오기

		// 파일 내용이 끝나면 for문 탈출
		if (feof(fRPtr)) break;

		fputs(str, fWPtr); // 내용 쓰기
	}

	fclose(fRPtr);
	fclose(fWPtr);

	return 0;
}