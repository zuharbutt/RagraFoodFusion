//#include "Beverages.h"

#include "Category.h"

using namespace Project12;

void Project12::Beverages::btnBack_Click(System::Object^ sender, System::EventArgs^ e)
{
    Category^ CForm = gcnew Category();
    CForm->Show();
    this->Hide();
}