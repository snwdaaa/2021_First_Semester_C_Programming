// realloc 함수 사용
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p;
	int i, sum = 0;
	int cnt = 0;
	int data;

	// 4바이트 만큼 할당 받음
	p = (int*)malloc(sizeof(int) * 1);

	printf("첫 번째 숫자: ");
	scanf("%d", &p[0]);
	cnt++;

	// 무한 루프로 입력 받음
	for (i = 2; ; i++)
	{
		printf("%d 번째 숫자 : ", i);
		scanf("%d", &data);

		if (data != 0) // 입력 받은 숫자가 0이 아니면
		{
			// 계속해서 입력 받는 데이터를 저장하기 위해
			// 4바이트만 할당했던 p의 크기를 원래 크기에서 4*i바이트만큼(정수 하나 더 저장 가능) 늘린다.
			// 4바이트 -> 8바이트 -> 16바이트 -> 20바이트 ....
			p = (int*)realloc(p, sizeof(int) * i);
		}
		else // 입력 받은 숫자가 0일때 for문 탈출
		{
			break;
		}

		p[i - 1] = data;
		cnt++;
	}

	for (i = 0; i < cnt; i++)
	{
		sum += p[i];
	}

	printf("입력한 숫자의 합 ==> %d\n", sum);

	// 할당받았던 메모리 공간 반환
	free(p);

	return 0;
}