// 입력된 문자열 행을 반대로, 그리고 문자열 글자들도 거꾸로 출력하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* p[3]; // 포인터 배열 선언
	char temp[100];
	int i, j, temp_length, p_length;

	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 문자열 : ", i + 1);
		gets(temp);

		temp_length = strlen(temp);

		p[i] = (int*)malloc((sizeof(char) * temp_length) + 1); // 입력받은 문자열의 길이만큼 메모리 공간을 할당한다.
		strcpy(p[i], temp); // i 행에 입력받은 문자열 대입
	}
	printf("\n");

	printf("-- 입력과 반대로 출력 (포인터) : 글자 순서도 거꾸로 --\n");
	for (i = 2; i >= 0; i--)
	{
		printf("%d : ", i + 1);

		p_length = strlen(p[i]);
		for (j = p_length - 1; j >= 0; j--)
		{
			printf("%c", p[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 메모리 반납
	for (i = 0; i < 3; i++)
	{
		free(p[i]);
	}

	return 0;
}