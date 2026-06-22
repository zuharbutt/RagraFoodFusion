#pragma once
#include "Offers.h"
#include "MyForm.h"
#include "Burgers.h"
#include "Desi.h"
#include "Pizzas.h"
#include "Soups.h"
#include "Desserts.h"
#include "Beverages.h"
#include "CartManager.h"
#include "Cart.h"

namespace Project12 {
	//ref class Offers;
	//ref class MyForm;
	//ref class Burgers;
	//ref class Desi;
	//ref class Pizzas;
	//ref class Soups;
	//ref class Desserts;
	//ref class Beverages;
	//ref class CartManager;
	//ref class Cart; 




	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Category
	/// </summary>
	public ref class Category : public System::Windows::Forms::Form
	{

		static CartManager^ cart = gcnew CartManager();

	public:

		Category(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	private:
		// Button click handlers for all 8 categories
		void ShowForm(Form^ form)
		{
			form->Show();
			this->Hide();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Category()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;


	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ btnViewCart;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Category::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btnViewCart = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-24, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2500, 1800);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Category::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSalmon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(-92, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2354, 122);
			this->label1->TabIndex = 6;
			this->label1->Text = L"MENU - CATEGORIES";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Category::label1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Salmon;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(809, 275);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(463, 86);
			this->button3->TabIndex = 7;
			this->button3->Text = L"SPECIAL OFFERS";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Category::button3_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::PeachPuff;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 25, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(640, 168);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(859, 63);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Select from the following categories:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSalmon;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(393, 389);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(463, 96);
			this->button2->TabIndex = 9;
			this->button2->Text = L"APPETIZERS / STARTERS";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Category::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(809, 772);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(463, 96);
			this->button1->TabIndex = 10;
			this->button1->Text = L"BEVERAGES";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Category::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSalmon;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(1193, 398);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(463, 96);
			this->button4->TabIndex = 11;
			this->button4->Text = L"BURGERS";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Category::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSalmon;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(1193, 517);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(463, 96);
			this->button5->TabIndex = 12;
			this->button5->Text = L"PIZZAS";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Category::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightSalmon;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(1193, 634);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(463, 96);
			this->button6->TabIndex = 13;
			this->button6->Text = L"DESSERTS";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Category::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSalmon;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(393, 634);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(463, 96);
			this->button7->TabIndex = 14;
			this->button7->Text = L"SOUPS";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Category::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightSalmon;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(393, 517);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(463, 96);
			this->button8->TabIndex = 15;
			this->button8->Text = L"DESI CUISINE";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Category::button8_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Click on the category icons";
			this->toolTip1->UseAnimation = false;
			// 
			// btnViewCart
			// 
			this->btnViewCart->BackColor = System::Drawing::Color::Salmon;
			this->btnViewCart->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewCart->Location = System::Drawing::Point(1447, 782);
			this->btnViewCart->Margin = System::Windows::Forms::Padding(4);
			this->btnViewCart->Name = L"btnViewCart";
			this->btnViewCart->Size = System::Drawing::Size(223, 86);
			this->btnViewCart->TabIndex = 0;
			this->btnViewCart->Text = L"View Cart";
			this->btnViewCart->UseVisualStyleBackColor = false;
			this->btnViewCart->Click += gcnew System::EventHandler(this, &Category::btnViewCart_Click);
			// 
			// Category
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1924, 1005);
			this->Controls->Add(this->btnViewCart);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Category";
			this->Text = L"Category";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		//Offers^ Offer = gcnew Offers();   //syntax: formname variable name= gcnew formname();
		//Offer->Show();                        //uses variable name
		//this->Hide();     
		ShowForm(gcnew Offers());
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ShowForm(gcnew MyForm());
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Burgers^ Burger = gcnew Burgers();
		Burger->Show();
		this->Hide();*/
		ShowForm(gcnew Burgers());
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Desi^ desi = gcnew Desi();
		desi->Show();
		this->Hide();*/
		ShowForm(gcnew Desi());
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Pizzas^ Pizza = gcnew Pizzas();
		Pizza->Show();
		this->Hide();*/
		ShowForm(gcnew Pizzas());
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Soups^ Soup = gcnew Soups();
		Soup->Show();
		this->Hide();*/
		ShowForm(gcnew Soups());
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Desserts^ Dessert = gcnew Desserts();
		Dessert->Show();
		this->Hide();*/
		ShowForm(gcnew Desserts());
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Beverages^ Beverage = gcnew Beverages();
		Beverage->Show();
		this->Hide();*/
		ShowForm(gcnew Beverages());
	}
	private: System::Void btnViewCart_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowForm(gcnew Cart());
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
