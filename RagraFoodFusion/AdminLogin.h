#pragma once
#include <fstream>
#include "AdminDashboard.h"

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
		{
			InitializeComponent();
		}

	protected:
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Label^ lblConfirmPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;
	private: System::Windows::Forms::CheckBox^ chkShowPassword;
	private: System::Windows::Forms::CheckBox^ chkAreYouHuman;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnBack;

	private: System::ComponentModel::Container^ components;
	private: void btnBack_Click(System::Object^ sender, System::EventArgs^ e);
#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogin::typeid));
			   this->lblUsername = (gcnew System::Windows::Forms::Label());
			   this->lblPassword = (gcnew System::Windows::Forms::Label());
			   this->lblConfirmPassword = (gcnew System::Windows::Forms::Label());
			   this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			   this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			   this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			   this->chkShowPassword = (gcnew System::Windows::Forms::CheckBox());
			   this->chkAreYouHuman = (gcnew System::Windows::Forms::CheckBox());
			   this->lblLogin = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->btnBack = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // lblUsername
			   // 
			   this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			   this->lblUsername->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUsername->ForeColor = System::Drawing::Color::Crimson;
			   this->lblUsername->Location = System::Drawing::Point(467, 189);
			   this->lblUsername->Name = L"lblUsername";
			   this->lblUsername->Size = System::Drawing::Size(268, 53);
			   this->lblUsername->TabIndex = 0;
			   this->lblUsername->Text = L"Username:";
			   // 
			   // lblPassword
			   // 
			   this->lblPassword->BackColor = System::Drawing::Color::Transparent;
			   this->lblPassword->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPassword->ForeColor = System::Drawing::Color::Crimson;
			   this->lblPassword->Location = System::Drawing::Point(467, 278);
			   this->lblPassword->Name = L"lblPassword";
			   this->lblPassword->Size = System::Drawing::Size(230, 60);
			   this->lblPassword->TabIndex = 2;
			   this->lblPassword->Text = L"Password:";
			   // 
			   // lblConfirmPassword
			   // 
			   this->lblConfirmPassword->BackColor = System::Drawing::Color::Transparent;
			   this->lblConfirmPassword->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblConfirmPassword->ForeColor = System::Drawing::Color::Crimson;
			   this->lblConfirmPassword->Location = System::Drawing::Point(290, 375);
			   this->lblConfirmPassword->Name = L"lblConfirmPassword";
			   this->lblConfirmPassword->Size = System::Drawing::Size(436, 62);
			   this->lblConfirmPassword->TabIndex = 4;
			   this->lblConfirmPassword->Text = L"Confirm Password:";
			   // 
			   // txtUsername
			   // 
			   this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtUsername->Location = System::Drawing::Point(852, 208);
			   this->txtUsername->Name = L"txtUsername";
			   this->txtUsername->Size = System::Drawing::Size(314, 34);
			   this->txtUsername->TabIndex = 1;
			   // 
			   // txtPassword
			   // 
			   this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtPassword->Location = System::Drawing::Point(852, 304);
			   this->txtPassword->Name = L"txtPassword";
			   this->txtPassword->Size = System::Drawing::Size(314, 34);
			   this->txtPassword->TabIndex = 3;
			   this->txtPassword->UseSystemPasswordChar = true;
			   this->txtPassword->TextChanged += gcnew System::EventHandler(this, &AdminLogin::txtPassword_TextChanged);
			   // 
			   // txtConfirmPassword
			   // 
			   this->txtConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->txtConfirmPassword->Location = System::Drawing::Point(852, 403);
			   this->txtConfirmPassword->Name = L"txtConfirmPassword";
			   this->txtConfirmPassword->Size = System::Drawing::Size(314, 34);
			   this->txtConfirmPassword->TabIndex = 5;
			   this->txtConfirmPassword->UseSystemPasswordChar = true;
			   this->txtConfirmPassword->TextChanged += gcnew System::EventHandler(this, &AdminLogin::txtConfirmPassword_TextChanged);
			   // 
			   // chkShowPassword
			   // 
			   this->chkShowPassword->BackColor = System::Drawing::Color::Transparent;
			   this->chkShowPassword->Location = System::Drawing::Point(852, 469);
			   this->chkShowPassword->Name = L"chkShowPassword";
			   this->chkShowPassword->Size = System::Drawing::Size(195, 24);
			   this->chkShowPassword->TabIndex = 6;
			   this->chkShowPassword->Text = L"Show Password";
			   this->chkShowPassword->UseVisualStyleBackColor = false;
			   this->chkShowPassword->CheckedChanged += gcnew System::EventHandler(this, &AdminLogin::chkShowPassword_CheckedChanged);
			   // 
			   // chkAreYouHuman
			   // 
			   this->chkAreYouHuman->BackColor = System::Drawing::Color::Transparent;
			   this->chkAreYouHuman->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->chkAreYouHuman->Location = System::Drawing::Point(670, 549);
			   this->chkAreYouHuman->Name = L"chkAreYouHuman";
			   this->chkAreYouHuman->Size = System::Drawing::Size(178, 24);
			   this->chkAreYouHuman->TabIndex = 7;
			   this->chkAreYouHuman->Text = L"Are you a human\?";
			   this->chkAreYouHuman->UseVisualStyleBackColor = false;
			   this->chkAreYouHuman->CheckedChanged += gcnew System::EventHandler(this, &AdminLogin::chkAreYouHuman_CheckedChanged);
			   // 
			   // lblLogin
			   // 
			   this->lblLogin->BackColor = System::Drawing::Color::DarkSalmon;
			   this->lblLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->lblLogin->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblLogin->ForeColor = System::Drawing::Color::Crimson;
			   this->lblLogin->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			   this->lblLogin->Location = System::Drawing::Point(667, 587);
			   this->lblLogin->Name = L"lblLogin";
			   this->lblLogin->Size = System::Drawing::Size(159, 55);
			   this->lblLogin->TabIndex = 8;
			   this->lblLogin->Text = L"Login";
			   this->lblLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->lblLogin->Click += gcnew System::EventHandler(this, &AdminLogin::lblLogin_Click);
			   // 
			   // label1
			   // 
			   this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			   this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::Crimson;
			   this->label1->Location = System::Drawing::Point(1, -1);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(1685, 121);
			   this->label1->TabIndex = 9;
			   this->label1->Text = L"SalamLykummmm AdminSahab";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(1234, 12);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(105, 86);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 10;
			   this->pictureBox1->TabStop = false;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(330, 12);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(105, 86);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox2->TabIndex = 11;
			   this->pictureBox2->TabStop = false;
			   // 
			   // btnBack
			   // 
			   this->btnBack->BackColor = System::Drawing::Color::Salmon;
			   this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnBack->ForeColor = System::Drawing::Color::Crimson;
			   this->btnBack->Location = System::Drawing::Point(64, 630);
			   this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->btnBack->Name = L"btnBack";
			   this->btnBack->Size = System::Drawing::Size(109, 45);
			   this->btnBack->TabIndex = 12;
			   this->btnBack->Text = L"Back";
			   this->btnBack->UseVisualStyleBackColor = false;
			   this->btnBack->Click += gcnew System::EventHandler(this, &AdminLogin::btnBack_Click);
			   // 
			   // AdminLogin
			   // 
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1685, 726);
			   this->Controls->Add(this->btnBack);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->lblUsername);
			   this->Controls->Add(this->txtUsername);
			   this->Controls->Add(this->lblPassword);
			   this->Controls->Add(this->txtPassword);
			   this->Controls->Add(this->lblConfirmPassword);
			   this->Controls->Add(this->txtConfirmPassword);
			   this->Controls->Add(this->chkShowPassword);
			   this->Controls->Add(this->chkAreYouHuman);
			   this->Controls->Add(this->lblLogin);
			   this->Name = L"AdminLogin";
			   this->Text = L"Admin Login";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void chkShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		bool show = chkShowPassword->Checked;
		txtPassword->UseSystemPasswordChar = !show;
		txtConfirmPassword->UseSystemPasswordChar = !show;
	}

