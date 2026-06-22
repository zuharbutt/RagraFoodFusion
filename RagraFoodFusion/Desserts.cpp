//#include "Desserts.h"
#include "Category.h"

using namespace Project12;

void Project12::Desserts::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

    //// Handle card payment logic
    //MessageBox::Show("Card payment selected");
    Category^ CForm = gcnew Category();
    CForm->Show();   // Show the Card form
    this->Hide();          // Hide the paymentHandling form
}