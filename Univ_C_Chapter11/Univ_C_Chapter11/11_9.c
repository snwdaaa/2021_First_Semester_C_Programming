#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	int sum = 0;
	int fTempValue;

	fPtr = fopen("C:\\CProgramming\\data2.txt", "r");

	for (;;)
	{
		// ������ �������� ���ѹݺ��� Ż��
		if (feof(fPtr))
			break;

		fscanf(fPtr, "%d", &fTempValue); // %d ������ ���� fTempValue�� ����
		sum += fTempValue;
	}

	printf("�հ� ==> %d\n", sum);

	fclose(fPtr);

	return 0;
}