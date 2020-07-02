#pragma once
#include <fstream>
#include "Food.h"
#include "Customer.h"
#include <msclr\marshal_cppstd.h>
using namespace std;
extern Customer cust;
extern int ordercount;
namespace RestaurantSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for fastfoods
	/// </summary>
	public ref class fastfoods : public System::Windows::Forms::Form
	{
	public:
		fastfoods(void)
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
		~fastfoods()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ combo5;
	protected:

	private: System::Windows::Forms::ComboBox^ combo4;
	protected:

	private: System::Windows::Forms::ComboBox^ combo3;

	private: System::Windows::Forms::ComboBox^ combo2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ combo1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fastfoods::typeid));
			this->combo5 = (gcnew System::Windows::Forms::ComboBox());
			this->combo4 = (gcnew System::Windows::Forms::ComboBox());
			this->combo3 = (gcnew System::Windows::Forms::ComboBox());
			this->combo2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->combo1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// combo5
			// 
			this->combo5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo5->FormattingEnabled = true;
			this->combo5->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10"
			});
			this->combo5->Location = System::Drawing::Point(473, 379);
			this->combo5->Name = L"combo5";
			this->combo5->Size = System::Drawing::Size(96, 27);
			this->combo5->TabIndex = 52;
			this->combo5->Text = L"Quantity";
			// 
			// combo4
			// 
			this->combo4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo4->FormattingEnabled = true;
			this->combo4->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10"
			});
			this->combo4->Location = System::Drawing::Point(473, 311);
			this->combo4->Name = L"combo4";
			this->combo4->Size = System::Drawing::Size(96, 27);
			this->combo4->TabIndex = 51;
			this->combo4->Text = L"Quantity";
			// 
			// combo3
			// 
			this->combo3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo3->FormattingEnabled = true;
			this->combo3->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10"
			});
			this->combo3->Location = System::Drawing::Point(473, 233);
			this->combo3->Name = L"combo3";
			this->combo3->Size = System::Drawing::Size(96, 27);
			this->combo3->TabIndex = 50;
			this->combo3->Text = L"Quantity";
			// 
			// combo2
			// 
			this->combo2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo2->FormattingEnabled = true;
			this->combo2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10"
			});
			this->combo2->Location = System::Drawing::Point(473, 167);
			this->combo2->Name = L"combo2";
			this->combo2->Size = System::Drawing::Size(96, 27);
			this->combo2->TabIndex = 49;
			this->combo2->Text = L"Quantity";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(771, 375);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 31);
			this->label7->TabIndex = 48;
			this->label7->Text = L"350Rs";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(771, 304);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 31);
			this->label6->TabIndex = 47;
			this->label6->Text = L"100Rs";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(771, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 31);
			this->label5->TabIndex = 46;
			this->label5->Text = L"250Rs";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(771, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 31);
			this->label4->TabIndex = 45;
			this->label4->Text = L"800Rs";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(771, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 31);
			this->label3->TabIndex = 44;
			this->label3->Text = L"400Rs";
			// 
			// combo1
			// 
			this->combo1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo1->FormattingEnabled = true;
			this->combo1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10"
			});
			this->combo1->Location = System::Drawing::Point(473, 100);
			this->combo1->Name = L"combo1";
			this->combo1->Size = System::Drawing::Size(96, 27);
			this->combo1->TabIndex = 43;
			this->combo1->Text = L"Quantity";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(424, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 50);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Back To Menu";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &fastfoods::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(401, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 50);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Fast Food";
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->ForeColor = System::Drawing::Color::Black;
			this->checkBox5->Location = System::Drawing::Point(91, 370);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(119, 41);
			this->checkBox5->TabIndex = 40;
			this->checkBox5->Text = L"Tacos";
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
			this->checkBox4->Location = System::Drawing::Point(91, 299);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(207, 41);
			this->checkBox4->TabIndex = 39;
			this->checkBox4->Text = L"French Fries";
			this->checkBox4->UseVisualStyleBackColor = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(91, 228);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(178, 41);
			this->checkBox3->TabIndex = 38;
			this->checkBox3->Text = L"Shwarma ";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(91, 162);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(117, 41);
			this->checkBox2->TabIndex = 37;
			this->checkBox2->Text = L"Pizza ";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(91, 95);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(242, 41);
			this->checkBox1->TabIndex = 36;
			this->checkBox1->Text = L"Cheese Burger";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// fastfoods
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(996, 538);
			this->Controls->Add(this->combo5);
			this->Controls->Add(this->combo4);
			this->Controls->Add(this->combo3);
			this->Controls->Add(this->combo2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->combo1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Name = L"fastfoods";
			this->Text = L"fastfoods";
			this->Load += gcnew System::EventHandler(this, &fastfoods::fastfoods_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fastfoods_Load(System::Object^ sender, System::EventArgs^ e) {
		combo1->Text = "1";
		combo2->Text = "1";
		combo3->Text = "1";
		combo4->Text = "1";
		combo5->Text = "1";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string quant1 = msclr::interop::marshal_as<std::string>(combo1->Text);
	string quant2 = msclr::interop::marshal_as<std::string>(combo2->Text);
	string quant3 = msclr::interop::marshal_as<std::string>(combo3->Text);
	string quant4 = msclr::interop::marshal_as<std::string>(combo4->Text);
	string quant5 = msclr::interop::marshal_as<std::string>(combo5->Text);
	int tempQuant1 = stoi(quant1);
	int tempQuant2 = stoi(quant2);
	int tempQuant3 = stoi(quant3);
	int tempQuant4 = stoi(quant4);
	int tempQuant5 = stoi(quant5);
	Food* tempFood1 = new Food;
	Food* tempFood2 = new Food;
	Food* tempFood3 = new Food;
	Food* tempFood4 = new Food;
	Food* tempFood5 = new Food;

	if (checkBox1->Checked) {
		tempFood1->setName("Cheese Burger");
		tempFood1->setPrice((400.0f * tempQuant1));
		tempFood1->setQuantity(tempQuant1);
		cust.setOrder(tempFood1);
		ordercount++;
	}
	if (checkBox2->Checked) {
		tempFood2->setName("Pizza");
		tempFood2->setPrice((800.0f * tempQuant2));
		tempFood2->setQuantity(tempQuant2);
		cust.setOrder(tempFood2);
		ordercount++;
	}
	if (checkBox3->Checked) {
		tempFood3->setName("Shwarma");
		tempFood3->setPrice((250.0f * tempQuant3));
		tempFood3->setQuantity(tempQuant3);
		cust.setOrder(tempFood3);
		ordercount++;
	}
	if (checkBox4->Checked) {
		tempFood4->setName("French Fries");
		tempFood4->setPrice((100.0f * tempQuant4));
		tempFood4->setQuantity(tempQuant4);
		cust.setOrder(tempFood4);
		ordercount++;
	}
	if (checkBox5->Checked) {
		tempFood5->setName("Tacos");
		tempFood5->setPrice((250.0f * tempQuant5));
		tempFood5->setQuantity(tempQuant5);
		cust.setOrder(tempFood5);
		ordercount++;
	}


	this->Hide();

}
};
}
