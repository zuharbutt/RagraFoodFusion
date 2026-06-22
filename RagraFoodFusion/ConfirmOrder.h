#pragma once

namespace Project12 {
    using namespace System;
    using namespace System::Windows::Forms;

    public ref class ConfirmOrder : public System::Windows::Forms::Form
    {
    public:
        ConfirmOrder(void)
        {
            InitializeComponent();
        }

    protected:
        ~ConfirmOrder()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ btnConfirmOrder;

    private: System::Windows::Forms::Label^ label1;

    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox3;









        System::ComponentModel::Container^ components;

    private:
        void btnConfirmOrder_Click(System::Object^ sender, System::EventArgs^ e);
 

    private:
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConfirmOrder::typeid));
            this->btnConfirmOrder = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // btnConfirmOrder
            // 
            this->btnConfirmOrder->BackColor = System::Drawing::Color::DarkSalmon;
            this->btnConfirmOrder->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnConfirmOrder->ForeColor = System::Drawing::Color::Crimson;
            this->btnConfirmOrder->Location = System::Drawing::Point(592, 485);
            this->btnConfirmOrder->Name = L"btnConfirmOrder";
            this->btnConfirmOrder->Size = System::Drawing::Size(354, 78);
            this->btnConfirmOrder->TabIndex = 0;
            this->btnConfirmOrder->Text = L"Confirm Order";
            this->btnConfirmOrder->UseVisualStyleBackColor = false;
            this->btnConfirmOrder->Click += gcnew System::EventHandler(this, &ConfirmOrder::btnConfirmOrder_Click);
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::Color::DarkSalmon;
            this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Crimson;
            this->label1->Location = System::Drawing::Point(2, -5);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(1748, 115);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Nice Choice !             is impressed";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label1->Click += gcnew System::EventHandler(this, &ConfirmOrder::label1_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(678, 264);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(198, 149);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 11;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::DarkSalmon;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(829, 12);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(107, 83);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 12;
            this->pictureBox3->TabStop = false;
            // 
            // ConfirmOrder
            // 
            this->AutoSize = true;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1769, 763);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btnConfirmOrder);
            this->Name = L"ConfirmOrder";
            this->Text = L"Confirm Order";
            this->Load += gcnew System::EventHandler(this, &ConfirmOrder::ConfirmOrder_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);

        }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void ConfirmOrder_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
