#pragma once
#include <Windows.h>

HWND tmp_window = NULL;
BOOL CALLBACK EnumWindowsCallback(HWND handle, LPARAM lParam)
{
	DWORD wndProcId;
	GetWindowThreadProcessId(handle, &wndProcId);

	if (GetCurrentProcessId() != wndProcId)
		return TRUE; // skip to next window

	tmp_window = handle;
	return FALSE; // window found abort search
}

HWND GetProcessWindow()
{
	tmp_window = NULL;
	EnumWindows(EnumWindowsCallback, NULL);
	return tmp_window;
}

void RedirectConsoleOutput()
{
	AllocConsole();
	FILE* file;
	freopen_s(&file, "CONOUT$", "w", stdout);
}

void SetConsoleColor(WORD color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}