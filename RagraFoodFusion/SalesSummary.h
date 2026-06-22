#pragma once

#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iomanip>
#include <msclr\marshal_cppstd.h>

namespace Project12 {  

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	public ref class SalesSummaryForm : public System::Windows::Forms::Form
	{
	public:
		SalesSummaryForm(void)
		{
			InitializeComponent();
		}

	protected:
		~SalesSummaryForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ btnShowSummary;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->btnShowSummary = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->BackColor = System::Drawing::Color::MistyRose;
			   this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			   this->richTextBox1->ForeColor = System::Drawing::Color::Gray;
			   this->richTextBox1->Location = System::Drawing::Point(12, 12);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(560, 350);
			   this->richTextBox1->TabIndex = 0;
			   this->richTextBox1->Text = L"";
			   // 
			   // btnShowSummary
			   // 
			   this->btnShowSummary->BackColor = System::Drawing::Color::LightCoral;
			   this->btnShowSummary->ForeColor = System::Drawing::Color::Brown;
			   this->btnShowSummary->Location = System::Drawing::Point(220, 370);
			   this->btnShowSummary->Name = L"btnShowSummary";
			   this->btnShowSummary->Size = System::Drawing::Size(150, 40);
			   this->btnShowSummary->TabIndex = 1;
			   this->btnShowSummary->Text = L"Show Sales Summary";
			   this->btnShowSummary->UseVisualStyleBackColor = false;
			   this->btnShowSummary->Click += gcnew System::EventHandler(this, &SalesSummaryForm::btnShowSummary_Click);
			   // 
			   // SalesSummaryForm
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->ClientSize = System::Drawing::Size(584, 421);
			   this->Controls->Add(this->btnShowSummary);
			   this->Controls->Add(this->richTextBox1);
			   this->Name = L"SalesSummaryForm";
			   this->Text = L"Sales Summary";
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   // ========== Logic Section ==========

	private: System::Void btnShowSummary_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::map<std::string, std::pair<int, int>> itemSales; // name -> (price, qtySold)
		std::stringstream summary;

		// Load Inventory
		std::ifstream inventory("inventory.txt");
		if (!inventory.is_open()) {
			richTextBox1->Text = "Error: inventory.txt not found.";
			return;
		}

		std::string line;
		while (getline(inventory, line)) {
			std::stringstream ss(line);
			std::string id, name, priceStr, qtyStr;

			if (!getline(ss, id, '/') || !getline(ss, name, '/') || !getline(ss, priceStr, '/') || !getline(ss, qtyStr)) continue;

			try {
				int price = std::stoi(priceStr);
				itemSales[name] = { price, 0 };
			}
			catch (...) {
				continue;
			}
		}
		inventory.close();

		// Load Order History
		std::ifstream orders("orderhistory.txt");
		if (!orders.is_open()) {
			richTextBox1->Text = "Error: orderhistory.txt not found.";
			return;
		}

		// Skip first line
		getline(orders, line);

		while (getline(orders, line)) {
			size_t colon = line.find(':');
			if (colon == std::string::npos) continue;

			std::string orderData = line.substr(colon + 1);
			std::stringstream ss(orderData);
			std::string item;

			while (getline(ss, item, '/')) {
				size_t arrow = item.find("->");
				if (arrow == std::string::npos) continue;

				std::string itemName = item.substr(0, arrow);
				itemName.erase(0, itemName.find_first_not_of(" \t"));
				itemName.erase(itemName.find_last_not_of(" \t") + 1);

				std::string qtyStr = item.substr(arrow + 2);
				qtyStr.erase(0, qtyStr.find_first_not_of(" \t"));
				qtyStr.erase(qtyStr.find_last_not_of(" \t") + 1);

				if (itemName.empty() || qtyStr.empty()) continue;

				try {
					int quantity = std::stoi(qtyStr);
					if (itemSales.find(itemName) != itemSales.end()) {
						itemSales[itemName].second += quantity;
					}
				}
				catch (...) {
					continue;
				}
			}
		}
		orders.close();

		// Display Summary
		summary << "========== Sales Summary ==========\n";
		int totalRevenue = 0;

		for (auto& entry : itemSales) {
			std::string name = entry.first;
			int price = entry.second.first;
			int qty = entry.second.second;

			if (qty > 0) {
				int subtotal = price * qty;
				totalRevenue += subtotal;
				summary << std::left << std::setw(30) << name
					<< "Qty: " << std::setw(3) << qty
					<< " Unit: Rs." << std::setw(5) << price
					<< " Total: Rs." << subtotal << "\n";
			}
		}
		summary << "-----------------------------------\n";
		summary << "Total Revenue: Rs. " << totalRevenue << "\n";

		String^ result = gcnew String(summary.str().c_str());
		richTextBox1->Text = result;
	}
	};
}

