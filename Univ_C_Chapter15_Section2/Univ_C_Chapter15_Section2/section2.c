// ���� �̹��� ǥ��, �̹��� ����, �¿� ��Ī, ���� ��Ī, ��� ����, ������ ����� �ִ� ���α׷�
// raw ���ϸ� ��� ����
// raw ���� : 512x512�ȼ�, �� �ȼ����� 0~255���� ����. 0�� �������� ������, 255�� �������� ���
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

// 512x512 raw �̹��� ����
const char* fileName = "C:\\CProgramming\\ImageProcessing\\semiconduct.raw";

// ���� ����
unsigned char importImage[512][512]; // �Է� �̹���
unsigned char exportImage[512][512]; // ��� �̹���

FILE* readFilePtr, * writeFilePtr; // �Է� ���� ������, ��� ���� ������
int i, j;

// �׷��� ��� ����
HWND hwnd;
HDC hdc;

void PrintSelectMenu(); // ���� �޴� ǥ��

void ImportImage(); // �̹��� �ҷ����� �Լ�
void SetOriginalImage(); // ���� �̹��� ���� �Լ�
void NegativeImage(); // �̹��� ��� ���� �Լ�
void LR_Symmetry(); // �̹��� �¿� ��Ī �Լ�
void UD_Symmetry(); // �̹��� ���� ��Ī �Լ�
void DisplayResultImage(); // ��� �̹��� ǥ��
void SaveResultImage(); // ��� �̹��� ���� �Լ�
void BrightenImage(); // �̹��� ��� ����
void DarkenImage(); // �̹��� ��� ����

int main(void)
{
	char select = 0;

	// �׷��� ��� �غ�
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	// ���� �ҷ�����
	ImportImage();

	while (select != 4)
	{
		PrintSelectMenu();
		select = getche();

		switch (select)
		{
			case '0':
				SetOriginalImage(); // ���� �̹��� ����
				DisplayResultImage(); // �̹��� ���
				break;
			case '1':
				NegativeImage(); // �̹��� ��� ����
				DisplayResultImage();
				break;
			case '2':
				LR_Symmetry(); // �¿� ���� �Լ�
				DisplayResultImage();
				break;
			case '3':
				UD_Symmetry(); // ���� ���� �Լ�
				DisplayResultImage();
				break;
			case '4':
				BrightenImage(); // ��� ���� �Լ�
				DisplayResultImage();
				break;
			case '5':
				DarkenImage(); // ��� ���� �Լ�
				DisplayResultImage();
				break;
			case 'S':
			case 's':
				SaveResultImage();
				DisplayResultImage();
				break;
			case 'X':
			case 'x':
				return 0;
			default:
				printf("\n �߸� �Է��߽��ϴ�. �ٽ� �����ϼ���. \n");
		}
	}

	return 0;
}

// ����� ���� �޴� ���
void PrintSelectMenu()
{
	puts("\n### ������ Ver 2.0 ### \n");
	printf("0. ���� ����\n");
	printf("1. ���� ����\n");
	printf("2. ���� �¿� ��Ī\n");
	printf("3. ���� ���� ��Ī\n");
	printf("4. ���� ��� ����\n");
	printf("5. ���� ��� ����\n");
	printf("S. ��� ���� ����\n");
	printf("X. ������\n");
}

// ���� ���Ͽ� �迭�� �ҷ����� �Լ�
void ImportImage()
{
	readFilePtr = fopen(fileName, "rb"); //rb -> �б� ��� + binary ���. binary ���� => txt �̿��� ���� (�̹���, ����, ���� ��)
	fread(importImage, sizeof(char), 512 * 512, readFilePtr); // fread(�о���� ������ or �迭, �о���� ũ��, �ݺ��ؼ� ���� ����, ���� ������)
	fclose(readFilePtr);
}

// ���� �̹��� ǥ�� �Լ�
// �Է� ���� �迭(importImage)�� ��� ���� �迭(exportImage)�� �����ϰ� ó���Ѵ�.
void SetOriginalImage()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			exportImage[i][j] = importImage[i][j];
		}
	}
}

// �̹��� ��� ���� �Լ�
// ���� ���� => 512 - �⺻ ����
void NegativeImage()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			exportImage[i][j] = 255 - importImage[i][j];
		}
	}
}

// �̹��� �¿� ��Ī �Լ�
// �¿� ��Ī => importImage[i][j] <-> importImage[i][511-j]
void LR_Symmetry()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			exportImage[i][j] = importImage[i][511 - j];
		}
	}
}

// �̹��� ���� ��Ī �Լ�
// ���� ��Ī => importImage[i][j] <-> importImage[511-i][j]
void UD_Symmetry()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			exportImage[i][j] = importImage[511 - i][j];
		}
	}
}

// �̹��� ��� ����
void BrightenImage()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			if (importImage[i][j] + 25 >= 255) // 255 �ʰ� ����
			{
				exportImage[i][j] = 255;
			}
			else
			{
				exportImage[i][j] = importImage[i][j] + 25;
			}			
		}
	}
}

// �̹��� ��� ����
void DarkenImage()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			if (importImage[i][j] - 25 <= 0) // 0 �̸� ����
			{
				exportImage[i][j] = 0;
			}
			else
			{
				exportImage[i][j] = importImage[i][j] - 25;
			}
		}
	}
}

// ��� �̹��� ǥ��
void DisplayResultImage()
{
	int value;
	system("cls"); // Clear Screen

	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			value = exportImage[i][j];
			SetPixel(hdc, j + 50, i + 200, RGB(value, value, value)); // �ش� ��ġ�� �ȼ� ���� ��� �Լ�. SetPixel(�ڵ�, ����� X, ����� Y, ����)
		}
	}
}

// ��� �̹��� ���� �Լ�
void SaveResultImage()
{
	writeFilePtr = fopen("C:\\CProgramming\\ImageProcessing\\result.raw", "wb"); // write binary
	fwrite(exportImage, sizeof(char), 512 * 512, writeFilePtr);
	fclose(writeFilePtr);

	MessageBox(hwnd, L"��� ������ <C:\\CProgramming\\ImageProcessing\\result.raw>�� �����", L"���â", NULL);
}