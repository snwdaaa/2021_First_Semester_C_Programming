// main �Լ������� �Ű����� ��� 1
#include <stdio.h>

int main(int argc, char* argv[]) // �Ű����� ����
{
	int i;

	printf("argc �Ű����� ==> %d\n", argc); // �Ű������� ���� ���

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] �Ű����� ==> %s\n", i, argv[i]); // �Ű������� ���� ���
	}

	return 0;
}