// ���� �ڵ带 ���� ���� �ֺ� �޵��� ����
#include <stdio.h>

int coffee_machine(int); // Function Prototype

int main(void)
{
	int coffee;
	int result_value;

	// �Լ� �� �� ����� ������ ������ ���� �����ϴ�.

	printf("A��, � Ŀ�� �帱���? (1: ����, 2: ����, 3: ��)");
	scanf("%d", &coffee);
	result_value = coffee_machine(coffee);
	printf("A�� Ŀ�� ���� �ֽ��ϴ�. \n\n");

	printf("B��, � Ŀ�� �帱���? (1: ����, 2: ����, 3: ��)");
	scanf("%d", &coffee);
	result_value = coffee_machine(coffee);
	printf("B�� Ŀ�� ���� �ֽ��ϴ�. \n\n");

	printf("C��, � Ŀ�� �帱���? (1: ����, 2: ����, 3: ��)");
	scanf("%d", &coffee);
	result_value = coffee_machine(coffee);
	printf("C�� Ŀ�� ���� �ֽ��ϴ�. \n\n");

	return 0;
}

// �Լ� ����
int coffee_machine(int coffee_type)
{
	printf("\n# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�.\n");
	printf("# 2. (�ڵ�����) �������� �غ��Ѵ�.\n");

	switch (coffee_type)
	{
	case 1:
		printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��.\n");
		break;
	case 2:
		printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��.\n");
		break;
	case 3:
		printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��.\n");
		break;
	default:
		printf("# 3. (�ڵ�����) �ƹ��ų� ź��.\n");
		break;
	}

	printf("# 4. (�ڵ�����) ���� �״´�.\n");
	printf("# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�.\n\n");

	return 0;
}