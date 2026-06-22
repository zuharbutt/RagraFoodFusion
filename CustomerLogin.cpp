#include "CustomerLogin.h"

#include "Modes.h"



using namespace Project12;

void Project12::CustomerLogin::btnBack_Click(System::Object^ sender, System::EventArgs^ e)
{

    //// Handle card payment logic
    //MessageBox::Show("Card payment selected");
    Modes^ CcForm = gcnew Modes();
    CcForm->Show();   // Show the Card form
    this->Hide();          // Hide the paymentHandling form
}