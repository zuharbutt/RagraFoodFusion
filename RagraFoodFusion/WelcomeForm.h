#pragma once
#include "Modes.h"
#include "AboutUsForm.h"


namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class WelcomeForm : public System::Windows::Forms::Form
	{
	public:
		WelcomeForm(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		~WelcomeForm()
		{
			/*if (components)
			{
				delete components;
			}*/
		}

	private:



		System::Windows::Forms::Button^ btnContinue;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnViewLocation;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;


		   System::ComponentModel::Container^ components;

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomeForm::typeid));
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnViewLocation = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btnContinue
			// 
			this->btnContinue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnContinue->BackColor = System::Drawing::Color::LightSalmon;
			this->btnContinue->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnContinue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnContinue->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinue->ForeColor = System::Drawing::Color::Crimson;
			this->btnContinue->Location = System::Drawing::Point(1398, 726);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(219, 61);
			this->btnContinue->TabIndex = 3;
			this->btnContinue->Text = L"Continue";
			this->btnContinue->UseVisualStyleBackColor = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &WelcomeForm::buttonContinue_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(-126, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2471, 121);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Hey ! Welcome.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &WelcomeForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(878, 680);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(410, 51);
			this->label2->TabIndex = 4;
			this->label2->Text = L"By Culinary Coders";
			this->label2->Click += gcnew System::EventHandler(this, &WelcomeForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(819, 259);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(514, 395);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &WelcomeForm::pictureBox1_Click);
			// 
			// btnViewLocation
			// 
			this->btnViewLocation->BackColor = System::Drawing::Color::LightSalmon;
			this->btnViewLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnViewLocation->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewLocation->ForeColor = System::Drawing::Color::Crimson;
			this->btnViewLocation->Location = System::Drawing::Point(270, 859);
			this->btnViewLocation->Name = L"btnViewLocation";
			this->btnViewLocation->Size = System::Drawing::Size(200, 61);
			this->btnViewLocation->TabIndex = 0;
			this->btnViewLocation->Text = L"FAST, NUCES";
			this->btnViewLocation->UseVisualStyleBackColor = false;
			this->btnViewLocation->Click += gcnew System::EventHandler(this, &WelcomeForm::btnViewLocation_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(135, 859);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 61);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(135, 726);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(60, 65);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Crimson;
			this->button1->Location = System::Drawing::Point(270, 726);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 65);
			this->button1->TabIndex = 9;
			this->button1->Text = L"About us";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WelcomeForm::button1_Click_1);
			// 
			// WelcomeForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Salmon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1920, 1030);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnViewLocation);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"WelcomeForm";
			this->Text = L"Ragra Food Fusion";
			this->Load += gcnew System::EventHandler(this, &WelcomeForm::WelcomeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Going Back...");
	}

        private: System::Void buttonContinue_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Project12::Modes^ modesForm = gcnew Project12::Modes();
	modesForm->ShowDialog();
         }

private: System::Void btnViewLocation_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ mapsUrl = "https://www.google.com/maps/place/FAST+NUCES+Lahore+Campus/@31.4819332,74.3033598,17z";
	System::Diagnostics::ProcessStartInfo^ psi = gcnew System::Diagnostics::ProcessStartInfo();
	psi->FileName = mapsUrl;
	psi->UseShellExecute = true; // Important for opening browser
	System::Diagnostics::Process::Start(psi);
}
	private: System::Void labelWelcome_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelBrand_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void WelcomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Project12::AboutUsForm^ mForm = gcnew Project12::AboutUsForm();
	mForm->ShowDialog();
}
};
}
#pragma endregion
