// ������ �ҷ��� ��, �Ȱ��� ������ �ϳ� �� ����� ���� + ���� ��� ���� �Է¹���
#include <stdio.h>

int main(void)
{
	FILE* srcfPtr;
	FILE* cpyfPtr;
	char str[200]; // �ҷ��� ������ ������ ���� �迭
	char srcfAddress[100]; // �ҷ��� ������ ���
	char cpyfAddress[100]; // ������ ������ ���

	printf("�б� ���ϸ� : ");
	gets(srcfAddress);
	printf("���� ���ϸ� : ");
	gets(cpyfAddress);

	srcfPtr = fopen(srcfAddress, "r");
	cpyfPtr = fopen(cpyfAddress, "w");

	for (;;)
	{
		fgets(str, 200, srcfPtr); // �迭�� ���� ���� ����
		if (feof(srcfPtr)) break;
		fputs(str, cpyfPtr); // ���ο� ���Ͽ� ����
	}

	fclose(srcfPtr);
	fclose(cpyfPtr);

	return 0;
}