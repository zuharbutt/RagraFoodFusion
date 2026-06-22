
#include "PaymentHandling.h"
#include "Cash.h"
#include "Card.h"

using namespace Project12;

void Project12::PaymentHandling::btnCard_Click(System::Object^ sender, System::EventArgs^ e)
{
  
    //// Handle card payment logic
    //MessageBox::Show("Card payment selected");
    Card^ CardForm = gcnew Card();
    CardForm->Show();   // Show the Card form
    this->Hide();          // Hide the paymentHandling form
}

//void Project12::PaymentHandling::btnCash_Click(System::Object^ sender, System::EventArgs^ e)
//{
//   
//    String^ amountText = this->grandTotalLabel->Text;
//    int lastSpace = amountText->LastIndexOf(' ');
//    int amount = int::Parse(amountText->Substring(lastSpace + 1));
//
//    // Open Cash form with the amount
//    Cash^ cashForm = gcnew Cash(amount); // Uses new constructor
//    cashForm->Show();
//    this->Hide(); // Optional: Close PaymentHandling
//}
void Project12::PaymentHandling::btnCash_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        // Safely extract the amount from the label
        String^ amountText = this->grandTotalLabel->Text;

        // Find "PKR" as a stable anchor point
        int pkrIndex = amountText->IndexOf("PKR");
        if (pkrIndex >= 0) {
            // Extract everything after "PKR"
            String^ amountStr = amountText->Substring(pkrIndex + 3)->Trim();

            // Parse the amount as double (handles decimal formats like 1600.00)
            double parsedAmount = Double::Parse(amountStr);
            int amount = static_cast<int>(parsedAmount);

            // Success: Open Cash form
            Cash^ cashForm = gcnew Cash(amount);
            cashForm->Show();
            this->Hide();
        }
        else {
            throw gcnew Exception("Label format unexpected. Could not find 'PKR'.");
        }
    }
    catch (Exception^ ex) {
        // Fallback: Use originalTotalAmount silently
        Cash^ cashForm = gcnew Cash(this->originalTotalAmount);
        cashForm->Show();
        this->Hide();
    }
}



