#include "ConfirmOrder.h"
#include "PaymentHandling.h"

//#include "Cart.h"
using namespace Project12;

void Project12::ConfirmOrder::btnConfirmOrder_Click(System::Object^ sender, System::EventArgs^ e)
{
    // Create the PaymentHandling form
    PaymentHandling^ paymentForm = gcnew PaymentHandling();
    paymentForm->Show();   // Show the PaymentHandling form
    this->Hide();          // Hide the ConfirmOrder form
}

//
//[STAThread]
//int main(array<System::String^>^ args)
//{
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//
//    // Start with the ConfirmOrder form
//    Application::Run(gcnew ConfirmOrder());
//    return 0;
//}
