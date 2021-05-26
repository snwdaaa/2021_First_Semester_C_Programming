// strcmp 함수
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "XYZ";
	char str_compare[] = "xyz";
	int result;

	result = strcmp(str, str_compare); // 결과값 -> 0 : 두 문자열이 같음. 그 이외의 값 : 두 문자열이 다름.

	// 그 이외의 값이 나오는 이유 => 두 문자열의 아스키코드 값을 빼기 때문. 그렇기 때문에 같으면 0이 나오는 것이고 다르면 그 외의 값이 나오는 것.

	printf("두 문자열의 비교 결과 : %d\n", result);

	return 0;
}