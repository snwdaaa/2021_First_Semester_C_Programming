// ���Ͽ��� �о�� ���ڿ��� ���Ͽ� �ݴ� ������ ���
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE* rPtr; // �б� ���� ������
	FILE* wPtr; // ���� ���� ������

	char str1[200], str2[200]; // ���ڿ�
	int str_length; // ���ڿ� ����
	int i;

	rPtr = fopen("C:\\CProgramming\\In.txt", "r");
	wPtr = fopen("C:\\CProgramming\\Out.txt", "w");

	for (;;)
	{
		fgets(str1, 200, rPtr);

		if (feof(rPtr)) break; // �б� ������ ������ �� for�� break

		str_length = strlen(str1);

		// �ؽ�Ʈ �����Ϳ��� ���ͷ� �ٹٲ� �� �͵� �ϳ��� ���ڷ� ����� (ĳ���� ����, �ƽ�Ű�ڵ� 13��)
		// �迭�� ������ Visual -> V i s u a l CR \0 �� 8��

		for (i = 0; i <= str_length - 2; i++) // �Ųٷ� ���Ͽ� ���
		{
			str2[i] = str1[(str_length-2) - i];
		}

		str2[i] = '\0';

		fputs(str2, wPtr);
		fputs("\n", wPtr);
	}

	fclose(rPtr);
	fclose(wPtr);

	return 0;
}