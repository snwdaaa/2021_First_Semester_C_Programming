// 파일을 불러온 후, 똑같은 파일을 하나 더 만드는 예제
#include <stdio.h>

int main(void)
{
	FILE* srcfPtr;
	FILE* cpyfPtr;
	char str[200]; // 불러온 파일의 내용을 담을 배열

	srcfPtr = fopen("C:\\windows\\win.ini", "r");
	cpyfPtr = fopen("C:\\CProgramming\\data5.txt", "w");

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