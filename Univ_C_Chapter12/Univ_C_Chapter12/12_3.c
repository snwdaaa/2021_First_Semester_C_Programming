// malloc 함수를 사용해 동적으로 메모리 할당
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p;
	int i, sum = 0;
	int cnt;

	printf("입력할 숫자의 개수는 ? ");
	scanf("%d", &cnt);

	// 'cnt * int크기' 만큼의 공간을 할당 받는다.
	// 동적 할당을 통해 할당받은 공간은 마치 배열처럼 메모리 공간에서 붙어있다.
	// 즉 p+i == &p[i] 같은 표현을 사용할 수 있다.
	p = (int*)malloc(sizeof(int) * cnt);

	for (i = 0; i < cnt; i++)
	{
		printf("%d 번째 숫자: ", i + 1);
		scanf("%d", p + i); // p+i = &p[i]
	}

	for (i = 0; i < cnt; i++)
	{
		sum += *(p + i);
	}

	printf("입력한 숫자의 합 ==> %d\n", sum);

	// 할당받은 메모리를 다시 OS로 돌려준다.
	// 돌려주지 않으면 프로그램이 종료돼도 메모리 상에 그대로 남아있게 된다.
	// 사용 다 했으면 꼭 반납하도록 하자.
	// 메모리를 돌려주고 나면, 포인터 변수 p의 값은 NULL이 된다.
	free(p);

	return 0;
}