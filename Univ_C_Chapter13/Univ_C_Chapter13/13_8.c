// ������ (enumerated type)

#include <stdio.h>

int main(void)
{
	enum week // ������ ����
	{
		sun, // ������ ��� ����
		mon,
		tue,
		wed,
		thu,
		fri,
		sat	// �������� ��ǥ �Ƚᵵ OK
	};

	enum week wk; // ������ ���� ����

	wk = sat; // ������ ������ ���� ����

	if (wk == sun)
		printf("������ �Ͽ����Դϴ�.\n\n");
	else
		printf("������ �Ͽ����� �ƴմϴ�.\n\n");

	return 0;
}