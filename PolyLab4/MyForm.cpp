#include "MyForm.h"
//#include <Windows.h>
//#include <stdio.h>
//#include"iostream"

// Git 
#include "figure.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace PolyLab4;

[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PolyLab4::MyForm form;
	Application::Run(% form);
	Application::Run(gcnew MyForm);
}