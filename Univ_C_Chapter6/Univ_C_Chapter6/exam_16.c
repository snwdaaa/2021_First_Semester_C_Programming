// �Էµ� �����ڳ� ���ڸ� for���� �̿��Ͽ� �ݴ� ������ ����ϴ� ���α׷�.

#include <stdio.h>

int main()
{
	char str[101];
	int str_cnt;
	int i;

	printf("������ �� ���ڸ� �Է� (100�� ����) : ");
	scanf_s("%s", str, 100);

	str_cnt = strlen(str); // strlen(���ڿ�) => ���ڿ��� ���̸� int������ ��ȯ�ϴ� �Լ�

	printf("�Է��� ���ڿ� ==> %s\n", str);
	printf("��ȯ�� ���ڿ� ==> ");

	
	for (i = str_cnt; i >= 0; i--)
		printf("%c", str[i]);

	
	return 0;
}