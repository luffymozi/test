// Win32Project1.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include <tchar.h>
using namespace std;
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);//窗口函数说明
													 //以下是入口函数的代码
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX  wcex;
	HWND hWnd;
	MSG msg;
	TCHAR szWindowClass[] = L"窗口示例";
	TCHAR szTitle[] = L"My Windows";
	//以下初始化窗口类
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = 0;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance= hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));
	//以下进行窗口类的注册
	if (!RegisterClassEx(&wcex))
	{
		MessageBox(NULL, _T("窗口类注册失败！"), _T("窗口注册"), NULL);
		return 1;
	}

	//以下创建窗口
	hWnd = CreateWindow(
		szWindowClass,
		szTitle,
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,
		CW_USEDEFAULT, CW_USEDEFAULT,
		NULL,
		NULL,
		hInstance,
		NULL
	);
	if (!hWnd)
	{
		MessageBox(NULL, L"创建窗口失败！", _T("创建窗口"), NULL);
		return 1;
	}
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return(int)msg.wParam;
}
//以下是窗口函数的代码
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
		break;
	}
	return 0;
}



