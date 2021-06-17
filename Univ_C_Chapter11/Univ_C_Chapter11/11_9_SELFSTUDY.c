// 파일에서 실수 8개를 읽어와 합계를 출력하는 예제
#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	float sum = 0;
	float fTempValue; // fscanf의 값을 잠시동안 저장할 변수

	fPtr = fopen("C:\\CProgramming\\data3.txt", "r");

	for (;;)
	{
		if (feof(fPtr)) break; // 파일이 끝나면 for문 탈출

		fscanf(fPtr, "%f", &fTempValue); // 실수 값을 가져와 fTempValue에 저장
		sum += fTempValue;
	}

	printf("합계 ==> %f\n", sum);

	fclose(fPtr);
}