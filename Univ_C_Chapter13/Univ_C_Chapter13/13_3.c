// 13_2 => ����ü ���

#include <stdio.h>

int main(void)
{
	struct student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s1;

	printf("�̸� : ");
	scanf("%s", s1.name, 9);

	printf("���� ���� : ");
	scanf("%d", &s1.kor);

	printf("���� ���� : ");
	scanf("%d", &s1.eng);

	s1.avg = (s1.kor + s1.eng) / 2.0f;

	printf("\n");

	printf("�л� �̸� ==> %s\n", s1.name);
	printf("���� ���� ==> %d\n", s1.kor);
	printf("���� ���� ==> %d\n", s1.eng);
	printf("��� ���� ==> %5.1f\n", s1.avg);

	return 0;
}