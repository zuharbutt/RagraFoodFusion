#pragma once
#include <fstream>
#include "Category.h"

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class EmployeeLogin : public System::Windows::Forms::Form
	{
	public:
		EmployeeLogin(void)
		{
			InitializeComponent();
		}

	protected:
		~EmployeeLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
	private: void btnBack_Click(System::Object^ sender, System::EventArgs^ e);

		
		System::Windows::Forms::TextBox^ txtUsername;
		System::Windows::Forms::TextBox^ txtPassword;
		System::Windows::Forms::CheckBox^ chkShowPassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnBack;
		   System::Windows::Forms::Button^ btnLogin;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeLogin::typeid));
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->chkShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(922, 256);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(200, 34);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(922, 379);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(200, 34);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &EmployeeLogin::txtPassword_TextChanged);
			// 
			// chkShowPassword
			// 
			this->chkShowPassword->BackColor = System::Drawing::Color::Transparent;
			this->chkShowPassword->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkShowPassword->Location = System::Drawing::Point(922, 443);
			this->chkShowPassword->Name = L"chkShowPassword";
			this->chkShowPassword->Size = System::Drawing::Size(212, 24);
			this->chkShowPassword->TabIndex = 5;
			this->chkShowPassword->Text = L"Show Password";
			this->chkShowPassword->UseVisualStyleBackColor = false;
			this->chkShowPassword->CheckedChanged += gcnew System::EventHandler(this, &EmployeeLogin::chkShowPassword_CheckedChanged);
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::Salmon;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::Color::Crimson;
			this->btnLogin->Location = System::Drawing::Point(758, 592);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(200, 58);
			this->btnLogin->TabIndex = 6;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &EmployeeLogin::btnLogin_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(-1, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1719, 121);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Welcome Back, Time For Work : )";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(595, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 53);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Username:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Crimson;
			this->label5->Location = System::Drawing::Point(595, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(268, 53);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Password:";
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Salmon;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::Crimson;
			this->btnBack->Location = System::Drawing::Point(79, 651);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(109, 45);
			this->btnBack->TabIndex = 18;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &EmployeeLogin::btnBack_Click);
			// 
			// EmployeeLogin
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1718, 751);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->chkShowPassword);
			this->Controls->Add(this->btnLogin);
			this->Name = L"EmployeeLogin";
			this->Text = L"Employee Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void chkShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		txtPassword->UseSystemPasswordChar = !chkShowPassword->Checked;
	}

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtUsername->Text == "" || txtPassword->Text == "")
		{
			MessageBox::Show("Please enter both username and password.");
			return;
		}

		// Path to the employee credentials file
		String^ filePath = "employees.txt";

		try
		{
			// Open the file using StreamReader
			StreamReader^ reader = gcnew StreamReader(filePath);
			String^ line;
			bool loginSuccessful = false;

			// Read the file line by line
			while ((line = reader->ReadLine()) != nullptr)
			{
				// Assuming the file has data in the format "username password"
				array<String^>^ credentials = line->Split(' ');  // Splitting the line by space
				if (credentials->Length == 2)
				{
					String^ storedUsername = credentials[0];
					String^ storedPassword = credentials[1];

					// Check if the entered username and password match
					if (txtUsername->Text == storedUsername && txtPassword->Text == storedPassword)
					{
						loginSuccessful = true;
						break;
					}
				}
			}

			reader->Close();

			if (loginSuccessful)
			{
				MessageBox::Show("Login successful!", "Welcome");
		
				//Category^ categoryform = gcnew Category();
				Project12::Category^ categoryform = gcnew Project12::Category();
				this->Hide();
				categoryform->Show();
			}
			else
			{
				MessageBox::Show("Invalid username or password.", "Login failed");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message, "Error");
		}
	}

	private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
