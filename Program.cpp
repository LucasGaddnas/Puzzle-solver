#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>

#include "cubeClass.h"

#define FILE_SAVE 1
#define FILE_OPEN 2
#define INFO 3
#define SOLVE 4

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

void AddMenus(HWND);
void AddControls(HWND);

HMENU hMenu;
HWND hText;
HWND hScramble;
HWND hSolve;
HWND hSolution;

int WINAPI WinMain(HINSTANCE hinst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
	WNDCLASSW wc = { 0 };
	wc.hbrBackground = CreateSolidBrush(RGB(210, 210, 255));
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hInstance = hinst;
	wc.lpszClassName = L"myWindowClass";
	wc.lpfnWndProc = WindowProcedure;

	if (!RegisterClassW(&wc))
		return -1;

	CreateWindowW(L"myWindowClass", L"Rubiks cube solver", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 400, 150, 800, 500, NULL, NULL, NULL, NULL);
	MSG msg = { 0 };
	while (GetMessage(&msg, NULL, NULL, NULL))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
	switch (msg)
	{
	case WM_COMMAND:
		switch (wp)
		{
		case INFO:
			MessageBox(hWnd, "Rubiks cube solver v1.3\n\nBy Lucas G�ddn�s", "Info", MB_OK);
			break;
		case SOLVE:
			char input[50];		//decides maximum input size
			GetWindowText(hScramble, input, 50);

			cubeClass solveCube(input);
			if (solveCube.GetError() == 0)
			{
				solveCube.Solve();
				const char *output = solveCube.RobotSolution().c_str();		//convert from string to const char pointer
				SetWindowText(hSolution, solveCube.UserSolution().c_str());
				
				HANDLE hSerial;		// Opens serial port
				hSerial = CreateFile("COM4", GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

				DCB serialParams = { 0 };
				serialParams.DCBlength = sizeof(serialParams);

				int status = GetCommState(hSerial, &serialParams);
				serialParams.BaudRate = CBR_9600;
				serialParams.ByteSize = DATABITS_8;
				serialParams.StopBits = ONESTOPBIT;
				serialParams.Parity = NOPARITY;
				SetCommState(hSerial, &serialParams);

				COMMTIMEOUTS timeout = { 0 };
				timeout.ReadIntervalTimeout = 50;
				timeout.ReadTotalTimeoutConstant = 50;
				timeout.ReadTotalTimeoutMultiplier = 50;
				timeout.WriteTotalTimeoutConstant = 50;
				timeout.WriteTotalTimeoutMultiplier = 10;

				SetCommTimeouts(hSerial, &timeout);

				DWORD bytesWritten;
				status = WriteFile(hSerial, output, sizeof(output), &bytesWritten, NULL);

				CloseHandle(hSerial);
			}
			else if (solveCube.GetError() == 1) {
				SetWindowText(hSolution, "Incorrect input");
			}
			break;
		}
		break;
	case WM_CREATE:
		AddMenus(hWnd);
		AddControls(hWnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProcW(hWnd, msg, wp, lp);
		break;
	}
}

void AddMenus(HWND hWnd)
{
	hMenu = CreateMenu();

	HMENU fileMenu = CreateMenu();

	AppendMenu(hMenu, MF_POPUP, (UINT_PTR)fileMenu, "File");
	AppendMenu(fileMenu, MF_STRING, FILE_SAVE, "Save");
	AppendMenu(fileMenu, MF_STRING, FILE_OPEN, "Open");
	AppendMenu(fileMenu, MF_SEPARATOR, NULL, NULL);

	AppendMenu(hMenu, MF_STRING, INFO, "Info");

	SetMenu(hWnd, hMenu);
}

void AddControls(HWND hWnd)
{
	hText = CreateWindowW(L"static", L"Enter scramble: ", WS_VISIBLE | WS_CHILD, 200, 100, 80, 50, hWnd, NULL, NULL, NULL); //x,y,x,y
	hScramble = CreateWindowW(L"edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL, 300, 100, 200, 50, hWnd, NULL, NULL, NULL);
	hSolve = CreateWindowW(L"button", L"Solve", WS_VISIBLE | WS_CHILD, 520, 100, 100, 50, hWnd, (HMENU)SOLVE, NULL, NULL);
	hSolution = CreateWindowW(L"static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 200, 200, 400, 200, hWnd, NULL, NULL, NULL);
}