#include "Cart.h"
#include "Category.h"

using namespace Project12;

void Cart::btnBack_Click(Object^ sender, EventArgs^ e) {
    Category^ categoryForm = gcnew Category();
    categoryForm->Show();
    this->Hide();
}