private: System::Void lblLogin_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!chkAreYouHuman->Checked)
	{
		MessageBox::Show("Please verify you're a human.");
		return;
	}

	// Open the admin.txt file and check the credentials
	bool isValid = false;
	System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("admin.txt");

	while (!sr->EndOfStream)
	{
		// Read each line from the file
		String^ line = sr->ReadLine();

		// Split the line into username and password
		array<String^>^ credentials = line->Split('|');

		if (credentials->Length == 2)
		{
			String^ storedUsername = credentials[0];
			String^ storedPassword = credentials[1];

			// Check if the entered username and password match
			if (txtUsername->Text == storedUsername && txtPassword->Text == storedPassword)
			{
				isValid = true;
				break;
			}
		}
	}
	sr->Close();

	// Display result
	if (isValid)
	{
		MessageBox::Show("Admin login successful.");

		// Create an instance of AdminDashboard
		AdminDashboard^ adminDashboardForm = gcnew AdminDashboard();

		// Hide the current login form
		this->Hide();

		// Show the AdminDashboard form
		adminDashboardForm->Show();
	}
	else
	{
		MessageBox::Show("Invalid username or password.");
	}
}


	private: System::Void lblClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		txtUsername->Clear();
		txtPassword->Clear();
		txtConfirmPassword->Clear();
		chkShowPassword->Checked = false;
		chkAreYouHuman->Checked = false;
	}
	private: System::Void chkAreYouHuman_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtConfirmPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
