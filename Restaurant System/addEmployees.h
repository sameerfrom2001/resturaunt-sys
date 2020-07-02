#pragma once
#include "Manager.h"
#include "Chef.h"

#include <fstream>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace RestaurantSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addEmployees
	/// </summary>
	public ref class addEmployees : public System::Windows::Forms::Form
	{
	public:
		addEmployees(void)
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
		~addEmployees()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	protected:

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ salaryTextBox;
	private: System::Windows::Forms::TextBox^ idTextBox;


	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ passTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addEmployees::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->salaryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->passTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(278, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Employees :";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(568, 99);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(275, 22);
			this->nameTextBox->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Manager", L"Chef" });
			this->comboBox1->Location = System::Drawing::Point(568, 156);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(275, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// salaryTextBox
			// 
			this->salaryTextBox->Location = System::Drawing::Point(568, 272);
			this->salaryTextBox->Name = L"salaryTextBox";
			this->salaryTextBox->Size = System::Drawing::Size(275, 22);
			this->salaryTextBox->TabIndex = 4;
			// 
			// idTextBox
			// 
			this->idTextBox->Location = System::Drawing::Point(568, 335);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(275, 22);
			this->idTextBox->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(43) {
				L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60"
			});
			this->comboBox2->Location = System::Drawing::Point(568, 217);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(275, 24);
			this->comboBox2->TabIndex = 6;
			// 
			// passTextBox
			// 
			this->passTextBox->Location = System::Drawing::Point(568, 390);
			this->passTextBox->Name = L"passTextBox";
			this->passTextBox->Size = System::Drawing::Size(275, 22);
			this->passTextBox->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 27);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Enter Employee Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(322, 27);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Choose Employee Occupation :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(248, 27);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Choose Employee Age :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 267);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(247, 27);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Enter Employee Salary :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 330);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(209, 27);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Enter Employee ID :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(282, 27);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Enter Employee Password :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(348, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 62);
			this->button1->TabIndex = 14;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &addEmployees::button1_Click);
			// 
			// addEmployees
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(890, 529);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passTextBox);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->idTextBox);
			this->Controls->Add(this->salaryTextBox);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label1);
			this->Name = L"addEmployees";
			this->Text = L"addEmployees";
			this->Load += gcnew System::EventHandler(this, &addEmployees::addEmployees_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (nameTextBox->Text == "" || comboBox1->Text == "" || comboBox2->Text == "" || salaryTextBox->Text == "" || idTextBox->Text == "" || passTextBox->Text == "") {
			MessageBox::Show("PLEASE FILL ALL REQUIRED FIELDS !\nPLEASE TRY AGAIN!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			string tempName = msclr::interop::marshal_as <std::string>(nameTextBox->Text);
			string tempOccup = msclr::interop::marshal_as <std::string>(comboBox1->Text);
			string strAge = msclr::interop::marshal_as <std::string>(comboBox2->Text);
			string strSalary = msclr::interop::marshal_as <std::string>(salaryTextBox->Text);
			string tempID = msclr::interop::marshal_as <std::string>(idTextBox->Text);
			string tempPassword = msclr::interop::marshal_as <std::string>(passTextBox->Text);
			// converting back to their respective types
			int tempAge = stoi(strAge);
			double tempSalary = stod(strSalary);


			if (tempOccup == "Manager") {
				Manager tempMan;
				tempMan.setName(tempName);
				tempMan.setOccuption(tempOccup);
				tempMan.setAge(tempAge);
				tempMan.setSalary(tempSalary);
				tempMan.setID(tempID);
				tempMan.setPassword(tempPassword);

				fstream obj1;
				obj1.open("Manager.DAT", ios::binary | ios::app);
				obj1.write((char*)&tempMan, sizeof(tempMan));
				obj1.close();




			}
			else if (tempOccup == "Chef") {
				Chef tempChef;
				tempChef.setName(tempName);
				tempChef.setOccuption(tempOccup);
				tempChef.setAge(tempAge);
				tempChef.setSalary(tempSalary);
				tempChef.setID(tempID);
				tempChef.setPassword(tempPassword);


				fstream obj2;
				obj2.open("Chef.DAT", ios::binary | ios::app);
				obj2.write((char*)&tempChef, sizeof(tempChef));
				obj2.close();

				MessageBox::Show("EMPLOYEE ADDED SUCCESSFULLY !", "SUCCESS", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				this->Hide();
			}



		}
		
		
		

	}
private: System::Void addEmployees_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
