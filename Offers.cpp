//#include "Offers.h"

#include "Category.h"

using namespace Project12;

void Project12::Offers::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Category^ CForm = gcnew Category();
    CForm->Show();
    this->Hide();
}