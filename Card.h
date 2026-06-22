#pragma once
#include "PaymentHandling.h";
#include "GoodBye.h"

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Card : public System::Windows::Forms::Form
	{
	public:
		Card(void)
		{
			InitializeComponent();
		}

	protected:
		~Card()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
	protected private: System::Windows::Forms::ComboBox^ cardTypeComboBox;
	private:



		System::Windows::Forms::TextBox^ cardNumberBox;
		System::Windows::Forms::Button^ submitButton;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



		   System::Windows::Forms::Button^ backButton; //backbutton

	private:
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Card::typeid));
			this->cardTypeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->cardNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cardTypeComboBox
			// 
			this->cardTypeComboBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cardTypeComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cardTypeComboBox->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cardTypeComboBox->ForeColor = System::Drawing::Color::LightSalmon;
			this->cardTypeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"DebitCard", L"CreditCard" });
			this->cardTypeComboBox->Location = System::Drawing::Point(750, 211);
			this->cardTypeComboBox->Name = L"cardTypeComboBox";
			this->cardTypeComboBox->Size = System::Drawing::Size(200, 30);
			this->cardTypeComboBox->TabIndex = 1;
			this->cardTypeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Card::cardTypeComboBox_SelectedIndexChanged);
			// 
			// cardNumberBox
			// 
			this->cardNumberBox->Location = System::Drawing::Point(750, 520);
			this->cardNumberBox->Name = L"cardNumberBox";
			this->cardNumberBox->Size = System::Drawing::Size(200, 22);
			this->cardNumberBox->TabIndex = 3;
			this->cardNumberBox->TextChanged += gcnew System::EventHandler(this, &Card::cardNumberBox_TextChanged);
			// 
			// submitButton
			// 
			this->submitButton->BackColor = System::Drawing::Color::DarkSalmon;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->ForeColor = System::Drawing::Color::Crimson;
			this->submitButton->Location = System::Drawing::Point(1431, 634);
			this->submitButton->Margin = System::Windows::Forms::Padding(4);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(213, 64);
			this->submitButton->TabIndex = 4;
			this->submitButton->Text = L"Pay";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &Card::submitButton_Click);
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::DarkSalmon;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->ForeColor = System::Drawing::Color::Crimson;
			this->backButton->Location = System::Drawing::Point(64, 634);
			this->backButton->Margin = System::Windows::Forms::Padding(4);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(213, 64);
			this->backButton->TabIndex = 5;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Card::backButton_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(2, -4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1705, 115);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Select Card Type:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::DarkSalmon;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(2, 358);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1705, 115);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Enter Card Number:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Card
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1705, 715);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->cardTypeComboBox);
			this->Controls->Add(this->cardNumberBox);
			this->Controls->Add(this->submitButton);
			this->Name = L"Card";
			this->Text = L"Card Information";
			this->Load += gcnew System::EventHandler(this, &Card::Card_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private:
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ type = cardTypeComboBox->Text;
		String^ number = cardNumberBox->Text;

		if (type == "" || number == "")
		{
			MessageBox::Show("Please fill all the fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Check all characters are digits
		for (int i = 0; i < number->Length; i++)
		{
			if (!Char::IsDigit(number[i]))
			{
				MessageBox::Show("Card number must contain only digits!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		// Convert the string manually to check for prefix and length
	

		bool isValid = false;

		// Remove spaces from the input number
		number = number->Replace(" ", "");
		int len = number->Length;

		if (type == "CreditCard")
		{
			// Visa: Starts with 4 and length 13 or 16
			if ((len == 13 || len == 16) && number->StartsWith("4"))
			{
				int sum = 0;
				bool doubleDigit = false;
				for (int i = len - 1; i >= 0; i--)
				{
					int digit = number[i] - '0';
					if (doubleDigit)
					{
						digit *= 2;
						if (digit > 9) digit -= 9;
					}
					sum += digit;
					doubleDigit = !doubleDigit;
				}
				if (sum % 10 == 0)
					isValid = true;
			}
		}
		else if (type == "DebitCard")
		{
			// MasterCard: Starts with 51–55 or 2221–2720, length must be 16
			if (len == 16)
			{
				int pre2 = Convert::ToInt32(number->Substring(0, 2));
				int pre4 = Convert::ToInt32(number->Substring(0, 4));

				if ((pre2 >= 51 && pre2 <= 55) || (pre4 >= 2221 && pre4 <= 2720))
				{
					int sum = 0;
					bool doubleDigit = false;
					for (int i = len - 1; i >= 0; i--)
					{
						int digit = number[i] - '0';
						if (doubleDigit)
						{
							digit *= 2;
							if (digit > 9) digit -= 9;
						}
						sum += digit;
						doubleDigit = !doubleDigit;
					}
					if (sum % 10 == 0)
						isValid = true;
				}
			}
		}




		// Final check
		if (isValid)
		{
			this->Hide();
			Project12::GoodBye^ goodbyeForm = gcnew Project12::GoodBye();
			goodbyeForm->ShowDialog();
			this->Close();
		}
		else
		{
			MessageBox::Show(" Invalid card details!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Close the current form (Card) and navigate back to PaymentHandling form
		this->Hide();  // Close the Card form

		// Check if PaymentHandling is already open, if not, open it
		PaymentHandling^ paymentHandlingForm = gcnew PaymentHandling();
		paymentHandlingForm->Show();
	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void debitpic_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cardTypeComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cardTypeLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cardNumberLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cardNumberBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	  

private: System::Void Card_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
