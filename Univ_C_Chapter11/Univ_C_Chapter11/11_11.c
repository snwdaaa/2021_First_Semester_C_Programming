// ������ �ҷ��� ��, �Ȱ��� ������ �ϳ� �� ����� ����
#include <stdio.h>

int main(void)
{
	FILE* srcfPtr;
	FILE* cpyfPtr;
	char str[200]; // �ҷ��� ������ ������ ���� �迭

	srcfPtr = fopen("C:\\windows\\win.ini", "r");
	cpyfPtr = fopen("C:\\CProgramming\\data5.txt", "w");

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