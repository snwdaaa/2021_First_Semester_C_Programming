// ���Ͽ��� �Ǽ� 8���� �о�� �հ踦 ����ϴ� ����
#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	float sum = 0;
	float fTempValue; // fscanf�� ���� ��õ��� ������ ����

	fPtr = fopen("C:\\CProgramming\\data3.txt", "r");

	for (;;)
	{
		if (feof(fPtr)) break; // ������ ������ for�� Ż��

		fscanf(fPtr, "%f", &fTempValue); // �Ǽ� ���� ������ fTempValue�� ����
		sum += fTempValue;
	}

	printf("�հ� ==> %f\n", sum);

	fclose(fPtr);
}