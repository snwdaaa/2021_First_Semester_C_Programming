// ���ڿ� �迭�� �������� ����
#include <stdio.h>

int main(void)
{
	char s[8] = "Basic-C";
	char* p;

	p = s;

	// &s[3] == p + 3
	// �ּҸ� string���� ���?
	printf("&s[3] ==> %s\n", &s[3]);
	printf("p+3 ==> %s\n\n", p + 3);

	// s[3] == *(p + 3)
	printf("s[3] ==> %c\n", s[3]);
	printf("*(p+3) ==> %c\n", *(p + 3));

	return 0;
}