#pragma once
#include "PaymentHandling.h"
#include "GoodBye.h"

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Cash : public System::Windows::Forms::Form
	{
	public:
	public:
		Cash(void) : dueAmount(500), isCalculated(false) {} // Keep default for backward compatibility
		Cash(int amount) {  // New constructor that takes the amount
			InitializeComponent();
			dueAmount = amount; // Set from parameter
			cashDueLabel->Text = "Amount Due: PKR " + dueAmount.ToString();
			isCalculated = false;
		}

	protected:
		~Cash()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		double dueAmount;
		bool isCalculated; // Flag to track if calculation is done
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Label^ cashDueLabel;

		System::Windows::Forms::TextBox^ cashReceivedBox;
		System::Windows::Forms::Button^ calculateButton;
		System::Windows::Forms::Label^ changeLabel;
		System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Label^ label1;
		   System::Windows::Forms::Button^ Nextbutton;

	private:
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cash::typeid));
			this->cashDueLabel = (gcnew System::Windows::Forms::Label());
			this->cashReceivedBox = (gcnew System::Windows::Forms::TextBox());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->changeLabel = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->Nextbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cashDueLabel
			// 
			this->cashDueLabel->AutoSize = true;
			this->cashDueLabel->BackColor = System::Drawing::Color::Transparent;
			this->cashDueLabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cashDueLabel->ForeColor = System::Drawing::Color::Crimson;
			this->cashDueLabel->Location = System::Drawing::Point(622, 248);
			this->cashDueLabel->Name = L"cashDueLabel";
			this->cashDueLabel->Size = System::Drawing::Size(393, 49);
			this->cashDueLabel->TabIndex = 0;
			this->cashDueLabel->Text = L"Amount Due: PKR 0";
			// 
			// cashReceivedBox
			// 
			this->cashReceivedBox->Location = System::Drawing::Point(736, 158);
			this->cashReceivedBox->Name = L"cashReceivedBox";
			this->cashReceivedBox->Size = System::Drawing::Size(200, 22);
			this->cashReceivedBox->TabIndex = 2;
			this->cashReceivedBox->TextChanged += gcnew System::EventHandler(this, &Cash::cashReceivedBox_TextChanged);
			// 
			// calculateButton
			// 
			this->calculateButton->BackColor = System::Drawing::Color::DarkSalmon;
			this->calculateButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculateButton->ForeColor = System::Drawing::Color::Crimson;
			this->calculateButton->Location = System::Drawing::Point(723, 363);
			this->calculateButton->Margin = System::Windows::Forms::Padding(4);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(213, 64);
			this->calculateButton->TabIndex = 3;
			this->calculateButton->Text = L"Calculate Change";
			this->calculateButton->UseVisualStyleBackColor = false;
			this->calculateButton->Click += gcnew System::EventHandler(this, &Cash::calculateButton_Click);
			// 
			// changeLabel
			// 
			this->changeLabel->AutoSize = true;
			this->changeLabel->BackColor = System::Drawing::Color::Transparent;
			this->changeLabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changeLabel->ForeColor = System::Drawing::Color::Crimson;
			this->changeLabel->Location = System::Drawing::Point(595, 491);
			this->changeLabel->Name = L"changeLabel";
			this->changeLabel->Size = System::Drawing::Size(462, 51);
			this->changeLabel->TabIndex = 4;
			this->changeLabel->Text = L"Change to give: PKR 0";
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::DarkSalmon;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->ForeColor = System::Drawing::Color::Crimson;
			this->backButton->Location = System::Drawing::Point(67, 601);
			this->backButton->Margin = System::Windows::Forms::Padding(4);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(213, 64);
			this->backButton->TabIndex = 5;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Cash::backButton_Click);
			// 
			// Nextbutton
			// 
			this->Nextbutton->BackColor = System::Drawing::Color::DarkSalmon;
			this->Nextbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nextbutton->ForeColor = System::Drawing::Color::Crimson;
			this->Nextbutton->Location = System::Drawing::Point(1299, 601);
			this->Nextbutton->Margin = System::Windows::Forms::Padding(4);
			this->Nextbutton->Name = L"Nextbutton";
			this->Nextbutton->Size = System::Drawing::Size(213, 64);
			this->Nextbutton->Enabled = false;
			this->Nextbutton->Cursor = Cursors::No;
			this->Nextbutton->TabIndex = 6;
			this->Nextbutton->Text = L"Next";
			this->Nextbutton->UseVisualStyleBackColor = false;
			this->Nextbutton->Click += gcnew System::EventHandler(this, &Cash::Nextbutton_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(1, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1697, 115);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Enter the Cash Received";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cash
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1695, 738);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Nextbutton);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->changeLabel);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->cashReceivedBox);
			this->Controls->Add(this->cashDueLabel);
			this->Name = L"Cash";
			this->Text = L"Cash Payment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private:

		private:
			System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e)
			{

				double received;
				if (Double::TryParse(cashReceivedBox->Text, received))
				{
					if (received >= dueAmount)
					{
						double change = received - dueAmount;
						changeLabel->Text = "Change to give: PKR " + change.ToString("F2");

						isCalculated = true;
						Nextbutton->Enabled = true;
						Nextbutton->Cursor = Cursors::Default;
					}
					else
					{
						MessageBox::Show("Received amount is less than due amount!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
				else
				{
					MessageBox::Show("Please enter a valid number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

	private:
		System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			PaymentHandling^ paymentHandlingForm = gcnew PaymentHandling();
			paymentHandlingForm->Show();
		}

	private:
private:
	System::Void Nextbutton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!isCalculated)
		{
			MessageBox::Show("Please enter the amount and click 'Calculate Change' first!", "Action Required", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		this->Hide();
		GoodBye^ goodbyeForm = gcnew GoodBye();
		goodbyeForm->ShowDialog();
		this->Close();
	}

	private: System::Void cashReceivedBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
