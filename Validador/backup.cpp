#include "stdafx.h"  //________________________________________ Validador.cpp
#include "Validador.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Validador app;
	return app.BeginDialog(IDI_Validador, hInstance);
}

void Validador::Window_Open(Win::Event& e)
{
}

void Validador::bt1_Click(Win::Event& e)
{
}

