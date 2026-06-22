//#include "MyForm.h"

#include "Category.h"

using namespace Project12;

void Project12::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Category^ CForm = gcnew Category();
    CForm->Show();
    this->Hide();
}