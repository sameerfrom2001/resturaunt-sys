#pragma once
#include "Manager.h"
#include "Chef.h"
#include <fstream>
#include <stdio.h>
#include <msclr\marshal_cppstd.h>
using namespace std;
extern Manager manc;
extern Chef chefc;
namespace RestaurantSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for removeEmployees
	/// </summary>
	public ref class removeEmployees : public System::Windows::Forms::Form
	{
	public:
		removeEmployees(void)
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
		~removeEmployees()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(removeEmployees::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(250, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Remove Employees";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(249, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(41, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Employee ID :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(41, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(293, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Choose current occupation :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Manager", L"Chef" });
			this->comboBox1->Location = System::Drawing::Point(46, 243);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(249, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(241, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(299, 64);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Remove Employee !";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &removeEmployees::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(403, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(344, 37);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Removed Successfully !";
			// 
			// removeEmployees
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 488);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"removeEmployees";
			this->Text = L"removeEmployees";
			this->Load += gcnew System::EventHandler(this, &removeEmployees::removeEmployees_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" | comboBox1->Text == "") {
			MessageBox::Show("FILL ALL OF THE REQUIRED INFO !\nPLEASE TRY AGAIN!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Clear();
		
		}
		else {
			string searchID = msclr::interop::marshal_as<std::string>(textBox1->Text);
			string searchOccup = msclr::interop::marshal_as<std::string>(comboBox1->Text);
			
			
			if (searchOccup == "Manager") {
				fstream f1;
				fstream f2;
				f1.open("Manager.DAT", ios::binary | ios::in);
				f2.open("New.DAT", ios::binary | ios::out);
				while (f1.read((char*)&manc,sizeof(manc))) {
					if (searchID != manc.getID()) {
						f2.write((char*)&manc, sizeof(manc));
					}
				}
				f2.close();
				f1.close();
				if (remove("Manager.DAT") != 0) {
					MessageBox::Show("DELETION FAILED !\nPLEASE TRY AGAIN!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else { label4->Visible = true; }
				rename("New.DAT", "Manager.DAT");

			}
			else if (searchOccup == "Chef") {
				fstream f3;
				fstream f4;
				f3.open("Chef.DAT", ios::binary | ios::in);
				f4.open("New.DAT", ios::binary | ios::out);
				while (f3.read((char*)&chefc, sizeof(chefc))) {
					if (searchID != chefc.getID()) {
						f4.write((char*)&chefc, sizeof(chefc));
					}
				}
				f4.close();
				f3.close();
				if (remove("Chef.DAT") != 0) {
					MessageBox::Show("DELETION FAILED !\nPLEASE TRY AGAIN!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else{ label4->Visible = true; }
				rename("New.DAT", "Chef.DAT");
			}

			
		}
	
	}
private: System::Void removeEmployees_Load(System::Object^ sender, System::EventArgs^ e) {
	label4->Visible = false;
}
};
}
