// 입력한 숫자만큼의 별 모양을 출력하는 프로그램
// ex => 5914 입력 -> 1번 줄 : *****, 2번 줄 : *********, ..., 4번 줄 : ****

#include <stdio.h>

int main()
{
	char str[101];
	int i = 0, j = 0, str_len;

	printf("숫자를 여러 개 입력 : ");
	scanf_s("%s", str, 100);
	
	str_len = strlen(str);

	while (i <= str_len)
	{
		for (j = 0; j < (int)str[i] - 48; j++)
		{
			printf("*");
		}
		
		printf("\n");

		i++;
	}

	return 0;
}