#pragma once
#include <windows.h>

class CProgressBars
{
	HWND Progressbar1, Progressbar2, hWnd;
public:
	CProgressBars(HWND hWnd, HINSTANCE hInstance);
	void OnTimer();
	bool isCoping();
};