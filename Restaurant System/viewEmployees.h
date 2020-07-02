#pragma once
#include <fstream>
#include "Manager.h"
#include "Chef.h"
#include <msclr\marshal_cppstd.h>
using namespace std;
extern Manager manSearch;
extern Chef chefSearch;
namespace RestaurantSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for viewEmployees
	/// </summary>
	public ref class viewEmployees : public System::Windows::Forms::Form
	{
	public:
		viewEmployees(void)
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
		~viewEmployees()
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(viewEmployees::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(311, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"View Employees";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(28, 175);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(23, 116);
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
			this->label3->Location = System::Drawing::Point(23, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(322, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Choose Employee Occupation :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Manager", L"Chef" });
			this->comboBox1->Location = System::Drawing::Point(28, 283);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(204, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(440, 104);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(421, 417);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Employee Info :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(204, 351);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 26);
			this->label15->TabIndex = 11;
			this->label15->Text = L"label15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(204, 292);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 26);
			this->label14->TabIndex = 10;
			this->label14->Text = L"label14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(204, 230);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 26);
			this->label13->TabIndex = 9;
			this->label13->Text = L"label13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(204, 176);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 26);
			this->label12->TabIndex = 8;
			this->label12->Text = L"label12";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(204, 116);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 26);
			this->label11->TabIndex = 7;
			this->label11->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(204, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 26);
			this->label10->TabIndex = 6;
			this->label10->Text = L"label10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 351);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 26);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Password :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 292);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 26);
			this->label8->TabIndex = 4;
			this->label8->Text = L"ID :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 26);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Salary :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 26);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Age :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 26);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Occupation :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 26);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Name :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(28, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 61);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &viewEmployees::button1_Click);
			// 
			// viewEmployees
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(885, 533);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"viewEmployees";
			this->Text = L"viewEmployees";
			this->Load += gcnew System::EventHandler(this, &viewEmployees::viewEmployees_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void viewEmployees_Load(System::Object^ sender, System::EventArgs^ e) {
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string searchID = msclr::interop::marshal_as<std::string>(textBox1->Text);
	string searchOccup = msclr::interop::marshal_as<std::string>(comboBox1->Text);
	bool found = false;
	fstream f1;
	
	if (searchOccup == "Manager") {
		f1.open("Manager.DAT", ios::binary | ios::in);
		while (!f1.eof()) {
			f1.read((char*)&manSearch, sizeof(manSearch));
			if (manSearch.getID() == searchID) {
				found = true;

				label10->Text = msclr::interop::marshal_as<String^>(manSearch.getName());
				label11->Text = msclr::interop::marshal_as<String^>(manSearch.getOccupation());
				label12->Text = msclr::interop::marshal_as<String^>(manSearch.getAge());
				label13->Text = msclr::interop::marshal_as<String^>(manSearch.GETSalary());
				label14->Text = msclr::interop::marshal_as<String^>(manSearch.getID());
				label15->Text = msclr::interop::marshal_as<String^>(manSearch.getPassword());
				
				label10->Visible = true;
				label11->Visible = true;
				label12->Visible = true;
				label13->Visible = true;
				label14->Visible = true;
				label15->Visible = true;
			}
			


		}
		
		f1.close();

	}
	else if (searchOccup == "Chef") {
		f1.open("Chef.DAT", ios::binary | ios::in);
		while (!f1.eof()) {
			f1.read((char*)&chefSearch, sizeof(chefSearch));
			if (chefSearch.getID() == searchID) {
				found = true;
				label10->Text = msclr::interop::marshal_as<String^>(chefSearch.getName());
				label11->Text = msclr::interop::marshal_as<String^>(chefSearch.getOccupation());
				label12->Text = msclr::interop::marshal_as<String^>(chefSearch.getAge());
				label13->Text = msclr::interop::marshal_as<String^>(chefSearch.GETSalary());
				label14->Text = msclr::interop::marshal_as<String^>(chefSearch.getID());
				label15->Text = msclr::interop::marshal_as<String^>(chefSearch.getPassword());

				label10->Visible = true;
				label11->Visible = true;
				label12->Visible = true;
				label13->Visible = true;
				label14->Visible = true;
				label15->Visible = true;
			}



		}

		f1.close();


	}


	if (!found) {
		MessageBox::Show("EMPLOYEE NOT FOUND !\nPLEASE TRY AGAIN!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->Clear();
	}


}
};
}
