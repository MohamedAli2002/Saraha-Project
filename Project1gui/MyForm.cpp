#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1gui::MyForm form;
	Application::Run(% form);
	//Application::Run(gcnew Project1gui::MyForm);

}