// 함수를 사용한 예
#include <stdio.h>

int coffee_machine(int); // 함수 프로토타입

int main(void)
{
	int coffee;
	int return_value;

	printf("어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙) => ");
	scanf("%d", &coffee);

	return_value = coffee_machine(coffee);

	printf("손님~ 커피 여기 있습니다.\n\n");

	return 0;
}

// * 함수의 구조
// Function Head
// {
//		Function Body
// }

// 함수 선언
int coffee_machine(int coffee_type)
{
	printf("\n# 1. (자동으로) 뜨거운 물을 준비한다.\n");
	printf("# 2. (자동으로) 종이컵을 준비한다.\n");

	switch (coffee_type)
	{
		case 1:
			printf("# 3. (자동으로) 보통커피를 탄다.\n");
			break;
		case 2:
			printf("# 3. (자동으로) 설탕커피를 탄다.\n");
			break;
		case 3:
			printf("# 3. (자동으로) 블랙커피를 탄다.\n");
			break;
		default:
			printf("# 3. (자동으로) 아무거나 탄다.\n");
			break;
	}

	printf("# 4. (자동으로) 물을 붓는다.\n");
	printf("# 5. (자동으로) 스푼으로 저어서 녹인다.\n\n");

	return 0;
}