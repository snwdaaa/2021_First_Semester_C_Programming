// �Է��� ���ڸ�ŭ�� �� ����� ����ϴ� ���α׷�
// ex => 5914 �Է� -> 1�� �� : *****, 2�� �� : *********, ..., 4�� �� : ****

#include <stdio.h>

int main()
{
	char str[101];
	int i = 0, j = 0, str_len;

	printf("���ڸ� ���� �� �Է� : ");
	scanf_s("%s", str, 100);
	
	str_len = strlen(str);

	while (i <= str_len)
	{
		for (j = 0; j < (int)str[i] - 48; j++)
		{
			printf("*");
		}
		
		printf("\n");

		i++;
	}

	return 0;
}