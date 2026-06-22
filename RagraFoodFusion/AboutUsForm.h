#pragma once

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AboutUsForm : public System::Windows::Forms::Form
	{
	public:
		AboutUsForm(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		~AboutUsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ labelTitle;
		System::Windows::Forms::TextBox^ textBoxInfo;
		System::Windows::Forms::Button^ btnBack;
		System::ComponentModel::Container^ components;
	private: void btnBack_Click(System::Object^ sender, System::EventArgs^ e);
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutUsForm::typeid));
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->textBoxInfo = (gcnew System::Windows::Forms::TextBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->BackColor = System::Drawing::Color::Transparent;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 40, System::Drawing::FontStyle::Bold));
			this->labelTitle->ForeColor = System::Drawing::Color::Crimson;
			this->labelTitle->Location = System::Drawing::Point(667, 62);
			this->labelTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(326, 80);
			this->labelTitle->TabIndex = 0;
			this->labelTitle->Text = L"About Us";
			// 
			// textBoxInfo
			// 
			this->textBoxInfo->BackColor = System::Drawing::Color::Salmon;
			this->textBoxInfo->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxInfo->Location = System::Drawing::Point(265, 185);
			this->textBoxInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxInfo->Multiline = true;
			this->textBoxInfo->Name = L"textBoxInfo";
			this->textBoxInfo->ReadOnly = true;
			this->textBoxInfo->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxInfo->Size = System::Drawing::Size(1267, 341);
			this->textBoxInfo->TabIndex = 1;
			this->textBoxInfo->Text = resources->GetString(L"textBoxInfo.Text");
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::LightSalmon;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::Crimson;
			this->btnBack->Location = System::Drawing::Point(89, 631);
			this->btnBack->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(137, 65);
			this->btnBack->TabIndex = 2;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &AboutUsForm::btnBack_Click);
			// 
			// AboutUsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1800, 815);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->textBoxInfo);
			this->Controls->Add(this->labelTitle);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"AboutUsForm";
			this->Text = L"About Us - Ragra Food Fusion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	//	this->Close(); // Or use this->Hide() if you're returning to another form
	//}
	};
}