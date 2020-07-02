#pragma once
#include "Manager.h"
#include "managerLogin.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>
extern Manager man1;
using namespace std;
namespace RestaurantSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for staffLogin
	/// </summary>
	public ref class staffLogin : public System::Windows::Forms::Form
	{
	public:
		staffLogin(void)
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
		~staffLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ idTextBox;
	private: System::Windows::Forms::TextBox^ passTextBox;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(staffLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(168, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(291, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STAFF LOGIN";
			// 
			// idTextBox
			// 
			this->idTextBox->Location = System::Drawing::Point(364, 192);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(240, 22);
			this->idTextBox->TabIndex = 1;
			// 
			// passTextBox
			// 
			this->passTextBox->Location = System::Drawing::Point(364, 274);
			this->passTextBox->Name = L"passTextBox";
			this->passTextBox->PasswordChar = '*';
			this->passTextBox->Size = System::Drawing::Size(240, 22);
			this->passTextBox->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 40);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter Your ID :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(324, 37);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter Your Password :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(204, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 53);
			this->button1->TabIndex = 5;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &staffLogin::button1_Click);
			// 
			// staffLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(616, 406);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passTextBox);
			this->Controls->Add(this->idTextBox);
			this->Controls->Add(this->label1);
			this->Name = L"staffLogin";
			this->Text = L"staffLogin";
			this->Load += gcnew System::EventHandler(this, &staffLogin::staffLogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string id1 = msclr::interop::marshal_as < std::string>(idTextBox->Text);
		std::string password1 = msclr::interop::marshal_as < std::string>(passTextBox->Text);
		fstream read;
		read.open("Manager.DAT", ios::binary | ios::in);
	
		bool found = false;
		while (!read.eof()) {
			read.read((char*)&man1, sizeof(man1));
			if (man1.getID() == id1 && man1.getPassword() == password1) {
				found = true;
				this->Hide();
				managerLogin^ mngr = gcnew managerLogin;
				mngr->ShowDialog();
				

			}
				
		}
		read.close();
		if (found == false) {
			MessageBox::Show("YOUR LOGIN INFORMATION IS INCORRECT!\nPLEASE TRY AGAIN!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			idTextBox->Clear();
			passTextBox->Clear();
		}
		
	}
	private: System::Void staffLogin_Load(System::Object^ sender, System::EventArgs^ e) {
		//only used while running for the first time to set a login
		/*Manager sam;
		fstream f1;
		f1.open("Manager.DAT",ios::binary|ios::out);
		sam.setName("Sameer");
		sam.setOccuption("Manager");
		sam.setAge(19);
		sam.setSalary(90000.0);
		sam.setID("F2019");
		sam.setPassword("sam123");

		f1.write((char*)&sam, sizeof(sam));
		f1.close();*/
	}
};
}
