// ���� �ټ� ���� �Է¹޾� �� ���� ���Ͽ� �����ϴ� ����
#include <stdio.h>

int main(void)
{
	FILE* fPtr;
	int input;
	int sum = 0;

	fPtr = fopen("C:\\CProgramming\\data7.txt", "w"); // ���� ���� ���� ����

	for (int i = 0; i < 5; i++)
	{
		printf("���� %d : ", i + 1);
		scanf("%d", &input);
		sum += input;
	}

	fprintf(fPtr, "�հ� ==> %d\n", sum);

	fclose(fPtr);

	return 0;
}