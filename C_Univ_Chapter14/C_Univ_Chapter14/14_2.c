// main �Լ� �Ű������� �̿��� cmd�� �ִ� type ����
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc-1 != 1)
	{
		printf("\n-- �Ű������� 1�� ����ϼ��� --\n\n");
		return 0;
	}

	FILE* fPtr;
	char str[200];

	fPtr = fopen(argv[1], "r"); // File Open

	for (;;)
	{
		fgets(str, 200, fPtr); // ���� ���� �о����

		if (feof(fPtr)) break; // ���� �������� for�� Ż��

		printf("%s", str); // ���
	}
	printf("\n");

	fclose(fPtr);

	return 0;
}