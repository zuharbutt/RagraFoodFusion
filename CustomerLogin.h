#pragma once
#include <fstream>  // For file handling with StreamReader
#include "Category.h"  
 

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::IO;  // Required for StreamReader
	public ref class CustomerLogin : public System::Windows::Forms::Form
	{
	public:
		CustomerLogin(void)
		{
			InitializeComponent();
		}

	protected:
		~CustomerLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::TextBox^ txtUsername;
		System::Windows::Forms::TextBox^ txtPassword;
		System::Windows::Forms::CheckBox^ chkShowPassword;


		System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnBack;
	private: void btnBack_Click(System::Object^ sender, System::EventArgs^ e);
		   System::ComponentModel::Container^ components;

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerLogin::typeid));
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->chkShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(957, 254);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(244, 34);
			this->txtUsername->TabIndex = 0;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(957, 360);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(244, 34);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// chkShowPassword
			// 
			this->chkShowPassword->BackColor = System::Drawing::Color::Transparent;
			this->chkShowPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkShowPassword->Location = System::Drawing::Point(957, 411);
			this->chkShowPassword->Name = L"chkShowPassword";
			this->chkShowPassword->Size = System::Drawing::Size(200, 24);
			this->chkShowPassword->TabIndex = 2;
			this->chkShowPassword->Text = L"Show Password";
			this->chkShowPassword->UseVisualStyleBackColor = false;
			this->chkShowPassword->CheckedChanged += gcnew System::EventHandler(this, &CustomerLogin::chkShowPassword_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(780, 538);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 59);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CustomerLogin::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1726, 121);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Welcome Back!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblUsername
			// 
			this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->ForeColor = System::Drawing::Color::Crimson;
			this->lblUsername->Location = System::Drawing::Point(613, 240);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(268, 53);
			this->lblUsername->TabIndex = 7;
			this->lblUsername->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(626, 334);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 60);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Password:";
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Salmon;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::Crimson;
			this->btnBack->Location = System::Drawing::Point(90, 624);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(109, 45);
			this->btnBack->TabIndex = 9;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &CustomerLogin::btnBack_Click);
			// 
			// CustomerLogin
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->chkShowPassword);
			this->Controls->Add(this->button1);
			this->Name = L"CustomerLogin";
			this->Text = L"Customer Login";
			this->Load += gcnew System::EventHandler(this, &CustomerLogin::CustomerLogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		// === Event Handlers ===

	private: System::Void chkShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		txtPassword->UseSystemPasswordChar = !chkShowPassword->Checked;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = txtUsername->Text;
		String^ password = txtPassword->Text;

		if (username == "" || password == "") {
			MessageBox::Show("Please enter both username and password.", "Input Error");
		}
		else {
			bool loginSuccessful = false;

			// Open the file and read each line
			StreamReader^ reader = gcnew StreamReader("customers.txt");

			// Loop through each line to find a matching username and password
			while (!reader->EndOfStream) {
				String^ line = reader->ReadLine();
				array<String^>^ userData = line->Split('|'); // Split line by '|' to extract username and password

				// Check if the username and password match
				if (userData[1] == username && userData[2] == password) {
					loginSuccessful = true;
					break;
				}
			}

			reader->Close();

			// Show appropriate message
			if (loginSuccessful) {
				// Save the login info to customerlogins.txt
				StreamWriter^ writer = gcnew StreamWriter("customerlogins.txt", true); // true for append mode
				writer->WriteLine(username + "|" + password);
				writer->Close();

				MessageBox::Show("Login Successful for " + username, "Welcome");

				// Navigate to the next form
				Project12::Category^ categoryform = gcnew Project12::Category();
				this->Hide();
				categoryform->Show();
			}
			else {
				MessageBox::Show("Invalid username or password. Please try again.", "Login Failed");
			}
		}

	}


	private: System::Void CustomerLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
};
}
