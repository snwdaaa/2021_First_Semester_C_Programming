// 입력된 문자열을 반대 순서로 출력하는 프로그램

#include <stdio.h>
#include <string.h>

int main()
{
	char ss[101], tt[101]; // ss : 입력할 문자열, tt : ss를 반대 순서로 저장 할 문자열
	int i, str_len;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", ss, 100);

	str_len = strlen(ss); // strlen 함수는 널문자를 제외한 문자 수를 반환.

	for (i = 0; i <= str_len; i++)
	{
		tt[i] = ss[str_len - (i+1)]; // ss[str_len]은 널 문자이므로 str_len -1 부터 시작해야한다.
	}

	tt[str_len] = '\0'; // tt 배열은 문자열을 입력 받은 적이 없으니 널값을 가지고 있지 않음. 그래서 직접 대입해줘야 함.

	printf("내용을 거꾸로 출력 ==> %s", tt);

	return 0;
}