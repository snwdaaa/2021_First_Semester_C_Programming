// ����ü ��� X

#include <stdio.h>

int main(void)
{
	char name[10];
	int kor, eng;
	float avg;

	printf("�̸� : ");
	scanf("%s", name, 9);

	printf("���� ���� : ");
	scanf("%d", &kor);

	printf("���� ���� : ");
	scanf("%d", &eng);

	avg = (kor + eng) / 2.0f;

	printf("\n");

	printf("�л� �̸� ==> %s\n", name);
	printf("���� ���� ==> %d\n", kor);
	printf("���� ���� ==> %d\n", eng);
	printf("��� ���� ==> %5.1f\n", avg);

	return 0;
}