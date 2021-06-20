// 원본 이미지 표시, 이미지 반전, 좌우 대칭, 상하 대칭, 결과 저장, 끝내기 기능이 있는 프로그램
// raw 파일만 사용 가능
// raw 파일 : 512x512픽셀, 각 픽셀마다 0~255값을 가짐. 0에 가까울수록 검은색, 255에 가까울수록 흰색
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

// 512x512 raw 이미지 파일
const char* fileName = "C:\\CProgramming\\ImageProcessing\\semiconduct.raw";

// 전역 변수
unsigned char importImage[512][512]; // 입력 이미지
unsigned char exportImage[512][512]; // 출력 이미지

FILE* readFilePtr, * writeFilePtr; // 입력 파일 포인터, 출력 파일 포인터
int i, j;

// 그래픽 출력 변수
HWND hwnd;
HDC hdc;

void PrintSelectMenu(); // 선택 메뉴 표시

void ImportImage(); // 이미지 불러오기 함수
void SetOriginalImage(); // 원본 이미지 설정 함수
void NegativeImage(); // 이미지 흑백 반전 함수
void LR_Symmetry(); // 이미지 좌우 대칭 함수
void UD_Symmetry(); // 이미지 상하 대칭 함수
void DisplayResultImage(); // 결과 이미지 표시
void SaveResultImage(); // 결과 이미지 저장 함수
void BrightenImage(); // 이미지 밝기 증가
void DarkenImage(); // 이미지 밝기 감소

int main(void)
{
	char select = 0;

	// 그래픽 출력 준비
	hwnd = GetForegroundWindow();
	hdc = GetWindowDC(hwnd);

	// 파일 불러오기
	ImportImage();

	while (select != 4)
	{
		PrintSelectMenu();
		select = getche();

		switch (select)
		{
			case '0':
				SetOriginalImage(); // 원본 이미지 설정
				DisplayResultImage(); // 이미지 출력
				break;
			case '1':
				NegativeImage(); // 이미지 흑백 반전
				DisplayResultImage();
				break;
			case '2':
				LR_Symmetry(); // 좌우 반전 함수
				DisplayResultImage();
				break;
			case '3':
				UD_Symmetry(); // 상하 반전 함수
				DisplayResultImage();
				break;
			case '4':
				BrightenImage(); // 밝기 증가 함수
				DisplayResultImage();
				break;
			case '5':
				DarkenImage(); // 밝기 감소 함수
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
				printf("\n 잘못 입력했습니다. 다시 선택하세요. \n");
		}
	}

	return 0;
}

// 사용자 선택 메뉴 출력
void PrintSelectMenu()
{
	puts("\n### 포도샵 Ver 2.0 ### \n");
	printf("0. 원본 영상\n");
	printf("1. 영상 반전\n");
	printf("2. 영상 좌우 대칭\n");
	printf("3. 영상 상하 대칭\n");
	printf("4. 영상 밝기 증가\n");
	printf("5. 영상 밝기 감소\n");
	printf("S. 결과 영상 저장\n");
	printf("X. 끝내기\n");
}

// 사진 파일에 배열을 불러오는 함수
void ImportImage()
{
	readFilePtr = fopen(fileName, "rb"); //rb -> 읽기 모드 + binary 모드. binary 파일 => txt 이외의 파일 (이미지, 실행, 엑셀 등)
	fread(importImage, sizeof(char), 512 * 512, readFilePtr); // fread(읽어들일 포인터 or 배열, 읽어들일 크기, 반복해서 읽을 개수, 파일 포인터)
	fclose(readFilePtr);
}

// 원본 이미지 표시 함수
// 입력 사진 배열(importImage)와 출력 사진 배열(exportImage)를 동일하게 처리한다.
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

// 이미지 흑백 반전 함수
// 반전 색상 => 512 - 기본 색상
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

// 이미지 좌우 대칭 함수
// 좌우 대칭 => importImage[i][j] <-> importImage[i][511-j]
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

// 이미지 상하 대칭 함수
// 상하 대칭 => importImage[i][j] <-> importImage[511-i][j]
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

// 이미지 밝기 증가
void BrightenImage()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			if (importImage[i][j] + 25 >= 255) // 255 초과 방지
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

// 이미지 밝기 감소
void DarkenImage()
{
	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			if (importImage[i][j] - 25 <= 0) // 0 미만 방지
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

// 결과 이미지 표시
void DisplayResultImage()
{
	int value;
	system("cls"); // Clear Screen

	for (i = 0; i < 512; i++)
	{
		for (j = 0; j < 512; j++)
		{
			value = exportImage[i][j];
			SetPixel(hdc, j + 50, i + 200, RGB(value, value, value)); // 해당 위치에 픽셀 값을 찍는 함수. SetPixel(핸들, 모니터 X, 모니터 Y, 색상값)
		}
	}
}

// 결과 이미지 저장 함수
void SaveResultImage()
{
	writeFilePtr = fopen("C:\\CProgramming\\ImageProcessing\\result.raw", "wb"); // write binary
	fwrite(exportImage, sizeof(char), 512 * 512, writeFilePtr);
	fclose(writeFilePtr);

	MessageBox(hwnd, L"결과 영상이 <C:\\CProgramming\\ImageProcessing\\result.raw>로 저장됨", L"출력창", NULL);
}