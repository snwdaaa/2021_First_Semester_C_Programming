// 숫자 자동 추첨 프로그램
// 1~45 중에서 숫자 6개를 자동으로 뽑는 프로그램
#include <stdio.h>
#include <stdlib.h> // srand, rand 함수를 사용하기 위한 헤더파일 include
#include <time.h> // seed를 현재 시각으로 하기 위한 헤더파일 include

void Get_Random_Num()
{
	int rand_num, i, k;
	char isDuplicate = 'N';
	int lotto[6] = { 0 };

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++)
	{
		// 숫자 뽑기
		rand_num = rand() % 45 + 1;

		// 중복 여부 확인
		for (k = 0; k < 6; k++)
		{
			// 이미 뽑은 숫자가 있다면 isDuplicate의 값을 Y로 바꾼다.
			if (rand_num == lotto[k])
			{
				isDuplicate = 'Y';
			}
		}

		// 값 저장 & 출력 여부 결정
		if (isDuplicate == 'Y')
		{
			i--; // i에서 1을 빼 한 번 더 숫자를 뽑을 수 있도록 한다.
		}
		else if (isDuplicate == 'N')
		{
			lotto[i] = rand_num;
			printf("%3d", lotto[i]);
		}

		isDuplicate = 'N'; // isDuplicate를 다시 N으로 초기화
	}
}

int main(void)
{
	printf("** 로또 추첨을 시작합니다. **\n\n");
	printf("추첨된 로또 번호 ==> ");

	Get_Random_Num();
	
	printf("\n");

	return 0;
}