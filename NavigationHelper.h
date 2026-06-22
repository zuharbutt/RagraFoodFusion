#pragma once
#include "Cart.h"  // Must be included here

namespace Project12 {
    public ref class NavigationHelper {
    public:
        static void ShowCartForm(System::Windows::Forms::Form^ currentForm) {
            if (System::Windows::Forms::Application::OpenForms["Cart"] == nullptr) {
                Cart^ cartForm = gcnew Cart();
                cartForm->Name = "Cart";
                cartForm->Show();
            }
            currentForm->Hide();
        }
    };
}