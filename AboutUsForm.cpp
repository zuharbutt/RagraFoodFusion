#include "AboutUsForm.h"
#include "WelcomeForm.h"
using namespace Project12;
void Project12::AboutUsForm::btnBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    WelcomeForm^ AsForm = gcnew WelcomeForm();
    AsForm->Show();   
    this->Close();         
}