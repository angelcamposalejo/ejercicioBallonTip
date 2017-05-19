#pragma once  //______________________________________ Validador.h  
#include "Resource.h"
class Validador : public Win::Dialog
{
public:
	Validador()
	{
	}
	~Validador()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btValidar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(277);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(99);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Validador";
		lb1.Create(NULL, L"Escribe un número entre 1 y 100", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 18, 16, 149, 38, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 181, 17, 89, 25, hWnd, 1001);
		btValidar.Create(NULL, L"Validar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 126, 64, 76, 28, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btValidar.Font = fontArial014A;
	}
	//_________________________________________________
	void btValidar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btValidar.IsEvent(e, BN_CLICKED)) { btValidar_Click(e); return true; }
		return false;
	}
};
