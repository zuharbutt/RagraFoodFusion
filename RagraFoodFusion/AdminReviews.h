#pragma once
//#include "Modes.h"
//ref class Modes;
namespace Project12 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class AdminReviewForm : public System::Windows::Forms::Form
    {
    public:
        AdminReviewForm(void)
        {
            InitializeComponent();
            LoadReviewsFromFile();
        }

    protected:
        ~AdminReviewForm()
        {
            if (components)
                delete components;
        }

    private:
        System::Windows::Forms::ListBox^ listBoxReviews;
        System::Windows::Forms::Button^ btnBack;
        System::ComponentModel::Container^ components;

        String^ reviewsFilePath = "reviews.txt";

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->listBoxReviews = (gcnew System::Windows::Forms::ListBox());
            this->btnBack = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // listBoxReviews
            // 
            this->listBoxReviews->BackColor = System::Drawing::Color::LightCoral;
            this->listBoxReviews->FormattingEnabled = true;
            this->listBoxReviews->ItemHeight = 16;
            this->listBoxReviews->Location = System::Drawing::Point(166, 66);
            this->listBoxReviews->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->listBoxReviews->Name = L"listBoxReviews";
            this->listBoxReviews->Size = System::Drawing::Size(834, 340);
            this->listBoxReviews->TabIndex = 0;
            this->listBoxReviews->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminReviewForm::listBoxReviews_SelectedIndexChanged);
            // 
            // btnBack
            // 
            this->btnBack->BackColor = System::Drawing::Color::Salmon;
            this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnBack->ForeColor = System::Drawing::Color::Crimson;
            this->btnBack->Location = System::Drawing::Point(57, 589);
            this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->btnBack->Name = L"btnBack";
            this->btnBack->Size = System::Drawing::Size(109, 45);
            this->btnBack->TabIndex = 1;
            this->btnBack->Text = L"Back";
            this->btnBack->UseVisualStyleBackColor = false;
            this->btnBack->Click += gcnew System::EventHandler(this, &AdminReviewForm::btnBack_Click);
            // 
            // AdminReviewForm
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(1136, 661);
            this->Controls->Add(this->btnBack);
            this->Controls->Add(this->listBoxReviews);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"AdminReviewForm";
            this->Text = L"Customer Reviews";
            this->ResumeLayout(false);

        }
#pragma endregion

        void LoadReviewsFromFile() {
            listBoxReviews->Items->Clear();
            try {
                if (File::Exists(reviewsFilePath)) {
                    StreamReader^ reader = gcnew StreamReader(reviewsFilePath);
                    try {
                        while (!reader->EndOfStream) {
                            String^ line = reader->ReadLine();
                            array<String^>^ parts = line->Split('|');
                            if (parts->Length == 3) {
                                String^ name = parts[0]->Trim();
                                String^ rating = parts[1]->Trim();
                                String^ review = parts[2]->Trim();
                                listBoxReviews->Items->Add(name + " (" + rating + "/5): " + review);
                            }
                            else {
                                listBoxReviews->Items->Add("Invalid line: " + line); // Optional for debugging
                            }
                        }
                    }
                    finally {
                        reader->Close();
                    }
                }
                else {
                    MessageBox::Show("No reviews found.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error reading reviews: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
            		//	this->Hide();
		////Modes^ modesForm = gcnew Modes();
		//modesForm->Show();
            this->Close();
        }
  /*      System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Hide();
            Project12::Modes^ modesForm = gcnew Project12::Modes();
            modesForm->Show();
        }*/

    private: System::Void listBoxReviews_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}