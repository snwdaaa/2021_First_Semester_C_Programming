// ����ü ������

#include <stdio.h>

int main(void)
{
	// �޸� �󿡼� ����ü�� ũ��� ��� ������ �������� Ŀ����.
	typedef struct _student
	{
		char name[10];
		int kor;
		int eng;
		float avg;
	}student;

	student s;
	student* sPtr; // ����ü ������

	sPtr = &s; // ����ü�� �ּҸ� ����ü �����Ϳ� ����

	// '->' : ���� ��� ������ or Arrow Operator
	// �����Ͱ� ����Ű�� ����ü�� ��������� ���� ������ �� ����Ѵ�.
	// '����ü �����ͺ���' -> '�ش� �����Ͱ� ����Ű�� ����ü�� �������'   ==    ����ü����.�������

	printf("�̸� �Է� : ");
	scanf("%s", sPtr->name);

	printf("���� ���� : ");
	scanf("%d", &sPtr->kor);

	printf("���� ���� : ");
	scanf("%d", &sPtr->eng);

	sPtr->avg = (sPtr->kor + sPtr->eng) / 2.0f;

	printf("\n--- ����ü ������ Ȱ�� ---\n");
	printf("�л� �̸� ==> %s\n", sPtr->name);
	printf("���� ���� ==> %d\n", sPtr->kor);
	printf("���� ���� ==> %d\n", sPtr->eng);
	printf("��� ���� ==> %5.1f\n", sPtr->avg);

	return 0;
}