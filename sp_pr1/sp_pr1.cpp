#include <Windows.h>
#include "sp_pr1.h"

	int APIENTRY WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpszCmdLine, int nCmdShow)
{
		LPCTSTR lpszHelloText = MESSAGE_TEXT;
		LPCTSTR lpszHelloWndTitle = MESSAGE_TITLE;
	MessageBox(NULL, lpszHelloText, lpszHelloWndTitle, MB_OK | MB_SYSTEMMODAL);
	////////////
	int iRetValue1, iRetValue2;
	LPCTSTR lpszMesBoxTitle = TEXT("������� 2");
	LPCTSTR lpszResponce;
	do {
		iRetValue1 = MessageBox(NULL, TEXT("������� ���� �� ������."),
			lpszMesBoxTitle,
			MB_OK | MB_OKCANCEL);
		switch (iRetValue1)
		{
		case IDABORT:
			lpszResponce = TEXT("������ ������ �������� (ABORT)");
			break;
		case IDRETRY:
			lpszResponce = TEXT("������ ������ ��������� (RETRY)");
			break;
		case IDIGNORE:
			lpszResponce = TEXT("������ ������ ���������� (IGNORE)");
			break;
		default: lpszResponce = TEXT("����� ��� �� �������.");
		}
		TCHAR buf[200] = TEXT(""); lstrcat(buf, lpszResponce);
		lstrcat(buf, TEXT(" OK and Cancel."));
			iRetValue2 = MessageBox(NULL, buf, lpszMesBoxTitle,
				MB_OKCANCEL | MB_ICONINFORMATION);
	} while (iRetValue2 != IDNO);
	/////////
	return 0;
}