#include <iostream>
#include<string>
#include<Windows.h>
#include<vector>
using namespace std;

void SetText()
{
	//Sleep(2500);//等待一会儿，用于把鼠标移到其它窗口上去，避免指向本身进程的窗口，关掉自己的窗口。
	//POINT curpos;
	//while (1)
	//{
	//	GetCursorPos(&curpos);
	//	HWND wnd = WindowFromPoint(curpos);
	//	SendMessage(wnd, WM_CLOSE, 0, 0);
	//	Sleep(300);
	//}

	POINT mPoint;

	Sleep(2500);
	GetCursorPos(&mPoint);
	HWND mEdit_Hwnd = WindowFromPoint(mPoint);
	cout << "鼠标位置：" << mPoint.x << "  " << mPoint.y << endl;
	SetWindowText(mEdit_Hwnd, (LPCWSTR)"jdfghsaj");
}

int main()
{
	vector<HWND>mVec;
	HWND mHwnd = FindWindow(TEXT("Notepad"), NULL);
	cout << mHwnd << endl;
	
	RECT mRect;
	GetWindowRect(mHwnd, &mRect);
	int mWeight = mRect.right - mRect.left;
	int mLength = mRect.bottom - mRect.top;
	cout << "长：" << mWeight << "宽：" << mLength << endl;
	
	MoveWindow(mHwnd, 0, 0, mWeight, mLength, false);

	//得到桌面窗口
	HWND mDesktop_Hwnd = GetDesktopWindow();
	GetWindowRect(mDesktop_Hwnd, &mRect);
	mWeight = mRect.right - mRect.left;
	mLength = mRect.bottom - mRect.top;
	cout << "长：" << mWeight << "宽：" << mLength << endl;

	
	/*while (mHwnd!=NULL)
	{
		mHwnd = GetNextWindow(mHwnd, GW_HWNDNEXT);
		mVec.push_back(mHwnd);
		cout << mHwnd << endl;
	}*/
	//SendMessage(mHwnd, WM_ACTIVATE, (WPARAM)0, (LPARAM)0);
	//SetClipboardData(1, mHwnd);
	
	const char* msg = "gio";
	SendMessageA(mHwnd, WM_SETTEXT, 0, (WPARAM)msg);
	//keybd_event(108, 0, 0, 0);
	SetText();
	return 0;
}