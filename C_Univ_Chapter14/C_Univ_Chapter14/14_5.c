// #define�� ���
#include <stdio.h>

// #define -> ����, ���ڿ�, �Լ��� ���� ��ȣ�� ǥ��
#define PI 3.1415926535
#define STR "���� ������ ����߽��ϴ�.\n"
#define END_MSG printf("���α׷��� ����Ǿ����ϴ�.\n\n")

int main(void)
{
	printf("�������� 10�� ���� ������ ==> %10.5f\n", 10 * 10 * PI);
	printf(STR);
	
	END_MSG;

	return 0;
}