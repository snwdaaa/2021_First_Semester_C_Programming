// 포인터 배열
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* p[3]; // 주소를 저장할 포인터 배열
	char temp[100]; // 입력 값을 저장할 임시 공간
	int i, size;

	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 문자열 : ", i + 1);
		gets(temp);

		size = strlen(temp); // n번째 문자열의 길이를 저장한다.
		p[i] = (char*)malloc((sizeof(char) * size) + 1); // 입력받은 문자열의 크기만큼의 공간을 할당한다.

		// 새로 할당받은 공간으로 입력받은 문자열 대입
		strcpy(p[i], temp);
	}
	printf("\n");
	
	printf("-- 입력과 반대로 출력 (포인터) --\n");
	for (i = 2; i >= 0; i--)
	{
		printf("%d : %s\n", i+1, p[i]);
	}

	// 포인터 배열의 각각 요소들 -> 메모리 반납
	for (i = 0; i < 3; i++)
	{
		free(p[i]);
	}

	return 0;
}