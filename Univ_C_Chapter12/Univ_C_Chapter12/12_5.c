// realloc �Լ� ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p;
	int i, sum = 0;
	int cnt = 0;
	int data;

	// 4����Ʈ ��ŭ �Ҵ� ����
	p = (int*)malloc(sizeof(int) * 1);

	printf("ù ��° ����: ");
	scanf("%d", &p[0]);
	cnt++;

	// ���� ������ �Է� ����
	for (i = 2; ; i++)
	{
		printf("%d ��° ���� : ", i);
		scanf("%d", &data);

		if (data != 0) // �Է� ���� ���ڰ� 0�� �ƴϸ�
		{
			// ����ؼ� �Է� �޴� �����͸� �����ϱ� ����
			// 4����Ʈ�� �Ҵ��ߴ� p�� ũ�⸦ ���� ũ�⿡�� 4*i����Ʈ��ŭ(���� �ϳ� �� ���� ����) �ø���.
			// 4����Ʈ -> 8����Ʈ -> 16����Ʈ -> 20����Ʈ ....
			p = (int*)realloc(p, sizeof(int) * i);
		}
		else // �Է� ���� ���ڰ� 0�϶� for�� Ż��
		{
			break;
		}

		p[i - 1] = data;
		cnt++;
	}

	for (i = 0; i < cnt; i++)
	{
		sum += p[i];
	}

	printf("�Է��� ������ �� ==> %d\n", sum);

	// �Ҵ�޾Ҵ� �޸� ���� ��ȯ
	free(p);

	return 0;
}