#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	char str[20];

	fPtr = fopen("C:\\CProgramming\\data4.txt", "a"); // ���� ���� ���� open

	printf("���Ͽ� �Է��� ���ڿ��� �Է��ϼ���(�ִ� 19��) : ");
	gets(str);

	fputs(str, fPtr); // ���Ͽ� �Է�

	fclose(fPtr);

	return 0;
}