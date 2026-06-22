#pragma once

namespace Project12{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Summary for CustomerReviews
    /// </summary>
    public ref class CustomerReviews : public System::Windows::Forms::Form
    {
    private:
        // Nested Review class defined first
        ref class Review {
        public:
            String^ CustomerName;
            int Rating;
            String^ Comment;
            Review(String^ name, int rating, String^ comment) {
                CustomerName = name;
                Rating = rating;
                Comment = comment;
            }
        };

        // Static List for reviews, defined after Review
        static List<Review^>^ reviews = gcnew List<Review^>();
    private: System::Windows::Forms::PictureBox^ pictureBox1;
           static String^ reviewFilePath = "reviews.txt";

    public:
        CustomerReviews(void)
        {
            InitializeComponent();
            LoadReviewsFromFile();
           
        }

    protected:
        ~CustomerReviews()
        {
            if (components)
            {
                delete components;
            }
        }

    private:

        System::Windows::Forms::TextBox^ txtCustomerName;
        System::Windows::Forms::NumericUpDown^ numRating;
        System::Windows::Forms::TextBox^ txtComment;
        System::Windows::Forms::Button^ btnSubmit;
        System::Windows::Forms::Button^ btnBack;
        System::Windows::Forms::Label^ lblCustomerName;
        System::Windows::Forms::Label^ lblRating;
        System::Windows::Forms::Label^ lblComment;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerReviews::typeid));
            this->txtCustomerName = (gcnew System::Windows::Forms::TextBox());
            this->numRating = (gcnew System::Windows::Forms::NumericUpDown());
            this->txtComment = (gcnew System::Windows::Forms::TextBox());
            this->btnSubmit = (gcnew System::Windows::Forms::Button());
            this->btnBack = (gcnew System::Windows::Forms::Button());
            this->lblCustomerName = (gcnew System::Windows::Forms::Label());
            this->lblRating = (gcnew System::Windows::Forms::Label());
            this->lblComment = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRating))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // txtCustomerName
            // 
            this->txtCustomerName->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCustomerName->Location = System::Drawing::Point(454, 63);
            this->txtCustomerName->Margin = System::Windows::Forms::Padding(4);
            this->txtCustomerName->Name = L"txtCustomerName";
            this->txtCustomerName->Size = System::Drawing::Size(265, 32);
            this->txtCustomerName->TabIndex = 1;
            // 
            // numRating
            // 
            this->numRating->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->numRating->Location = System::Drawing::Point(454, 131);
            this->numRating->Margin = System::Windows::Forms::Padding(4);
            this->numRating->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
            this->numRating->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numRating->Name = L"numRating";
            this->numRating->Size = System::Drawing::Size(67, 32);
            this->numRating->TabIndex = 2;
            this->numRating->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            // 
            // txtComment
            // 
            this->txtComment->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtComment->Location = System::Drawing::Point(454, 222);
            this->txtComment->Margin = System::Windows::Forms::Padding(4);
            this->txtComment->Multiline = true;
            this->txtComment->Name = L"txtComment";
            this->txtComment->Size = System::Drawing::Size(332, 101);
            this->txtComment->TabIndex = 3;
            this->txtComment->TextChanged += gcnew System::EventHandler(this, &CustomerReviews::txtComment_TextChanged);
            // 
            // btnSubmit
            // 
            this->btnSubmit->BackColor = System::Drawing::Color::Salmon;
            this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSubmit->Location = System::Drawing::Point(848, 517);
            this->btnSubmit->Margin = System::Windows::Forms::Padding(4);
            this->btnSubmit->Name = L"btnSubmit";
            this->btnSubmit->Size = System::Drawing::Size(236, 60);
            this->btnSubmit->TabIndex = 4;
            this->btnSubmit->Text = L"Submit Review";
            this->btnSubmit->UseVisualStyleBackColor = false;
            this->btnSubmit->Click += gcnew System::EventHandler(this, &CustomerReviews::btnSubmit_Click);
            // 
            // btnBack
            // 
            this->btnBack->BackColor = System::Drawing::Color::Salmon;
            this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnBack->Location = System::Drawing::Point(110, 517);
            this->btnBack->Margin = System::Windows::Forms::Padding(4);
            this->btnBack->Name = L"btnBack";
            this->btnBack->Size = System::Drawing::Size(203, 60);
            this->btnBack->TabIndex = 5;
            this->btnBack->Text = L"Back";
            this->btnBack->UseVisualStyleBackColor = false;
            this->btnBack->Click += gcnew System::EventHandler(this, &CustomerReviews::btnBack_Click);
            // 
            // lblCustomerName
            // 
            this->lblCustomerName->BackColor = System::Drawing::Color::Salmon;
            this->lblCustomerName->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblCustomerName->ForeColor = System::Drawing::Color::Crimson;
            this->lblCustomerName->Location = System::Drawing::Point(104, 60);
            this->lblCustomerName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblCustomerName->Name = L"lblCustomerName";
            this->lblCustomerName->Size = System::Drawing::Size(237, 35);
            this->lblCustomerName->TabIndex = 6;
            this->lblCustomerName->Text = L"Customer Name:";
            this->lblCustomerName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->lblCustomerName->Click += gcnew System::EventHandler(this, &CustomerReviews::lblCustomerName_Click);
            // 
            // lblRating
            // 
            this->lblRating->BackColor = System::Drawing::Color::Salmon;
            this->lblRating->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblRating->ForeColor = System::Drawing::Color::Crimson;
            this->lblRating->Location = System::Drawing::Point(104, 127);
            this->lblRating->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblRating->Name = L"lblRating";
            this->lblRating->Size = System::Drawing::Size(220, 46);
            this->lblRating->TabIndex = 7;
            this->lblRating->Text = L"Rating (1-5):";
            this->lblRating->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->lblRating->Click += gcnew System::EventHandler(this, &CustomerReviews::lblRating_Click);
            // 
            // lblComment
            // 
            this->lblComment->BackColor = System::Drawing::Color::Salmon;
            this->lblComment->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblComment->ForeColor = System::Drawing::Color::Crimson;
            this->lblComment->Location = System::Drawing::Point(104, 222);
            this->lblComment->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblComment->Name = L"lblComment";
            this->lblComment->Size = System::Drawing::Size(180, 43);
            this->lblComment->TabIndex = 8;
            this->lblComment->Text = L"Comment:";
            this->lblComment->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(1207, 680);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 9;
            this->pictureBox1->TabStop = false;
            // 
            // CustomerReviews
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->ClientSize = System::Drawing::Size(1204, 677);
            this->Controls->Add(this->txtCustomerName);
            this->Controls->Add(this->numRating);
            this->Controls->Add(this->txtComment);
            this->Controls->Add(this->btnSubmit);
            this->Controls->Add(this->btnBack);
            this->Controls->Add(this->lblCustomerName);
            this->Controls->Add(this->lblRating);
            this->Controls->Add(this->lblComment);
            this->Controls->Add(this->pictureBox1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"CustomerReviews";
            this->Text = L"Customer Reviews";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRating))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
 /*       void LoadReviewsFromFile() {
            reviews->Clear();
            try {
                if (File::Exists(reviewFilePath)) {
                    array<String^>^ lines = File::ReadAllLines(reviewFilePath);
                    for each (String ^ line in lines) {
                        array<String^>^ parts = line->Split('|');
                        if (parts->Length == 3) {
                            int rating;
                            if (Int32::TryParse(parts[1], rating)) {
                                Review^ review = gcnew Review(parts[0], rating, parts[2]);
                                reviews->Add(review);
                            }
                        }
                    }
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error loading reviews: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }*/

        void LoadReviewsFromFile() {
            reviews->Clear();
            try {
                if (File::Exists(reviewFilePath)) {
                    array<String^>^ lines = File::ReadAllLines(reviewFilePath);
                    for each (String ^ line in lines) {
                        array<String^>^ parts = line->Split('|');
                        if (parts->Length == 3) {
                            int rating;
                            if (Int32::TryParse(parts[1], rating)) {
                                if (rating >= 4) { // Show only rating 4 or 5
                                    Review^ review = gcnew Review(parts[0], rating, parts[2]);
                                    reviews->Add(review);
                                }
                            }
                        }
                    }
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error loading reviews: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void SaveReviewToFile(Review^ review) {
            try {
                String^ line = review->CustomerName + "|" + review->Rating.ToString() + "|" + review->Comment;
                File::AppendAllText(reviewFilePath, line + Environment::NewLine);
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error saving review: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

     

        System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrEmpty(txtCustomerName->Text) || String::IsNullOrEmpty(txtComment->Text)) {
                MessageBox::Show("Please fill in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            Review^ newReview = gcnew Review(txtCustomerName->Text, (int)numRating->Value, txtComment->Text);
            reviews->Add(newReview);
            SaveReviewToFile(newReview);
           
            txtCustomerName->Clear();
            txtComment->Clear();
            numRating->Value = 1;
            MessageBox::Show("Review submitted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }

        System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }
    private: System::Void lstReviews_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void lblRating_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void txtComment_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblCustomerName_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}