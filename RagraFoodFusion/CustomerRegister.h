#pragma once
#include <fstream>
#include "Category.h"
namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing; using namespace System::IO;


	public ref class CustomerRegister : public System::Windows::Forms::Form
	{
	public:
		CustomerRegister(void)
		{
			InitializeComponent();
		}

	protected:
		~CustomerRegister()
		{
			if (components)
			{
				delete components;
			}
		}

	private:





	

		System::Windows::Forms::TextBox^ txtFullName;
		System::Windows::Forms::TextBox^ txtUsername;
		System::Windows::Forms::TextBox^ txtPassword;
		System::Windows::Forms::TextBox^ txtConfirmPassword;
		System::Windows::Forms::TextBox^ txtEmail;
		System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBoxShowPassword;

	private: void btnBack_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnBack;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerRegister::typeid));
			this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtFullName
			// 
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFullName->Location = System::Drawing::Point(631, 190);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(200, 34);
			this->txtFullName->TabIndex = 2;
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(631, 269);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(200, 34);
			this->txtUsername->TabIndex = 4;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(631, 348);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(200, 34);
			this->txtPassword->TabIndex = 6;
			this->txtPassword->UseSystemPasswordChar = true;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &CustomerRegister::txtPassword_TextChanged);
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtConfirmPassword->Location = System::Drawing::Point(631, 416);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(200, 34);
			this->txtConfirmPassword->TabIndex = 8;
			this->txtConfirmPassword->UseSystemPasswordChar = true;
			// Show Password Checkbox
			this->checkBoxShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxShowPassword->AutoSize = true;
			this->checkBoxShowPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBoxShowPassword->ForeColor = System::Drawing::Color::Crimson;
			this->checkBoxShowPassword->Location = System::Drawing::Point(631, 460); // adjust Y as needed
			this->checkBoxShowPassword->Name = L"checkBoxShowPassword";
			this->checkBoxShowPassword->Size = System::Drawing::Size(148, 24);
			this->checkBoxShowPassword->TabIndex = 20;
			this->checkBoxShowPassword->Text = L"Show Password";
			this->checkBoxShowPassword->UseVisualStyleBackColor = true;
			this->checkBoxShowPassword->CheckedChanged += gcnew System::EventHandler(this, &CustomerRegister::checkBoxShowPassword_CheckedChanged);
			this->Controls->Add(this->checkBoxShowPassword);

			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(631, 488);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(200, 34);
			this->txtEmail->TabIndex = 10;
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::Salmon;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::Crimson;
			this->btnRegister->Location = System::Drawing::Point(1348, 598);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(200, 60);
			this->btnRegister->TabIndex = 11;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &CustomerRegister::btnRegister_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(-5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1726, 121);
			this->label1->TabIndex = 12;
			this->label1->Text = L"New to Ragra Food Fusion\? Register now!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(226, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 53);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Username:";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Crimson;
			this->label4->Location = System::Drawing::Point(226, 416);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(388, 53);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Confirm Password:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Crimson;
			this->label5->Location = System::Drawing::Point(226, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(268, 53);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Password:";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Crimson;
			this->label6->Location = System::Drawing::Point(226, 181);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(268, 53);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Full name:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Crimson;
			this->label7->Location = System::Drawing::Point(226, 488);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(388, 53);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Email:";
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Salmon;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::Crimson;
			this->btnBack->Location = System::Drawing::Point(92, 640);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(109, 45);
			this->btnBack->TabIndex = 19;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &CustomerRegister::btnBack_Click);
			// 
			// CustomerRegister
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1697, 748);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtFullName);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->btnRegister);
			this->Name = L"CustomerRegister";
			this->Text = L"Customer Registration";
			this->ResumeLayout(false);
			this->PerformLayout();
			this->Controls->Add(this->checkBoxShowPassword);

		}
#pragma endregion

private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtFullName->Text == "" || txtUsername->Text == "" || txtPassword->Text == "" || txtConfirmPassword->Text == "" || txtEmail->Text == "")
	{
		MessageBox::Show("Please fill in all fields.");
	}
	else if (txtPassword->Text != txtConfirmPassword->Text)
	{
		MessageBox::Show("Passwords do not match.");
	}
	else if (txtPassword->Text->Length != 8)  // Password length check
	{
		MessageBox::Show("Password must be 8 characters long.", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (txtPassword->Text == "12345678")  // Check if the password is too basic
	{
		MessageBox::Show("Your password is too basic, please try something else.", "Weak Password", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (!txtEmail->Text->EndsWith("@gmail.com"))  // Email validation check
	{
		MessageBox::Show("Please enter a valid email address ending with @gmail.com.", "Invalid Email", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		// Check if the username already exists in the customers.txt file
		bool usernameExists = false;
		StreamReader^ reader = gcnew StreamReader("customers.txt");

		while (!reader->EndOfStream)
		{
			String^ line = reader->ReadLine();
			array<String^>^ customerData = line->Split('|');

			// If username is found in file, set usernameExists to true and break out of the loop
			if (customerData[1] == txtUsername->Text)
			{
				usernameExists = true;
				break;
			}
		}
		reader->Close();

		// If the username exists, show a message and don't proceed
		if (usernameExists)
		{
			MessageBox::Show("This username already exists. Please choose a different username.");
		}
		else
		{
			// Proceed with the registration and save the new customer data
			MessageBox::Show("Registration successful! Use code nuces10 on your first order to get 10% off ", "Welcome to Ragra Family: )");

			StreamWriter^ writer = gcnew StreamWriter("customers.txt", true); // true enables appending to the file
			writer->WriteLine(txtFullName->Text + "|" + txtUsername->Text + "|" + txtPassword->Text + "|" + txtEmail->Text);
			writer->Close();
			// Save login credentials to customerlogins.txt
			StreamWriter^ loginWriter = gcnew StreamWriter("customerlogins.txt", true); // Append mode
			loginWriter->WriteLine(txtUsername->Text + "|" + txtPassword->Text);
			loginWriter->Close();

			Project12::Category^ categoryform = gcnew Project12::Category();
			categoryform->Show();  // Navigate to next form
			this->Close();  // Close the registration form
		}
	}
}



	   private: System::Void checkBoxShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	   {
		   this->txtPassword->UseSystemPasswordChar = !checkBoxShowPassword->Checked;
		   this->txtConfirmPassword->UseSystemPasswordChar = !checkBoxShowPassword->Checked;
	   }

	
private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
