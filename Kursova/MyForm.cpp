#include "MyForm.h"
#include <windows.h>
#include <SetupAPI.h>
#include <cfgmgr32.h>
#include <iostream>
#include <string.h>

using namespace System;
using namespace System::Windows::Forms;					 

[STAThread]
int main()
{
	Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
	Kursova::MyForm MainForm;
	Application::Run(%MainForm);
	return 0;
}