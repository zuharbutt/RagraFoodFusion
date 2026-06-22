#pragma once
#include "AdminLogin.h"
#include "EmployeeLogin.h"
#include "CustomerLogin.h"
#include "CustomerRegister.h"
#include "Category.h"
namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Modes
	/// </summary>
	public ref class Modes : public System::Windows::Forms::Form
	{
	public:
		Modes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Modes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ adminbutton;
	private: System::Windows::Forms::Button^ oldcustomerbutton;
	private: System::Windows::Forms::Button^ employeebutton;
	protected:

	protected:


	private: System::Windows::Forms::Button^ newcostumerbutton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: void button2_Click(System::Object^ sender, System::EventArgs^ e); //add
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Modes::typeid));
			this->adminbutton = (gcnew System::Windows::Forms::Button());
			this->oldcustomerbutton = (gcnew System::Windows::Forms::Button());
			this->employeebutton = (gcnew System::Windows::Forms::Button());
			this->newcostumerbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// adminbutton
			// 
			this->adminbutton->BackColor = System::Drawing::Color::Salmon;
			this->adminbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminbutton->ForeColor = System::Drawing::Color::Crimson;
			this->adminbutton->Location = System::Drawing::Point(886, 189);
			this->adminbutton->Name = L"adminbutton";
			this->adminbutton->Size = System::Drawing::Size(344, 102);
			this->adminbutton->TabIndex = 0;
			this->adminbutton->Text = L"Admin";
			this->adminbutton->UseVisualStyleBackColor = false;
			this->adminbutton->Click += gcnew System::EventHandler(this, &Modes::button1_Click);
			// 
			// oldcustomerbutton
			// 
			this->oldcustomerbutton->BackColor = System::Drawing::Color::Salmon;
			this->oldcustomerbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oldcustomerbutton->ForeColor = System::Drawing::Color::Crimson;
			this->oldcustomerbutton->Location = System::Drawing::Point(886, 546);
			this->oldcustomerbutton->Name = L"oldcustomerbutton";
			this->oldcustomerbutton->Size = System::Drawing::Size(344, 100);
			this->oldcustomerbutton->TabIndex = 1;
			this->oldcustomerbutton->Text = L"Old Customer";
			this->oldcustomerbutton->UseVisualStyleBackColor = false;
			this->oldcustomerbutton->Click += gcnew System::EventHandler(this, &Modes::oldcustomerbutton_Click);
			// 
			// employeebutton
			// 
			this->employeebutton->BackColor = System::Drawing::Color::Salmon;
			this->employeebutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeebutton->ForeColor = System::Drawing::Color::Crimson;
			this->employeebutton->Location = System::Drawing::Point(886, 310);
			this->employeebutton->Name = L"employeebutton";
			this->employeebutton->Size = System::Drawing::Size(344, 102);
			this->employeebutton->TabIndex = 2;
			this->employeebutton->Text = L"Employee";
			this->employeebutton->UseVisualStyleBackColor = false;
			this->employeebutton->Click += gcnew System::EventHandler(this, &Modes::employeebutton_Click);
			// 
			// newcostumerbutton
			// 
			this->newcostumerbutton->BackColor = System::Drawing::Color::Salmon;
			this->newcostumerbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newcostumerbutton->ForeColor = System::Drawing::Color::Crimson;
			this->newcostumerbutton->Location = System::Drawing::Point(886, 430);
			this->newcostumerbutton->Name = L"newcostumerbutton";
			this->newcostumerbutton->Size = System::Drawing::Size(344, 95);
			this->newcostumerbutton->TabIndex = 3;
			this->newcostumerbutton->Text = L"New Customer";
			this->newcostumerbutton->UseVisualStyleBackColor = false;
			this->newcostumerbutton->Click += gcnew System::EventHandler(this, &Modes::newcostumerbutton_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(-2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2297, 121);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Rukiye, Apni Shanakht Karwa Ke Jaiye!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Salmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Crimson;
			this->button1->Location = System::Drawing::Point(886, 672);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(344, 99);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Anonymous Customer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Modes::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Salmon;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Crimson;
			this->button2->Location = System::Drawing::Point(204, 716);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 78);
			this->button2->TabIndex = 10;
			this->button2->Text = L"<- Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Modes::button2_Click);
			// 
			// Modes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 899);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->newcostumerbutton);
			this->Controls->Add(this->employeebutton);
			this->Controls->Add(this->oldcustomerbutton);
			this->Controls->Add(this->adminbutton);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"Modes";
			this->Text = L"Modes";
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open AdminLogin Form when Admin button is clicked
	AdminLogin^ adminLoginForm = gcnew AdminLogin();
	adminLoginForm->Show(); // Show the AdminLogin form
	this->Hide(); // Hide the current form (optional)
}

private: System::Void employeebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open EmployeeLogin Form when Employee button is clicked
	EmployeeLogin^ employeeLoginForm = gcnew EmployeeLogin();
	employeeLoginForm->Show(); // Show the EmployeeLogin form
	this->Hide(); // Hide the current form (optional)
}

private: System::Void oldcustomerbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open CustomerLogin Form when Old Customer button is clicked
	CustomerLogin^ customerLoginForm = gcnew CustomerLogin();
	customerLoginForm->Show(); // Show the CustomerLogin form
	this->Hide(); // Hide the current form (optional)
}

private: System::Void newcostumerbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open CustomerRegister Form when New Customer button is clicked
	CustomerRegister^ customerRegisterForm = gcnew CustomerRegister();
	customerRegisterForm->Show(); // Show the CustomerRegister form
	this->Hide(); // Hide the current form (optional)
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Project12::Category^ catForm = gcnew Project12::Category();
	catForm->Show(); 
	this->Hide(); // Hide the current form (optional)
}
//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//}
};
}
