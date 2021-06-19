// cmd copy ��ɾ� ������ ��� ����
// main �Լ� �Ű�����, ���� ����� �̿�

/* ���� ����
1. ������ ������ �ҷ��� ����, ������ ������ �ٿ����� ���� �� ��� �غ�
2. �迭�� ���� ���� ���� -> �迭 ������ �ٸ� ���Ͽ� ����
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	// �Է°��� �߸��Ǿ��� ��
	if ((argc - 1) != 2)
	{
		printf("2���� �μ��� �Է����ּ���.\n");
		return 0;
	}

	// ���� ������ ����
	FILE* fRPtr; // �б� ����, file Read Pointer
	FILE* fWPtr; // ���� ����, file Write Pointer
	char str[200]; // ������ ������ �迭
	
	// argv[1]: ������ ������ ����ִ� ����
	// argv[2]: ������ ������ �ٿ����� ����

	fRPtr = fopen(argv[1], "r");
	fWPtr = fopen(argv[2], "w");

	for (;;)
	{
		fgets(str, 199, fRPtr); // �迭�� ���� ��������

		// ���� ������ ������ for�� Ż��
		if (feof(fRPtr)) break;

		fputs(str, fWPtr); // ���� ����
	}

	fclose(fRPtr);
	fclose(fWPtr);

	return 0;
}