// ����� �̸��� �Է��ϰ� ��ȭ��ȣ �Ǵ� �ֹι�ȣ �� �� ������ �Է��ϴ� ���α׷�.
// ��ȭ��ȣ�� �ֹι�ȣ�� ����ü�� ������ �޸𸮸� ���������ν� ������ ����.
// ����ü�� ����ü�� ȥ���ؼ� ���

#include <stdio.h>

int main(void)
{
	// ������� ������ ��� ����ü
	typedef struct _userInfo
	{
		char name[10]; // �̸�
		union tel_id // ��ȭ��ȣ �Ǵ� �ֹι�ȣ�� ��� ����ü. ũ�Ⱑ 15���� �� ������ �� �� ������ ����ü ��ü ũ��� 15
		{
			char telNum[15];
			char idNum[15];
		}tel_id;
	}userInfo;

	userInfo uInfo; // ����ü ����

	printf("�̸� -> ");
	gets(uInfo.name);
	printf("��ȭ��ȣ �Ǵ� �ֹι�ȣ -> ");
	gets(uInfo.tel_id.idNum);

	printf("\n-- ����ü/����ü ȥ�� Ȱ�� --\n");
	printf("�̸� ==> %s\n", uInfo.name);
	printf("��ȭ��ȣ/�ֹι�ȣ ==> %s\n", uInfo.tel_id.idNum);

	return 0;
}