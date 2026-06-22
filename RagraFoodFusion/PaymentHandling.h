//PaymentHandling.h :
#pragma warning(disable : 2020)
#pragma once
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "ConfirmOrder.h"
namespace Project12 {
    using namespace System;
    using namespace System::Windows::Forms;

    public ref class PaymentHandling : public System::Windows::Forms::Form
    {
    public: PaymentHandling(void)
    {
        InitializeComponent();
        CalculateAndDisplayTotal(); // <- Add this line to auto-update label

    }


    protected:
        ~PaymentHandling()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ btnCard;
        System::Windows::Forms::Button^ btnCash;
        System::Windows::Forms::Button^ btnBack;  // Back Button



    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;

    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ grandTotalLabel;

    private:
        int originalTotalAmount; // Add this line to store the original total
           System::ComponentModel::Container^ components;

    private:
        void btnCard_Click(System::Object^ sender, System::EventArgs^ e);
        void btnCash_Click(System::Object^ sender, System::EventArgs^ e);
       
        std::string trim(const std::string& str) {
            size_t first = str.find_first_not_of(" \t\r\n");
            size_t last = str.find_last_not_of(" \t\r\n");
            return (first == std::string::npos || last == std::string::npos) ? "" : str.substr(first, last - first + 1);
        }

        void CalculateAndDisplayTotal() {
            std::ifstream inventoryFile("inventory.txt");
            std::ifstream cartFile("cartfile.txt");

            if (!inventoryFile.is_open() || !cartFile.is_open()) {
                MessageBox::Show("Error opening files!", "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Step 1: Load inventory into a map
            std::map<std::string, int> itemPriceMap;
            std::string line;

            std::getline(inventoryFile, line); // Skip header

            while (std::getline(inventoryFile, line)) {
                std::stringstream ss(line);
                std::string itemID, itemName, priceStr, qtyStr;
                if (std::getline(ss, itemID, '/') &&
                    std::getline(ss, itemName, '/') &&
                    std::getline(ss, priceStr, '/') &&
                    std::getline(ss, qtyStr)) {
                    itemPriceMap[itemName] = std::stoi(priceStr);
                }
            }

            // Step 2: Find the last username
            std::string lastUser = "";
            std::vector<std::string> allLines;

            while (std::getline(cartFile, line)) {
                if (!line.empty()) {
                    allLines.push_back(line);
                    size_t colonPos = line.find(":");
                    if (colonPos != std::string::npos) {
                        lastUser = line.substr(0, colonPos);
                    }
                }
            }

            // Step 3: Extract all items for that last user
            //int totalAmount = 0;
            //for (const auto& userLine : allLines) {
            //    size_t colonPos = userLine.find(":");
            //    if (colonPos != std::string::npos) {
            //        std::string username = userLine.substr(0, colonPos);
            //        std::string itemPart = userLine.substr(colonPos + 2); // skip ": "

            //        if (username == lastUser) {
            //            size_t arrowPos = itemPart.find("->");
            //            if (arrowPos != std::string::npos) {
            //                std::string itemName = trim(itemPart.substr(0, arrowPos));

            //                std::string qtyStr = itemPart.substr(arrowPos + 2);

            //                int qty = std::stoi(qtyStr);

            //                if (itemPriceMap.find(itemName) != itemPriceMap.end()) {
            //                    totalAmount += itemPriceMap[itemName] * qty;
            //                }
            //            }
            //        }
            //    }
            //}
            int totalAmount = 0;

            std::ifstream totalFile("grandtotal.txt");
            if (totalFile.is_open()) {
                std::string line;
                if (std::getline(totalFile, line)) {
                    try {
                        totalAmount = static_cast<int>(std::stod(line)); // Convert string to double, then to int
                    }
                    catch (...) {
                        // handle error if conversion fails
                        totalAmount = 0;
                    }
                }
                totalFile.close();
            }
            this->originalTotalAmount = totalAmount; // Store the original total
            this->grandTotalLabel->Text = "Amount Due: PKR " + totalAmount.ToString();
            std::ifstream gtFile("grandtotal.txt");
            std::string gtLine;
            if (gtFile.is_open() && std::getline(gtFile, gtLine)) {
                double grandTotal = std::stod(gtLine);
                this->grandTotalLabel->Text = "Cart Grand Total: PKR " + grandTotal.ToString("F2");
            }

        }

    private:
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaymentHandling::typeid));
            this->btnCard = (gcnew System::Windows::Forms::Button());
            this->btnCash = (gcnew System::Windows::Forms::Button());
            this->btnBack = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->grandTotalLabel = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // btnCard
            // 
            this->btnCard->BackColor = System::Drawing::Color::LightSalmon;
            this->btnCard->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnCard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCard->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCard->Location = System::Drawing::Point(386, 374);
            this->btnCard->Name = L"btnCard";
            this->btnCard->Size = System::Drawing::Size(100, 43);
            this->btnCard->TabIndex = 0;
            this->btnCard->Text = L"Card";
            this->btnCard->UseVisualStyleBackColor = false;
            this->btnCard->Click += gcnew System::EventHandler(this, &PaymentHandling::btnCard_Click);
            // 
            // btnCash
            // 
            this->btnCash->BackColor = System::Drawing::Color::LightSalmon;
            this->btnCash->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnCash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCash->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCash->Location = System::Drawing::Point(1231, 374);
            this->btnCash->Name = L"btnCash";
            this->btnCash->Size = System::Drawing::Size(100, 43);
            this->btnCash->TabIndex = 1;
            this->btnCash->Text = L"Cash";
            this->btnCash->UseVisualStyleBackColor = false;
            this->btnCash->Click += gcnew System::EventHandler(this, &PaymentHandling::btnCash_Click);
            // 
            // btnBack
            // 
            this->btnBack->BackColor = System::Drawing::Color::LightSalmon;
            this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnBack->Location = System::Drawing::Point(47, 666);
            this->btnBack->Name = L"btnBack";
            this->btnBack->Size = System::Drawing::Size(117, 45);
            this->btnBack->TabIndex = 0;
            this->btnBack->Text = L" Back";
            this->btnBack->UseVisualStyleBackColor = false;
            this->btnBack->Click += gcnew System::EventHandler(this, &PaymentHandling::btnBack_Click);
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::Color::DarkSalmon;
            this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Crimson;
            this->label1->Location = System::Drawing::Point(2, -1);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(1681, 115);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Choose Payment Method";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(319, 134);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(236, 205);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 6;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(1157, 134);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(236, 205);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 7;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &PaymentHandling::pictureBox2_Click_1);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::PeachPuff;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(744, 586);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(172, 45);
            this->textBox1->TabIndex = 9;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &PaymentHandling::textBox1_TextChanged);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Crimson;
            this->label2->Location = System::Drawing::Point(335, 586);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(375, 35);
            this->label2->TabIndex = 10;
            this->label2->Text = L"Enter PromoCode (if any):";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::LightSalmon;
            this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::Black;
            this->button1->Location = System::Drawing::Point(1174, 575);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(181, 59);
            this->button1->TabIndex = 11;
            this->button1->Text = L"Apply";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &PaymentHandling::button1_Click);
            // 
            // grandTotalLabel
            // 
            this->grandTotalLabel->AutoSize = true;
            this->grandTotalLabel->BackColor = System::Drawing::Color::Transparent;
            this->grandTotalLabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->grandTotalLabel->ForeColor = System::Drawing::Color::Crimson;
            this->grandTotalLabel->Location = System::Drawing::Point(640, 439);
            this->grandTotalLabel->Name = L"grandTotalLabel";
            this->grandTotalLabel->Size = System::Drawing::Size(433, 44);
            this->grandTotalLabel->TabIndex = 0;
            this->grandTotalLabel->Text = L"Cart Grand Total: PKR 0";
            this->grandTotalLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->grandTotalLabel->Click += gcnew System::EventHandler(this, &PaymentHandling::grandTotalLabel_Click);
            // 
            // PaymentHandling
            // 
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1624, 766);
            this->Controls->Add(this->grandTotalLabel);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btnBack);
            this->Controls->Add(this->btnCard);
            this->Controls->Add(this->btnCash);
            this->Name = L"PaymentHandling";
            this->Text = L"Payment Handling";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        // Handle Back Button Click event
    private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e)
    {
        this->Hide(); // Hide the current form (PaymentHandling)

        // Create an instance of the ConfirmOrder form
        Project12::ConfirmOrder^ confirmOrderForm = gcnew Project12::ConfirmOrder();
        confirmOrderForm->Show(); // Show the ConfirmOrder form
    }

    private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // You can add any desired actions on pictureBox2 click here
    }
