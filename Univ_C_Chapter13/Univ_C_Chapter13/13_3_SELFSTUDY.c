// 13_3 -> ����ü �ʱ갪, typedef�� ����ü ����

#include <stdio.h>

int main(void)
{
	typedef struct _student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	}student;

	student s1 = { "John", 87, 72, }; // avg�� 0���� �ʱ�ȭ, ��� ���� ���� ������� ����� ��
	student s2 = { .kor = 40, .eng = 80, .name = "Doe" }; // ���� ������� ���� �ʿ� X 

	s1.avg = (s1.kor + s1.eng) / 2.0f;
	s2.avg = (s2.kor + s2.eng) / 2.0f;

	printf("�л� �̸� ==> %s\n", s1.name);
	printf("���� ���� ==> %d\n", s1.kor);
	printf("���� ���� ==> %d\n", s1.eng);
	printf("��� ���� ==> %5.1f\n", s1.avg);

	printf("\n");

	printf("�л� �̸� ==> %s\n", s2.name);
	printf("���� ���� ==> %d\n", s2.kor);
	printf("���� ���� ==> %d\n", s2.eng);
	printf("��� ���� ==> %5.1f\n", s2.avg);

	return 0;
}