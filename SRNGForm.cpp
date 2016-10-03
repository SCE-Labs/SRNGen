#include "SRNGForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	SRNGen::SRNGForm form;
	Application::Run(%form);
}