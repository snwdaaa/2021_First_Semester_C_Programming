// gets, puts �Լ�
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	int str1_length, str2_length;

	puts("ù ��° ���ڿ��� �Է��ϼ��� : ");
	gets(str1);

	puts("�� ��° ���ڿ��� �Է��ϼ��� : ");
	gets(str2);

	str1_length = strlen(str1);
	str2_length = strlen(str2);

	printf("ù ��° ���ڿ��� ���� : %d\n", str1_length);
	printf("�� ��° ���ڿ��� ���� : %d\n", str2_length);

	if (strcmp(str1, str2) == 0) // �� ���ڿ��� ������
		puts("�� ���ڿ��� �����ϴ�.\n");
	else
		puts("�� ���ڿ��� �ٸ��ϴ�.\n");

	return 0;
}