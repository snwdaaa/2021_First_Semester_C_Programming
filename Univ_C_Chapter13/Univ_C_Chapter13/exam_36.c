// �������� Ȱ���ؼ� �Էµ� ���� �̸��� ����ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
	int month_num;
	enum _month // ������
	{
		Jan = 1,
		Feb,
		Mar,
		Apr,
		May,
		Jun,
		Jul,
		Aug,
		Sep,
		Oct,
		Nov,
		Dec,
	}month;

	printf("�� �Է� : ");
	scanf("%d", &month); // month �� �Է�

	// ������ �� -> ���� => ����ġ�� �̿�
	switch (month)
	{
		case Jan:
			printf("%d���� January �Դϴ�.", month);
			break;
		case Feb:
			printf("%d���� February�Դϴ�.", month);
			break;
		case Mar:
			printf("%d���� March �Դϴ�.", month);
			break;
		case Apr:
			printf("%d���� April �Դϴ�.", month);
			break;
		case May:
			printf("%d���� May �Դϴ�.", month);
			break;
		case Jun:
			printf("%d���� June �Դϴ�.", month);
			break;
		case Jul:
			printf("%d���� July �Դϴ�.", month);
			break;
		case Aug:
			printf("%d���� August �Դϴ�.", month);
			break;
		case Sep:
			printf("%d���� September �Դϴ�.", month);
			break;
		case Oct:
			printf("%d���� October �Դϴ�.", month);
			break;
		case Nov:
			printf("%d���� November �Դϴ�.", month);
			break;
		case Dec:
			printf("%d���� December �Դϴ�.", month);
			break;
		default:
			printf("�� �� �Է��߽��ϴ�.");
			break;
	}

	return 0;
}