#pragma once
#include "CustomerReviews.h"
namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class GoodBye : public System::Windows::Forms::Form
	{
	public:
		GoodBye(void)
		{
			InitializeComponent();
		}

	protected:
		~GoodBye()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ thankYouLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ scrollTimer;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: String^ messageText;
	private: System::Windows::Forms::Button^ reviewAdd;
	private: int labelYPos;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GoodBye::typeid));
			   this->thankYouLabel = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->scrollTimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->reviewAdd = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // thankYouLabel
			   // 
			   this->thankYouLabel->BackColor = System::Drawing::Color::Transparent;
			   this->thankYouLabel->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 24, System::Drawing::FontStyle::Bold));
			   this->thankYouLabel->ForeColor = System::Drawing::Color::Crimson;
			   this->thankYouLabel->Location = System::Drawing::Point(300, 197);
			   this->thankYouLabel->Name = L"thankYouLabel";
			   this->thankYouLabel->Size = System::Drawing::Size(985, 368);
			   this->thankYouLabel->TabIndex = 0;
			   this->thankYouLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->thankYouLabel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GoodBye::thankYouLabel_Paint);
			   // 
			   // label2
			   // 
			   this->label2->BackColor = System::Drawing::Color::DarkSalmon;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold));
			   this->label2->ForeColor = System::Drawing::Color::Crimson;
			   this->label2->Location = System::Drawing::Point(0, -3);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(1697, 115);
			   this->label2->TabIndex = 8;
			   this->label2->Text = L"Order Placed. Please wait and have a nice food : )";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::DarkSalmon;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(1440, 12);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(137, 95);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 9;
			   this->pictureBox1->TabStop = false;
			   // 
			   // scrollTimer
			   // 
			   this->scrollTimer->Interval = 50;
			   this->scrollTimer->Tick += gcnew System::EventHandler(this, &GoodBye::scrollTimer_Tick);
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::DarkSalmon;
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(1551, 577);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(107, 83);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox3->TabIndex = 13;
			   this->pictureBox3->TabStop = false;
			   // 
			   // reviewAdd
			   // 
			   this->reviewAdd->BackColor = System::Drawing::Color::IndianRed;
			   this->reviewAdd->Location = System::Drawing::Point(1274, 526);
			   this->reviewAdd->Name = L"reviewAdd";
			   this->reviewAdd->Size = System::Drawing::Size(203, 71);
			   this->reviewAdd->TabIndex = 14;
			   this->reviewAdd->Text = L"Add Review";
			   this->reviewAdd->UseVisualStyleBackColor = false;
			   this->reviewAdd->Click += gcnew System::EventHandler(this, &GoodBye::reviewAdd_Click);
			   // 
			   // GoodBye
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1692, 688);
			   this->Controls->Add(this->reviewAdd);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->thankYouLabel);
			   this->Cursor = System::Windows::Forms::Cursors::No;
			   this->Name = L"GoodBye";
			   this->Text = L"GoodBye";
			   this->Load += gcnew System::EventHandler(this, &GoodBye::GoodBye_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private: System::Void GoodBye_Load(System::Object^ sender, System::EventArgs^ e)
	{
		labelYPos = thankYouLabel->Height;

		messageText =
			L"Thank You for being a part of\n"
			L"Ragra Food Fusion!\n\n"
			L"We hope you enjoyed our\n"
			L"unique culinary journey.\n\n"
			L"Your support means the world to us.\n"
			L"See you soon!";

		scrollTimer->Start();
	}

	private: System::Void scrollTimer_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		labelYPos -= 2;
		if (labelYPos < -thankYouLabel->Height)
		{
			labelYPos = thankYouLabel->Height;
		}
		this->thankYouLabel->Invalidate();
	}

	private: System::Void thankYouLabel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		SolidBrush^ brush = gcnew SolidBrush(Color::Crimson);
		StringFormat^ format = gcnew StringFormat();
		format->Alignment = StringAlignment::Center;
		format->LineAlignment = StringAlignment::Center;

		System::Drawing::Rectangle drawRect = thankYouLabel->ClientRectangle;

		drawRect.Y = labelYPos;

		e->Graphics->TextRenderingHint = System::Drawing::Text::TextRenderingHint::AntiAlias;
		e->Graphics->DrawString(messageText, thankYouLabel->Font, brush, drawRect, format);
	}
	private: System::Void reviewAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();  
		CustomerReviews^ reviewForm = gcnew CustomerReviews();
		reviewForm->Show();
	}
};
}
