// ����ü �����Ϳ� �޸� �Ҵ� �Լ��� �̿��� �л��� �̸�, ���̸� �Է¹޾� ����ϴ� ���α׷�
// ����ü ������ -> �����Ҵ�(�̸�:�ִ� 10�� -> 11����Ʈ, ����:4����Ʈ)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ����ü ����
	typedef struct _student
	{
		char name[11];
		int age;
	}student;

	student* sPtr; // ����ü ������
	int studentCount;

	printf("�Է��� �л� �� : ");
	scanf("%d", &studentCount);

	// ����ü ������ -> �迭ó�� �̿�. sPtr[i] -> i��° ������ ����
	sPtr = (student*)malloc(sizeof(student) * studentCount); // �л� �� * ����ü ũ�� ��ŭ�� ���� �Ҵ�

	// �л� ���� �Է�
	for (int i = 0; i < studentCount; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", sPtr[i].name, &sPtr[i].age);
	}

	printf("\n-- �л� ��� --\n");
	// �л� ���� ���
	for (int i = 0; i < studentCount; i++)
	{
		printf("�̸�:%s, ����:%d\n", sPtr[i].name, sPtr[i].age);
	}

	free(sPtr);

	return 0;
}