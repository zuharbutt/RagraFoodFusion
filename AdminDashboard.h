#pragma once
#include "inventoryForm.h"
#include "SalesSummary.h"
#include "AdminReviews.h"
namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		AdminDashboard(void)
		{
			InitializeComponent();
		}

	protected:
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ lblTitle;
		System::Windows::Forms::Button^ btnInventory;
		System::Windows::Forms::Button^ btnCustomerReviews;
		System::Windows::Forms::Button^ btnSalesSummary;
	private: System::Windows::Forms::Label^ label1;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnInventory = (gcnew System::Windows::Forms::Button());
			this->btnCustomerReviews = (gcnew System::Windows::Forms::Button());
			this->btnSalesSummary = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18));
			this->lblTitle->Location = System::Drawing::Point(521, 77);
			this->lblTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(0, 41);
			this->lblTitle->TabIndex = 0;
			// 
			// btnInventory
			// 
			this->btnInventory->BackColor = System::Drawing::Color::Salmon;
			this->btnInventory->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInventory->ForeColor = System::Drawing::Color::Crimson;
			this->btnInventory->Location = System::Drawing::Point(661, 227);
			this->btnInventory->Margin = System::Windows::Forms::Padding(4);
			this->btnInventory->Name = L"btnInventory";
			this->btnInventory->Size = System::Drawing::Size(265, 85);
			this->btnInventory->TabIndex = 1;
			this->btnInventory->Text = L"Inventory";
			this->btnInventory->UseVisualStyleBackColor = false;
			this->btnInventory->Click += gcnew System::EventHandler(this, &AdminDashboard::btnInventory_Click);
			// 
			// btnCustomerReviews
			// 
			this->btnCustomerReviews->BackColor = System::Drawing::Color::Salmon;
			this->btnCustomerReviews->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCustomerReviews->ForeColor = System::Drawing::Color::Crimson;
			this->btnCustomerReviews->Location = System::Drawing::Point(661, 385);
			this->btnCustomerReviews->Margin = System::Windows::Forms::Padding(4);
			this->btnCustomerReviews->Name = L"btnCustomerReviews";
			this->btnCustomerReviews->Size = System::Drawing::Size(265, 86);
			this->btnCustomerReviews->TabIndex = 2;
			this->btnCustomerReviews->Text = L"Customer Reviews";
			this->btnCustomerReviews->UseVisualStyleBackColor = false;
			this->btnCustomerReviews->Click += gcnew System::EventHandler(this, &AdminDashboard::btnCustomerReviews_Click);
			// 
			// btnSalesSummary
			// 
			this->btnSalesSummary->BackColor = System::Drawing::Color::Salmon;
			this->btnSalesSummary->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalesSummary->ForeColor = System::Drawing::Color::Crimson;
			this->btnSalesSummary->Location = System::Drawing::Point(661, 551);
			this->btnSalesSummary->Margin = System::Windows::Forms::Padding(4);
			this->btnSalesSummary->Name = L"btnSalesSummary";
			this->btnSalesSummary->Size = System::Drawing::Size(265, 98);
			this->btnSalesSummary->TabIndex = 3;
			this->btnSalesSummary->Text = L"Sales Summary";
			this->btnSalesSummary->UseVisualStyleBackColor = false;
			this->btnSalesSummary->Click += gcnew System::EventHandler(this, &AdminDashboard::btnSalesSummary_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(1, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1724, 121);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Okay, What you want to check\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1722, 766);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSalesSummary);
			this->Controls->Add(this->btnCustomerReviews);
			this->Controls->Add(this->btnInventory);
			this->Controls->Add(this->lblTitle);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AdminDashboard";
			this->Text = L"Admin Dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnInventory_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Inventory section opened.");
		// Create an instance of AdminDashboard
		inventoryForm^ invenForm = gcnew inventoryForm();

		// Hide the current login form
		this->Hide();

		// Show the AdminDashboard form
		invenForm->Show();
	}

	private: System::Void btnCustomerReviews_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Customer Reviews section opened.");
		 Project12::AdminReviewForm^ reviews = gcnew Project12::AdminReviewForm();
		// Hide the current login form
		this->Hide();

		// Show the AdminDashboard form
		reviews->Show();
	}

	private: System::Void btnSalesSummary_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Sales Summary section opened.");
		Project12::SalesSummaryForm^ summaryForm = gcnew Project12::SalesSummaryForm();

		// Hide the current login form
		this->Hide();

		// Show the AdminDashboard form
		summaryForm->Show();
	}
	};
}
