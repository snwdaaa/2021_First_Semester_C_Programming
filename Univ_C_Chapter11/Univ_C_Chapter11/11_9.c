#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	int sum = 0;
	int fTempValue;

	fPtr = fopen("C:\\CProgramming\\data2.txt", "r");

	for (;;)
	{
		// 파일이 끝났으면 무한반복문 탈출
		if (feof(fPtr))
			break;

		fscanf(fPtr, "%d", &fTempValue); // %d 서식의 값을 fTempValue에 저장
		sum += fTempValue;
	}

	printf("합계 ==> %d\n", sum);

	fclose(fPtr);

	return 0;
}