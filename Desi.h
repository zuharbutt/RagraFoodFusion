#pragma once
#include "CartManager.h"
#include "Category.h"
#include "NavigationHelper.h"
#include "InventoryManager.h"
namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Desi
	/// </summary>

	public ref class Desi : public System::Windows::Forms::Form
	{
		static CartManager^ desicart = gcnew CartManager();

	public:
		System::String^ GetLastLoggedInUsername()
		{
			try {
				std::ifstream file("customerlogins.txt");
				std::string line, lastLine;

				while (std::getline(file, line)) {
					if (!line.empty())
						lastLine = line;
				}

				file.close();

				size_t pos = lastLine.find('|');
				if (pos != std::string::npos) {
					std::string username = lastLine.substr(0, pos);
					return gcnew System::String(username.c_str());
				}
			}
			catch (...) {
				// Return fallback if file error or format issue
			}
			return "Guest";
		}

		Desi(void)
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
		~Desi()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	   private: void button2_Click(System::Object^ sender, System::EventArgs^ e);
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Desi::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(-25, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2200, 122);
			this->label1->TabIndex = 3;
			this->label1->Text = L"DESI CUISINE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(443, 159);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(340, 229);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Desi::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1067, 159);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(340, 229);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1067, 513);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(340, 229);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(443, 498);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(340, 229);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Desi::pictureBox5_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::LightSalmon;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(481, 391);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 52);
			this->label2->TabIndex = 10;
			this->label2->Text = L"CHICKEN BIRYANI";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::LightSalmon;
			this->label3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(1115, 746);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 52);
			this->label3->TabIndex = 11;
			this->label3->Text = L"DAHI BHALLAY";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightSalmon;
			this->label4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(481, 731);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 52);
			this->label4->TabIndex = 12;
			this->label4->Text = L"CHICKEN SAJJI";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::LightSalmon;
			this->label5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 10, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(1115, 391);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(208, 52);
			this->label5->TabIndex = 13;
			this->label5->Text = L"CHICKEN KARAHI";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(697, 742);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(57, 30);
			this->numericUpDown2->TabIndex = 15;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(1331, 402);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(57, 30);
			this->numericUpDown1->TabIndex = 16;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown3->Location = System::Drawing::Point(697, 402);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(57, 30);
			this->numericUpDown3->TabIndex = 17;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown4->Location = System::Drawing::Point(1331, 757);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(57, 30);
			this->numericUpDown4->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSalmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Crimson;
			this->button1->Location = System::Drawing::Point(1549, 745);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 64);
			this->button1->TabIndex = 19;
			this->button1->Text = L"CONTINUE >";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Desi::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSalmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Crimson;
			this->button2->Location = System::Drawing::Point(88, 745);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 64);
			this->button2->TabIndex = 20;
			this->button2->Text = L"< BACK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Desi::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Salmon;
			this->label9->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Crimson;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(1173, 798);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 32);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Rs. 350";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Salmon;
			this->label6->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Crimson;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(548, 783);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 32);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Rs. 900";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Salmon;
			this->label7->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Crimson;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(1173, 443);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 32);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Rs. 1600";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Salmon;
			this->label8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Crimson;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(548, 443);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 32);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Rs. 600";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2297, 1031);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Desi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1924, 899);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Desi";
			this->Text = L"Desi";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Chicken Karahi (ID 113)
		if (numericUpDown1->Value > 0) {
			desicart->AddItem("Chicken Karahi", (int)numericUpDown1->Value, 1600);
			InventoryManager::UpdateInventory(113, (int)numericUpDown1->Value);
		}

		// Chicken Sajji (ID 114)
		if (numericUpDown2->Value > 0) {
			desicart->AddItem("Chicken Sajji", (int)numericUpDown2->Value, 900);
			InventoryManager::UpdateInventory(114, (int)numericUpDown2->Value);
		}

		// Chicken Biryani (ID 112)
		if (numericUpDown3->Value > 0) {
			desicart->AddItem("Chicken Biryani", (int)numericUpDown3->Value, 600);
			InventoryManager::UpdateInventory(112, (int)numericUpDown3->Value);
		}

		// Dahi Bhallay (ID 115)
		if (numericUpDown4->Value > 0) {
			desicart->AddItem("Dahi Bhallay", (int)numericUpDown4->Value, 350);
			InventoryManager::UpdateInventory(115, (int)numericUpDown4->Value);
		}

		// Save cart and proceed
		desicart->SaveToFile("cart.txt");
		desicart->SaveToCartFileFormat(GetLastLoggedInUsername());
		NavigationHelper::ShowCartForm(this);
		this->Hide(); // Close the current menu form
	}
	catch (Exception^ e) {
		MessageBox::Show("Error processing order: " + e->Message,
			"Order Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
	
	};
}