private: System::Void cashDueLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    CalculateAndDisplayTotal();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
       private:
           // Helper function to clean promo code strings
           std::string CleanPromoString(const std::string& input) {
               std::string result;
               for (char c : input) {
                   if (isalnum(c)) {
                       result += c;
                   }
               }
               return result;
           }

           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
               // Read promo codes from file
               std::ifstream promoFile("promocodes.txt");
               if (!promoFile.is_open()) {
                   MessageBox::Show("Error opening promocodes file!", "File Error",
                       MessageBoxButtons::OK, MessageBoxIcon::Error);
                   return;
               }

               // Create a map to store promo codes and their discounts
               std::map<std::string, int> promoMap;
               std::string line;

               while (std::getline(promoFile, line)) {
                   std::string cleanedLine = CleanPromoString(line);

                   if (!cleanedLine.empty()) {
                       // Find the first digit in the string
                       size_t numPos = 0;
                       while (numPos < cleanedLine.length() && !isdigit(cleanedLine[numPos])) {
                           numPos++;
                       }

                       if (numPos < cleanedLine.length()) {
                           try {
                               // Extract the discount percentage
                               int discount = std::stoi(cleanedLine.substr(numPos));
                               // Store the entire cleaned line as the code
                               promoMap[cleanedLine] = discount;
                           }
                           catch (...) {
                               // Skip invalid lines
                               continue;
                           }
                       }
                   }
               }

               // Get the entered promo code
               String^ enteredCode = this->textBox1->Text;
               std::string promoCode = msclr::interop::marshal_as<std::string>(enteredCode);
               std::string cleanedEnteredCode = CleanPromoString(promoCode);

               // Check if promo code exists
               if (promoMap.find(cleanedEnteredCode) != promoMap.end()) {
                   int discountPercent = promoMap[cleanedEnteredCode];
                   int discountedAmount = originalTotalAmount * (100 - discountPercent) / 100;

                   this->grandTotalLabel->Text = "Amount Due: PKR " + discountedAmount.ToString();
                   MessageBox::Show("Promo code applied! " + discountPercent.ToString() + "% discount",
                       "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
               }
               else if (!String::IsNullOrEmpty(enteredCode)) {
                   MessageBox::Show("Invalid promo code", "Error",
                       MessageBoxButtons::OK, MessageBoxIcon::Error);
                   // Reset to original amount
                   this->grandTotalLabel->Text = "Amount Due: PKR " + originalTotalAmount.ToString();
               }
           }
private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void grandTotalLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#pragma warning(default : 2020)