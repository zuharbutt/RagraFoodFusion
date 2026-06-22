#include "EmployeeLogin.h"
#include "Modes.h"



using namespace Project12;

void Project12::EmployeeLogin::btnBack_Click(System::Object^ sender, System::EventArgs^ e)
{
  
    //// Handle card payment logic
    //MessageBox::Show("Card payment selected");
    Modes^ CardForm = gcnew Modes();
    CardForm->Show();   // Show the Card form
    this->Hide();          // Hide the paymentHandling form
}
