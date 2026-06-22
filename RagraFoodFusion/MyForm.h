#pragma once

#include"CartManager.h" 
#include"Category.h" 
#include"NavigationHelper.h" 
#include "InventoryManager.h"

namespace Project12 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
        static CartManager^ appetizerscart = gcnew CartManager();
    public:
        System::String^ GetLastLoggedInUsername()
        {
            try {
                std::ifstream file("customerlogins.txt");
                std::string line, lastLine;

                while (std::getline(file, line)) {
                    if (!line.empty())
                        lastLine = line;
                }

                file.close();

                size_t pos = lastLine.find('|');
                if (pos != std::string::npos) {
                    std::string username = lastLine.substr(0, pos);
                    return gcnew System::String(username.c_str());
                }
            }
            catch (...) {
                // Return fallback if file error or format issue
            }
            return "Guest";
        }

        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label1;

    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;




    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown4;




    private: System::Windows::Forms::Button^ button1;
           private: void button2_Click(System::Object^ sender, System::EventArgs^ e);
           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
               this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->label8 = (gcnew System::Windows::Forms::Label());
               this->label9 = (gcnew System::Windows::Forms::Label());
               this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
               this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
               this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
               this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
               this->SuspendLayout();
               // 
               // pictureBox1
               // 
               this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
               this->pictureBox1->Location = System::Drawing::Point(1, 0);
               this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(2294, 1146);
               this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox1->TabIndex = 0;
               this->pictureBox1->TabStop = false;
               this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
               // 
               // label1
               // 
               this->label1->BackColor = System::Drawing::Color::DarkSalmon;
               this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
               this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
               this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->ForeColor = System::Drawing::Color::Crimson;
               this->label1->Location = System::Drawing::Point(-70, 0);
               this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(2938, 122);
               this->label1->TabIndex = 1;
               this->label1->Text = L"APPETIZERS / STARTERS";
               this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               // 
               // pictureBox3
               // 
               this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
               this->pictureBox3->Location = System::Drawing::Point(1063, 155);
               this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
               this->pictureBox3->Name = L"pictureBox3";
               this->pictureBox3->Size = System::Drawing::Size(340, 229);
               this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox3->TabIndex = 3;
               this->pictureBox3->TabStop = false;
               this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
               // 
               // pictureBox2
               // 
               this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
               this->pictureBox2->Location = System::Drawing::Point(377, 532);
               this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
               this->pictureBox2->Name = L"pictureBox2";
               this->pictureBox2->Size = System::Drawing::Size(340, 229);
               this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox2->TabIndex = 4;
               this->pictureBox2->TabStop = false;
               this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
               // 
               // pictureBox4
               // 
               this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
               this->pictureBox4->Location = System::Drawing::Point(377, 155);
               this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
               this->pictureBox4->Name = L"pictureBox4";
               this->pictureBox4->Size = System::Drawing::Size(340, 229);
               this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox4->TabIndex = 5;
               this->pictureBox4->TabStop = false;
               this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
               // 
               // pictureBox5
               // 
               this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
               this->pictureBox5->Location = System::Drawing::Point(1063, 532);
               this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
               this->pictureBox5->Name = L"pictureBox5";
               this->pictureBox5->Size = System::Drawing::Size(340, 229);
               this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox5->TabIndex = 6;
               this->pictureBox5->TabStop = false;
               // 
               // label2
               // 
               this->label2->BackColor = System::Drawing::Color::LightSalmon;
               this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold));
               this->label2->Location = System::Drawing::Point(444, 388);
               this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(208, 52);
               this->label2->TabIndex = 7;
               this->label2->Text = L"FISH CRACKERS";
               this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               // 
               // label3
               // 
               this->label3->BackColor = System::Drawing::Color::LightSalmon;
               this->label3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold));
               this->label3->Location = System::Drawing::Point(1152, 388);
               this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(184, 52);
               this->label3->TabIndex = 8;
               this->label3->Text = L"GARLIC BREAD";
               this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               // 
               // label4
               // 
               this->label4->BackColor = System::Drawing::Color::LightSalmon;
               this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10, System::Drawing::FontStyle::Bold));
               this->label4->Location = System::Drawing::Point(420, 764);
               this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(232, 52);
               this->label4->TabIndex = 9;
               this->label4->Text = L"MOZZARELLA STICKS";
               this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               // 
               // label5
               // 
               this->label5->BackColor = System::Drawing::Color::LightSalmon;
               this->label5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold));
               this->label5->Location = System::Drawing::Point(1152, 764);
               this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(184, 52);
               this->label5->TabIndex = 10;
               this->label5->Text = L"FRENCH FRIES";
               this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               // 
               // button2
               // 
               this->button2->BackColor = System::Drawing::Color::DarkSalmon;
               this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button2->ForeColor = System::Drawing::Color::Crimson;
               this->button2->Location = System::Drawing::Point(75, 742);
               this->button2->Margin = System::Windows::Forms::Padding(4);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(213, 64);
               this->button2->TabIndex = 20;
               this->button2->Text = L"< BACK";
               this->button2->UseVisualStyleBackColor = false;
               this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
               // 
               // button1
               // 
               this->button1->BackColor = System::Drawing::Color::DarkSalmon;
               this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button1->ForeColor = System::Drawing::Color::Crimson;
               this->button1->Location = System::Drawing::Point(1551, 742);
               this->button1->Margin = System::Windows::Forms::Padding(4);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(213, 64);
               this->button1->TabIndex = 21;
               this->button1->Text = L"CONTINUE >";
               this->button1->UseVisualStyleBackColor = false;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
               // 
               // label6
               // 
               this->label6->AutoSize = true;
               this->label6->BackColor = System::Drawing::Color::Salmon;
               this->label6->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label6->ForeColor = System::Drawing::Color::Crimson;
               this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
               this->label6->Location = System::Drawing::Point(1190, 816);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(102, 32);
               this->label6->TabIndex = 26;
               this->label6->Text = L"Rs. 350";
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->BackColor = System::Drawing::Color::Salmon;
               this->label7->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label7->ForeColor = System::Drawing::Color::Crimson;
               this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
               this->label7->Location = System::Drawing::Point(496, 816);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(102, 32);
               this->label7->TabIndex = 27;
               this->label7->Text = L"Rs. 550";
               // 
               // label8
               // 
               this->label8->AutoSize = true;
               this->label8->BackColor = System::Drawing::Color::Salmon;
               this->label8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label8->ForeColor = System::Drawing::Color::Crimson;
               this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
               this->label8->Location = System::Drawing::Point(1190, 440);
               this->label8->Name = L"label8";
               this->label8->Size = System::Drawing::Size(102, 32);
               this->label8->TabIndex = 28;
               this->label8->Text = L"Rs. 400";
               // 
               // label9
               // 
               this->label9->AutoSize = true;
               this->label9->BackColor = System::Drawing::Color::Salmon;
               this->label9->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label9->ForeColor = System::Drawing::Color::Crimson;
               this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
               this->label9->Location = System::Drawing::Point(496, 440);
               this->label9->Name = L"label9";
               this->label9->Size = System::Drawing::Size(102, 32);
               this->label9->TabIndex = 29;
               this->label9->Text = L"Rs. 250";
               // 
               // numericUpDown3
               // 
               this->numericUpDown3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->numericUpDown3->BackColor = System::Drawing::Color::Black;
               this->numericUpDown3->ForeColor = System::Drawing::SystemColors::Info;
               this->numericUpDown3->Location = System::Drawing::Point(1345, 782);
               this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
               this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
               this->numericUpDown3->Name = L"numericUpDown3";
               this->numericUpDown3->Size = System::Drawing::Size(42, 22);
               this->numericUpDown3->TabIndex = 12;
               // 
               // numericUpDown2
               // 
               this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->numericUpDown2->BackColor = System::Drawing::Color::Black;
               this->numericUpDown2->ForeColor = System::Drawing::SystemColors::Info;
               this->numericUpDown2->Location = System::Drawing::Point(660, 782);
               this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
               this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
               this->numericUpDown2->Name = L"numericUpDown2";
               this->numericUpDown2->Size = System::Drawing::Size(43, 22);
               this->numericUpDown2->TabIndex = 11;
               // 
               // numericUpDown1
               // 
               this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->numericUpDown1->BackColor = System::Drawing::Color::Black;
               this->numericUpDown1->ForeColor = System::Drawing::SystemColors::Info;
               this->numericUpDown1->Location = System::Drawing::Point(660, 405);
               this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
               this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
               this->numericUpDown1->Name = L"numericUpDown1";
               this->numericUpDown1->Size = System::Drawing::Size(43, 22);
               this->numericUpDown1->TabIndex = 0;
               // 
               // numericUpDown4
               // 
               this->numericUpDown4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                   | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->numericUpDown4->BackColor = System::Drawing::Color::White;
               this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->numericUpDown4->ForeColor = System::Drawing::SystemColors::Desktop;
               this->numericUpDown4->Location = System::Drawing::Point(1344, 400);
               this->numericUpDown4->Margin = System::Windows::Forms::Padding(4);
               this->numericUpDown4->Name = L"numericUpDown4";
               this->numericUpDown4->Size = System::Drawing::Size(57, 32);
               this->numericUpDown4->TabIndex = 19;
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
               this->ClientSize = System::Drawing::Size(1924, 1055);
               this->Controls->Add(this->label9);
               this->Controls->Add(this->label8);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->label6);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->numericUpDown4);
               this->Controls->Add(this->numericUpDown3);
               this->Controls->Add(this->numericUpDown2);
               this->Controls->Add(this->numericUpDown1);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->pictureBox5);
               this->Controls->Add(this->pictureBox4);
               this->Controls->Add(this->pictureBox2);
               this->Controls->Add(this->pictureBox3);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->pictureBox1);
               this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
               this->Name = L"MyForm";
               this->Text = L"Image Example";
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    //private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    //    /* this->Hide();
    //     MyForm^ Appetizers = gcnew MyForm();
    //     Appetizers->Show(); */

    //}
   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
       try {
           // Fish Crackers (assuming ID 105 - update if different)
           if (numericUpDown1->Value > 0) {
               appetizerscart->AddItem("Fish Crackers", (int)numericUpDown1->Value, 250);
               InventoryManager::UpdateInventory(104, (int)numericUpDown1->Value);
           }

           // Mozzarella Sticks (assuming ID 106 - update if different)
           if (numericUpDown2->Value > 0) {
               appetizerscart->AddItem("Mozzarella Sticks", (int)numericUpDown2->Value, 550);
               InventoryManager::UpdateInventory(106, (int)numericUpDown2->Value);
           }

           // French Fries (ID 107 from your inventory.txt)
           if (numericUpDown3->Value > 0) {
               appetizerscart->AddItem("French Fries", (int)numericUpDown3->Value, 350);
               InventoryManager::UpdateInventory(107, (int)numericUpDown3->Value);
           }

           // Garlic Bread (assuming ID 108 - update if different)
           if (numericUpDown4->Value > 0) {
               appetizerscart->AddItem("Garlic Bread", (int)numericUpDown4->Value, 400);
               InventoryManager::UpdateInventory(105, (int)numericUpDown4->Value);
           }

           // Save cart and proceed
           appetizerscart->SaveToFile("cart.txt");
           appetizerscart->SaveToCartFileFormat(GetLastLoggedInUsername());
           NavigationHelper::ShowCartForm(this);
       }
       catch (Exception^ ex) {
           MessageBox::Show("Error processing appetizers order: " + ex->Message,
               "Order Error",
               MessageBoxButtons::OK,
               MessageBoxIcon::Error);
       }
   }
    };
}
