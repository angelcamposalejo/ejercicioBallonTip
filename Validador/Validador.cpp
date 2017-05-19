#include "stdafx.h"  //________________________________________ Validador.cpp
#include "Validador.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Validador app;
	return app.BeginDialog(IDI_Validador, hInstance);
}

void Validador::Window_Open(Win::Event& e)
{
}

void Validador::btValidar_Click(Win::Event& e)
{
	const int entrada = tbxEntrada.IntValue;
	if ((entrada <= 100) && (entrada >= 0))
	{
		tbxEntrada.ShowBalloonTip(L"Validar", L"Número valido", TTI_INFO);
	}
	else
	{
		tbxEntrada.ShowBalloonTip(L"Validar", L"Número invalido", TTI_ERROR);
	}
}

