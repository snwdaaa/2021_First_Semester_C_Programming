// ���� �ڵ� ��÷ ���α׷�
// 1~45 �߿��� ���� 6���� �ڵ����� �̴� ���α׷�
#include <stdio.h>
#include <stdlib.h> // srand, rand �Լ��� ����ϱ� ���� ������� include
#include <time.h> // seed�� ���� �ð����� �ϱ� ���� ������� include

void Get_Random_Num()
{
	int rand_num, i, k;
	char isDuplicate = 'N';
	int lotto[6] = { 0 };

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++)
	{
		// ���� �̱�
		rand_num = rand() % 45 + 1;

		// �ߺ� ���� Ȯ��
		for (k = 0; k < 6; k++)
		{
			// �̹� ���� ���ڰ� �ִٸ� isDuplicate�� ���� Y�� �ٲ۴�.
			if (rand_num == lotto[k])
			{
				isDuplicate = 'Y';
			}
		}

		// �� ���� & ��� ���� ����
		if (isDuplicate == 'Y')
		{
			i--; // i���� 1�� �� �� �� �� ���ڸ� ���� �� �ֵ��� �Ѵ�.
		}
		else if (isDuplicate == 'N')
		{
			lotto[i] = rand_num;
			printf("%3d", lotto[i]);
		}

		isDuplicate = 'N'; // isDuplicate�� �ٽ� N���� �ʱ�ȭ
	}
}

int main(void)
{
	printf("** �ζ� ��÷�� �����մϴ�. **\n\n");
	printf("��÷�� �ζ� ��ȣ ==> ");

	Get_Random_Num();
	
	printf("\n");

	return 0;
}