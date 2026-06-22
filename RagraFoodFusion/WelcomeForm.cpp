#include "WelcomeForm.h"  // Include your form header file
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

public ref class DpiHelper {
public:
    [DllImport("user32.dll", EntryPoint = "SetProcessDPIAware")]
    static bool SetProcessDPIAware();
};

[STAThreadAttribute]
int main(array<String^>^ args)
{
    // Enable high DPI awareness to prevent layouts from shrinking/distorting
    DpiHelper::SetProcessDPIAware();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Replace 'Project12' with your actual namespace if it's different
    Project12::WelcomeForm^ form = gcnew Project12::WelcomeForm();
    Application::Run(form);
    return 0;
}
