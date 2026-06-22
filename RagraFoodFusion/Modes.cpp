//#include "Modes.h"
#include "WelcomeForm.h"

#include "Modes.h"



using namespace Project12;

void Project12::Modes::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

    //// Handle card payment logic
    //MessageBox::Show("Card payment selected");
    WelcomeForm^ newForm = gcnew WelcomeForm();
    newForm->Show();   // Show the Card form
    this->Hide();          // Hide the paymentHandling form
}