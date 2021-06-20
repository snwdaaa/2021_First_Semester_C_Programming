// ����ó ���� ���α׷� -> ����ó ���, ����ó ���, ����ó ����, ������
#include <stdio.h>
#include <string.h>

#define FILEADDRESS "c:\\CProgramming\\address.txt" // ���� �ּ�

// ���� ���� �����
FILE* fPtr; // ���� ����

// ����ó ����ü ����
typedef struct _Address
{
	char name[30]; // �̸�
	char age[5]; // ����
	char phoneNum[15]; // �޴��� ��ȣ
	char department[50]; // �а�
	char birthday[12]; // ���� -> xxxx.xx.xx ����
}Address;

// ����ó ������ ���� �� ���� ����� �Լ�
void MakeNewAddressFile(FILE* filePointer)
{
	filePointer = fopen(FILEADDRESS, "w");
	fclose(filePointer);
}

// ����ó ��� �Լ�
void PrintAddress()
{
	fPtr = fopen(FILEADDRESS, "r");

	// ����ó ������ ������ ���� ����
	if (fPtr == NULL)
	{
		MakeNewAddressFile(fPtr);
		fPtr = fopen(FILEADDRESS, "r");
	}

	int i;
	char str[200] = "";

	for (i = 1; ; i++)
	{
		fgets(str, 199, fPtr);

		if (feof(fPtr))
		{
			break;
		}
		else
		{
			printf("%2d: %s", i, str); // ����ó ���
		}
	}

	if (i == 1)
	{
		puts("\n ** ����ó ���Ͽ� ��ȭ��ȣ�� �����ϴ�. **\n\n");
	}

	fclose(fPtr);
}

// ����ó ��� �Լ�
// �̸�, ����, ��ȭ��ȣ -> ����ü�� ���� -> �� ����ü�� �迭�� ���� -> �迭 ������ txt ���Ͽ� ����
void AddAddress()
{
	fPtr = fopen(FILEADDRESS, "a");
	char str[200] = "";
	Address address = { "", "", "" }; // ����ü �ʱ�ȭ

	// ����ó�� ������ ���� �Է�
	printf("�̸��� �Է� ==> ");
	gets(address.name);
	printf("���̸� �Է� ==> ");
	gets(address.age);
	printf("��ȭ��ȣ�� �Է� ==> ");
	gets(address.phoneNum);
	printf("�а��� �Է� ==> ");
	gets(address.department);
	printf("������ �Է� ==> ");
	gets(address.birthday);

	// ������ �迭�� �̸�, ����, ��ȭ��ȣ �Է��ϱ�.
	// �̸�		����		��ȭ��ȣ  ��
	strcat(str, address.name); 
	strcat(str, "\t");
	strcat(str, address.age);
	strcat(str, "\t");
	strcat(str, address.phoneNum);
	strcat(str, "\t");
	strcat(str, address.department);
	strcat(str, "\t");
	strcat(str, address.birthday);
	strcat(str, "\t");
	strcat(str, "\n");

	fputs(str, fPtr); // txt ���Ͽ� �迭 ���� ����

	fclose(fPtr);
}

// ����ó ���� �Լ�
// 2���� �迭�� ����ó�� �����Ѵ�(�� �ึ�� �� ����� ������) -> ������ �� ��ȣ�� �Է¹޴´� -> �ش� ���� �����ϰ� �ٽ� ���Ͽ� ����.
void DeleteAddress()
{
	fPtr = fopen(FILEADDRESS, "r");
	char addresses[50][200]; // ����ó�� �ִ� 50���� ����
	int i = 0, deleteNum, addressCount;

	// ����ó ������ ������ �ٽ� �޴��� ���ư���.
	if (fPtr == NULL)
	{
		printf("\n ** ����ó ������ �������� �ʽ��ϴ�. **\n");
		return;
	}

	// �迭�� �� �ึ�� �� ������� ����ó�� �����Ѵ�.
	for (i = 0; ; i++)
	{
		fgets(addresses[i], 199, fPtr);

		// �� �̻� ����ó�� ���ٸ� �����ϴ� ���� ����.
		if (feof(fPtr))
		{
			addressCount = i;
			break;
		}
	}

	fclose(fPtr);

	// ������ �� ��ȣ �Է�
	printf("������ �� ��ȣ�� ? ");
	scanf("%d", &deleteNum);

	// �ش� ���� ������ ������ �������� �ٽ� txt ���Ͽ� ����
	fPtr = fopen(FILEADDRESS, "w"); // ���� ���

	for (i = 0; i < addressCount; i++)
	{
		if (i == deleteNum-1) continue; // ������ ���� ����

		fputs(addresses[i], fPtr);
	}

	fclose(fPtr);
}

// �޴� ��� �Լ�
void PrintMenu()
{
	printf("\n** ���� �Է� �� ����Ű�� �����ּ��� **\n");
	printf("1. ����ó ���\n");
	printf("2. ����ó ���\n");
	printf("3. ����ó ����\n");
	printf("4. ������\n");
}

int main(void)
{
	// ���� �����
	char selectNum = 0; // ������

	printf("\n### ģ�� ���� Ver 2.0 ###\n\n\n");

	while (1)
	{
		PrintMenu();
		selectNum = getch();
		getchar(); // ���ۿ��� ���� �ϳ� ����

		switch (selectNum) // �Է°��� ���� �Լ� ����
		{
			case '1':
				PrintAddress();
				break;
			case '2':
				AddAddress();
				break;
			case '3':
				DeleteAddress();
				break;
			case '4':
				return 0;
				break;
			default:
				printf("�ٽ� �Է��� �ּ���\n");
				break;
		}
	}

	return 0;
}