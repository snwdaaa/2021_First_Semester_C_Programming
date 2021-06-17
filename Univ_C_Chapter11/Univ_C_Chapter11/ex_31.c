// 파일에서 읽어온 문자열을 파일에 반대 순서로 출력
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* rPtr; // 읽기 파일 포인터
	FILE* wPtr; // 쓰기 파일 포인터

	char str1[200], str2[200]; // 문자열
	int str_length; // 문자열 길이
	int i;

	rPtr = fopen("C:\\CProgramming\\In.txt", "r");
	wPtr = fopen("C:\\CProgramming\\Out.txt", "w");

	for (;;)
	{
		fgets(str1, 200, rPtr);

		if (feof(rPtr)) break; // 읽기 파일이 끝났을 때 for문 break

		str_length = strlen(str1);

		// 텍스트 에디터에서 엔터로 줄바꿈 한 것도 하나의 문자로 취급함 (캐리지 리턴, 아스키코드 13번)
		// 배열에 저장한 Visual -> V i s u a l CR \0 총 8개

		for (i = 0; i <= str_length - 2; i++) // 거꾸로 파일에 출력
		{
			str2[i] = str1[(str_length-2) - i];
		}

		str2[i] = '\0';

		fputs(str2, wPtr);
		fputs("\n", wPtr);
	}

	fclose(rPtr);
	fclose(wPtr);

	return 0;
}