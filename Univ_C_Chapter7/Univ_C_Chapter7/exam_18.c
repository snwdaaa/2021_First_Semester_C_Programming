// �Էµ� ���ڿ��� �빮�ڿ� �ҹ���, ���ڰ� ���� �� �� �ԷµǾ����� ���� ���α׷�.
// �빮��, �ҹ���, ���� �ܿ��� ����

#include <stdio.h>

int main()
{
	char str[101];
	char ch;
	int index = 0;
	int str_len;
	int upper_cnt = 0, lower_cnt = 0, num_cnt = 0;

	printf("���ڿ��� �Է�(100�� �̳�) : ");
	scanf_s("%s", str, 100);

	// ���ڿ� ����
	str_len = strlen(str);

	// �ε��� ���� <= str_len�� ���� -> ���ڿ� �ϳ��� ����鼭 A~Z, a~z, 0~9�ΰ� ã��
	while (index <= str_len) // ���ڿ��� �������� '\0' (�� ����)�� �ƴ� ������ �ݺ��ص� OK => while(str[index] != '0')
	{
		if ((str[index] >= 'A') && (str[index] <= 'Z')) // �빮��
		{
			upper_cnt++;
		}
		else if ((str[index] >= 'a') && (str[index] <= 'z')) // �ҹ���
		{
			lower_cnt++;
		}
		else if ((str[index] >= '0') && (str[index] <= '9')) // ����
		{
			num_cnt++;
		}

		index++;
	}

	printf("�빮�� %d��, �ҹ��� %d��, ���� %d��\n", upper_cnt, lower_cnt, num_cnt);

	return 0;
}