// ����ڰ� �Է��� ���� ���� �߿��� ¦���� �հ踦 ����ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt, i;
	int sum = 0;
	int* p;

	printf("�Է��� ������ ? ");
	scanf("%d", &cnt);

	// �޸��� �� ������ cnt * 4 ����Ʈ ��ŭ�� ũ�⸦ �Ҵ��Ѵ�.
	p = (int*)malloc(sizeof(int) * cnt);

	// �� �Է�
	for (i = 0; i < cnt; i++)
	{
		printf("%d ��° ���� : ", i + 1);
		scanf("%d", &p[i]);
	}

	// ¦���� ���� ���Ѵ�.
	for (i = 0; i < cnt; i++)
	{
		if (*(p + i) % 2 == 0)
		{
			sum += *(p + i);
		}
	}

	printf("�Է��� ¦���� ==> %d\n", sum);

	return 0;
}