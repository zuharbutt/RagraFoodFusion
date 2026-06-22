#pragma once
#include <fstream>
#include "ConfirmOrder.h" // next screen

namespace Project12 {
    ref class Category;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class Cart : public System::Windows::Forms::Form {
    public:
        Cart(void) {
            InitializeComponent();
            this->Load += gcnew System::EventHandler(this, &Cart::Cart_Load);
        }

    private:
        DataGridView^ dgvCart;
        Button^ btnClose;
        Button^ btnRefresh;
        Button^ btnBack;
        Label^ lblTotal;
        Label^ lblHeader;

        String^ FormatRupee(double amount) {
            return String::Format("Rs{0:N2}", amount);
        }

        void InitializeComponent() {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConfirmOrder::typeid));
            
            this->dgvCart = (gcnew System::Windows::Forms::DataGridView());
            this->lblTotal = (gcnew System::Windows::Forms::Label());
            this->lblHeader = (gcnew System::Windows::Forms::Label());
            this->btnRefresh = (gcnew System::Windows::Forms::Button());
            this->btnClose = (gcnew System::Windows::Forms::Button());
            this->btnBack = (gcnew System::Windows::Forms::Button());
            
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCart))->BeginInit();
            this->SuspendLayout();

            // 
            // Background Image & Form setup
            // 
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Text = L"Order Summary";
            this->ClientSize = System::Drawing::Size(1000, 700);
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;

            // 
            // lblHeader
            // 
            this->lblHeader->BackColor = System::Drawing::Color::DarkSalmon;
            this->lblHeader->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->lblHeader->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Bold));
            this->lblHeader->ForeColor = System::Drawing::Color::Crimson;
            this->lblHeader->Location = System::Drawing::Point(50, 30);
            this->lblHeader->Name = L"lblHeader";
            this->lblHeader->Size = System::Drawing::Size(900, 60);
            this->lblHeader->TabIndex = 0;
            this->lblHeader->Text = L"ORDER SUMMARY";
            this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            // 
            // dgvCart
            // 
            this->dgvCart->Name = L"dgvCart";
            this->dgvCart->Location = System::Drawing::Point(50, 110);
            this->dgvCart->Size = System::Drawing::Size(900, 420);
            this->dgvCart->ReadOnly = true;
            this->dgvCart->RowHeadersVisible = false;
            this->dgvCart->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dgvCart->BackgroundColor = System::Drawing::Color::Salmon;
            this->dgvCart->GridColor = System::Drawing::Color::Crimson;
            this->dgvCart->AllowUserToAddRows = false;
            this->dgvCart->AllowUserToDeleteRows = false;
            this->dgvCart->AllowUserToResizeRows = false;
            
            // Set styles
            this->dgvCart->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::Color::DarkSalmon;
            this->dgvCart->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::Crimson;
            this->dgvCart->ColumnHeadersDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold));
            this->dgvCart->DefaultCellStyle->BackColor = System::Drawing::Color::Salmon;
            this->dgvCart->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
            this->dgvCart->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 11));
            this->dgvCart->EnableHeadersVisualStyles = false;

            // Add columns
            this->dgvCart->Columns->Add(L"Item", L"Item");
            this->dgvCart->Columns->Add(L"Quantity", L"Qty");
            this->dgvCart->Columns->Add(L"Price", L"Unit Price");

            // 
            // lblTotal
            // 
            this->lblTotal->BackColor = System::Drawing::Color::DarkSalmon;
            this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->lblTotal->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold));
            this->lblTotal->ForeColor = System::Drawing::Color::Crimson;
            this->lblTotal->Location = System::Drawing::Point(50, 550);
            this->lblTotal->Name = L"lblTotal";
            this->lblTotal->Size = System::Drawing::Size(900, 45);
            this->lblTotal->TabIndex = 1;
            this->lblTotal->TextAlign = System::Drawing::ContentAlignment::MiddleRight;

            // 
            // btnRefresh
            // 
            this->btnRefresh->BackColor = System::Drawing::Color::DarkSalmon;
            this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold));
            this->btnRefresh->ForeColor = System::Drawing::Color::Crimson;
            this->btnRefresh->Location = System::Drawing::Point(50, 610);
            this->btnRefresh->Name = L"btnRefresh";
            this->btnRefresh->Size = System::Drawing::Size(220, 55);
            this->btnRefresh->TabIndex = 2;
            this->btnRefresh->Text = L"REFRESH";
            this->btnRefresh->UseVisualStyleBackColor = false;
            this->btnRefresh->Click += gcnew System::EventHandler(this, &Cart::btnRefresh_Click);

            // 
            // btnClose
            // 
            this->btnClose->BackColor = System::Drawing::Color::DarkSalmon;
            this->btnClose->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold));
            this->btnClose->ForeColor = System::Drawing::Color::Crimson;
            this->btnClose->Location = System::Drawing::Point(730, 610);
            this->btnClose->Name = L"btnClose";
            this->btnClose->Size = System::Drawing::Size(220, 55);
            this->btnClose->TabIndex = 3;
            this->btnClose->Text = L"CONTINUE >";
            this->btnClose->UseVisualStyleBackColor = false;
            this->btnClose->Click += gcnew System::EventHandler(this, &Cart::btnClose_Click);

            // 
            // btnBack
            // 
            this->btnBack->BackColor = System::Drawing::Color::DarkSalmon;
            this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold));
            this->btnBack->ForeColor = System::Drawing::Color::Crimson;
            this->btnBack->Location = System::Drawing::Point(390, 610);
            this->btnBack->Name = L"btnBack";
            this->btnBack->Size = System::Drawing::Size(220, 55);
            this->btnBack->TabIndex = 4;
            this->btnBack->Text = L"< MENU";
            this->btnBack->UseVisualStyleBackColor = false;
            this->btnBack->Click += gcnew System::EventHandler(this, &Cart::btnBack_Click);

            // Add Controls to Form
            this->Controls->Add(this->lblHeader);
            this->Controls->Add(this->dgvCart);
            this->Controls->Add(this->lblTotal);
            this->Controls->Add(this->btnRefresh);
            this->Controls->Add(this->btnBack);
            this->Controls->Add(this->btnClose);

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCart))->EndInit();
            this->ResumeLayout(false);
        }

        void Cart_Load(Object^ sender, EventArgs^ e) {
            LoadFromCartFile();
        }

        void btnRefresh_Click(Object^ sender, EventArgs^ e) {
            LoadFromCartFile();
        }

        void btnClose_Click(Object^ sender, EventArgs^ e) {
            ConfirmOrder^ confirmForm = gcnew ConfirmOrder();
            confirmForm->Show();
            this->Hide();
        }

        void btnBack_Click(Object^ sender, EventArgs^ e);

        void LoadFromCartFile() {
            dgvCart->Rows->Clear();
            double grandTotal = 0.0;

            if (File::Exists("cart.txt")) {
                array<String^>^ lines = File::ReadAllLines("cart.txt");

                for each (String ^ line in lines) {
                    if (line->StartsWith("===") || line->Contains("---") || line->Trim()->Length == 0)
                        continue;

                    if (line->StartsWith("Total:") || line->StartsWith("GRAND TOTAL:"))
                        continue;

                    // Parse lines like: "Item x Qty - RsPrice"
                    array<String^>^ parts = line->Split('-');
                    if (parts->Length >= 2) {
                        array<String^>^ itemParts = parts[0]->Trim()->Split('x');
                        if (itemParts->Length == 2) {
                            String^ itemName = itemParts[0]->Trim();
                            int quantity = Int32::Parse(itemParts[1]->Trim());
                            String^ totalStr = parts[1]->Trim()->TrimStart('R', 's')->Replace(",", "");
                            double total = Double::Parse(totalStr);
                            double unitPrice = total / quantity;

                            grandTotal += total;

                            // Only add Item, Qty, Unit Price
                            dgvCart->Rows->Add(itemName, quantity.ToString(), FormatRupee(unitPrice));
                        }
                    }
                }
            }

            lblTotal->Text = String::Format("Grand Total: {0}", FormatRupee(grandTotal));

            // Write total to file
            StreamWriter^ writer = gcnew StreamWriter("grandtotal.txt");
            writer->WriteLine(grandTotal.ToString());
            writer->Close();

            FormatDataGridView();
        }

        void FormatDataGridView() {
            for (int i = 0; i < dgvCart->Rows->Count; i++) {
                dgvCart->Rows[i]->DefaultCellStyle->BackColor =
                    (i % 2 == 0) ? Color::LightSalmon : Color::Salmon;
                dgvCart->Rows[i]->DefaultCellStyle->ForeColor = Color::Black;
            }
        }
    };
}
