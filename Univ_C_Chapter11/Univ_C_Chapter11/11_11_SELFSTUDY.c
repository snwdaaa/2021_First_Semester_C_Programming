// 파일을 불러온 후, 똑같은 파일을 하나 더 만드는 예제 + 파일 경로 직접 입력받음
#include <stdio.h>

int main(void)
{
	FILE* srcfPtr;
	FILE* cpyfPtr;
	char str[200]; // 불러온 파일의 내용을 담을 배열
	char srcfAddress[100]; // 불러올 파일의 경로
	char cpyfAddress[100]; // 복사할 파일의 경로

	printf("읽기 파일명 : ");
	gets(srcfAddress);
	printf("쓰기 파일명 : ");
	gets(cpyfAddress);

	srcfPtr = fopen(srcfAddress, "r");
	cpyfPtr = fopen(cpyfAddress, "w");

	for (;;)
	{
		fgets(str, 200, srcfPtr); // 배열에 파일 내용 저장
		if (feof(srcfPtr)) break;
		fputs(str, cpyfPtr); // 새로운 파일에 복사
	}

	fclose(srcfPtr);
	fclose(cpyfPtr);

	return 0;
}