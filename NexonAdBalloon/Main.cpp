#include "ADBalloon.h"

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ADBallonParam param;

	param.hInst = hInstance;
	param.height = 150;
	param.width = 500;
	param.timeout = 5; //seconds
	
	strcpy(param.URL, "https://github.com/LankMasterFlex");

	return ShowADBalloon(param);
}