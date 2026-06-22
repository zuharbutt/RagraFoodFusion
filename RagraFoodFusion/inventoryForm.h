#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>


namespace Project12 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class inventoryForm : public System::Windows::Forms::Form
    {
    public:
        inventoryForm(void)
        {
            InitializeComponent();
            LoadInventoryFromFile(); // Read actual data from inventory.txt
        }

    protected:
        ~inventoryForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
    private: System::Windows::Forms::Button^ btnSave;
    private: System::Windows::Forms::Label^ lblHeader;
    private: System::ComponentModel::Container^ components;
   

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inventoryForm::typeid));
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
               this->btnSave = (gcnew System::Windows::Forms::Button());
               this->lblHeader = (gcnew System::Windows::Forms::Label());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               this->SuspendLayout();
               // 
               // lblHeader
               // 
               this->lblHeader->BackColor = System::Drawing::Color::DarkSalmon;
               this->lblHeader->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->lblHeader->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Bold));
               this->lblHeader->ForeColor = System::Drawing::Color::Crimson;
               this->lblHeader->Location = System::Drawing::Point(40, 20);
               this->lblHeader->Name = L"lblHeader";
               this->lblHeader->Size = System::Drawing::Size(1172, 60);
               this->lblHeader->TabIndex = 2;
               this->lblHeader->Text = L"INVENTORY MANAGER";
               this->lblHeader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               // 
               // dataGridView1
               // 
               this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
               this->dataGridView1->BackgroundColor = System::Drawing::Color::Salmon;
               this->dataGridView1->GridColor = System::Drawing::Color::Crimson;
               this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                   this->dataGridViewTextBoxColumn1,
                       this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
               });
               this->dataGridView1->Location = System::Drawing::Point(40, 100);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->RowHeadersWidth = 51;
               this->dataGridView1->RowTemplate->Height = 24;
               this->dataGridView1->Size = System::Drawing::Size(1172, 535);
               this->dataGridView1->TabIndex = 0;
               this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventoryForm::dataGridView1_CellContentClick);
               
               // Set custom headers styles
               this->dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::Color::DarkSalmon;
               this->dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::Crimson;
               this->dataGridView1->ColumnHeadersDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold));
               this->dataGridView1->DefaultCellStyle->BackColor = System::Drawing::Color::Salmon;
               this->dataGridView1->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
               this->dataGridView1->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 11));
               this->dataGridView1->EnableHeadersVisualStyles = false;
               // 
               // dataGridViewTextBoxColumn1
               // 
               this->dataGridViewTextBoxColumn1->HeaderText = L"Item ID";
               this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
               this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
               // 
               // dataGridViewTextBoxColumn2
               // 
               this->dataGridViewTextBoxColumn2->HeaderText = L"Item Name";
               this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
               this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
               // 
               // dataGridViewTextBoxColumn3
               // 
               this->dataGridViewTextBoxColumn3->HeaderText = L"Price (PKR)";
               this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
               this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
               // 
               // dataGridViewTextBoxColumn4
               // 
               this->dataGridViewTextBoxColumn4->HeaderText = L"Quantity";
               this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
               this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
               // 
               // btnSave
               // 
               this->btnSave->BackColor = System::Drawing::Color::DarkSalmon;
               this->btnSave->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold));
               this->btnSave->ForeColor = System::Drawing::Color::Crimson;
               this->btnSave->Location = System::Drawing::Point(1230, 580);
               this->btnSave->Name = L"btnSave";
               this->btnSave->Size = System::Drawing::Size(230, 55);
               this->btnSave->TabIndex = 1;
               this->btnSave->Text = L"SAVE CHANGES";
               this->btnSave->UseVisualStyleBackColor = false;
               this->btnSave->Click += gcnew System::EventHandler(this, &inventoryForm::btnSave_Click);
               // 
               // inventoryForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
               this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
               this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->ClientSize = System::Drawing::Size(1493, 700);
               this->Controls->Add(this->lblHeader);
               this->Controls->Add(this->btnSave);
               this->Controls->Add(this->dataGridView1);
               this->Name = L"inventoryForm";
               this->Text = L"Inventory Form";
               this->Load += gcnew System::EventHandler(this, &inventoryForm::inventoryForm_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               this->ResumeLayout(false);
           }
#pragma endregion

    private:
        void SaveInventoryToFile()
        {
            std::ofstream file("inventory.txt");

            for (int i = 0; i < dataGridView1->Rows->Count; i++)
            {
                if (dataGridView1->Rows[i]->IsNewRow)
                    continue;

                String^ id = dataGridView1->Rows[i]->Cells[0]->Value != nullptr ? dataGridView1->Rows[i]->Cells[0]->Value->ToString() : "";
                String^ name = dataGridView1->Rows[i]->Cells[1]->Value != nullptr ? dataGridView1->Rows[i]->Cells[1]->Value->ToString() : "";
                String^ price = dataGridView1->Rows[i]->Cells[2]->Value != nullptr ? dataGridView1->Rows[i]->Cells[2]->Value->ToString() : "";
                String^ quantity = dataGridView1->Rows[i]->Cells[3]->Value != nullptr ? dataGridView1->Rows[i]->Cells[3]->Value->ToString() : "";

                std::string line = msclr::interop::marshal_as<std::string>(
                    id + "/" + name + "/" + price + "/" + quantity
                );

                file << line << std::endl;
            }

            file.close();
        }


        void LoadInventoryFromFile()
        {
            std::ifstream file("inventory.txt");
            std::string line;

            while (std::getline(file, line))
            {
                std::string itemID, itemName, price, quantity;

                size_t pos1 = line.find('/');
                size_t pos2 = line.find('/', pos1 + 1);
                size_t pos3 = line.find('/', pos2 + 1);

                if (pos1 == std::string::npos || pos2 == std::string::npos || pos3 == std::string::npos)
                    continue;

                itemID = line.substr(0, pos1);
                itemName = line.substr(pos1 + 1, pos2 - pos1 - 1);
                price = line.substr(pos2 + 1, pos3 - pos2 - 1);
                quantity = line.substr(pos3 + 1);

                array<String^>^ row = gcnew array<String^>(4);
                row[0] = gcnew String(itemID.c_str());
                row[1] = gcnew String(itemName.c_str());
                row[2] = gcnew String(price.c_str());
                row[3] = gcnew String(quantity.c_str());

                dataGridView1->Rows->Add(row);
            }

            file.close();
            FormatDataGridView();
        }

        void FormatDataGridView() {
            for (int i = 0; i < dataGridView1->Rows->Count; i++) {
                dataGridView1->Rows[i]->DefaultCellStyle->BackColor =
                    (i % 2 == 0) ? Color::LightSalmon : Color::Salmon;
                dataGridView1->Rows[i]->DefaultCellStyle->ForeColor = Color::Black;
            }
        }


    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
          

    private: System::Void inventoryForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    SaveInventoryToFile();
    MessageBox::Show("Inventory saved to file successfully!");
}

};
}
