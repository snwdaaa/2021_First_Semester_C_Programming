// 숫자 다섯 개를 입력받아 그 합을 파일에 저장하는 예제
#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	int input;
	int sum = 0;

	fPtr = fopen("C:\\CProgramming\\data7.txt", "w"); // 쓰기 모드로 파일 열기

	for (int i = 0; i < 5; i++)
	{
		printf("숫자 %d : ", i + 1);
		scanf("%d", &input);
		sum += input;
	}

	fprintf(fPtr, "합계 ==> %d\n", sum);

	fclose(fPtr);

	return 0;
}