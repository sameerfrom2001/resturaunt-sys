#pragma once
#include <iostream>
#include <fstream>
#include "Customer.h"
#include <msclr\marshal_cppstd.h>

extern Customer cust;
extern string orderid;
using namespace std;
namespace RestaurantSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for confirmOrder
	/// </summary>
	public ref class confirmOrder : public System::Windows::Forms::Form
	{
	public:
		confirmOrder(void)
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
		~confirmOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(confirmOrder::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(373, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Order Details";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(138, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"user_name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(691, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 31);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Order ID :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(846, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 31);
			this->label5->TabIndex = 4;
			this->label5->Text = L"order_id";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 26);
			this->label6->TabIndex = 0;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(29, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(29, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 26);
			this->label8->TabIndex = 2;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(29, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 26);
			this->label9->TabIndex = 3;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(29, 250);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 26);
			this->label10->TabIndex = 4;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(29, 300);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 26);
			this->label11->TabIndex = 5;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(346, 50);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 26);
			this->label12->TabIndex = 6;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(346, 100);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 26);
			this->label13->TabIndex = 7;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(346, 150);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 26);
			this->label14->TabIndex = 8;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(346, 200);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 26);
			this->label15->TabIndex = 9;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(346, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 26);
			this->label16->TabIndex = 10;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(346, 300);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(83, 26);
			this->label17->TabIndex = 11;
			this->label17->Text = L"label17";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(792, 50);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(155, 26);
			this->label24->TabIndex = 18;
			this->label24->Text = L"Total Amount :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(792, 100);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(83, 26);
			this->label25->TabIndex = 19;
			this->label25->Text = L"label25";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(760, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 83);
			this->button1->TabIndex = 20;
			this->button1->Text = L"OK !";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &confirmOrder::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
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
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(30, 183);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(985, 352);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Order Details";
			// 
			// confirmOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1027, 547);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"confirmOrder";
			this->Text = L"confirmOrder";
			this->Load += gcnew System::EventHandler(this, &confirmOrder::confirmOrder_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void confirmOrder_Load(System::Object^ sender, System::EventArgs^ e) {


		fstream idWriter;
		idWriter.open("OrderID.DAT", ios::binary | ios::in | ios::out);
		idWriter.read((char*)&orderid, sizeof(orderid));
		int inid = stoi(orderid);
		inid++;
		orderid = to_string(inid);
		idWriter.write((char*)&orderid, sizeof(orderid));
		cust.setOrderID(orderid);
		idWriter.close();

		float totalAmount = 0;


		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;
		label16->Visible = false;
		label17->Visible = false;
		label25->Visible = false;
		
		int x = cust.getOrderCount();
		label3->Text = msclr::interop::marshal_as<String^>(cust.getName());
		label5->Text = msclr::interop::marshal_as<String^>(cust.getOrderID());
		if (x == 1) {
			label6->Visible = true;
			label6->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(0));
			label12->Visible = true;
			label12->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(0));
			totalAmount = cust.getFoodPrice(0);
		}
		else if (x == 2) {
			label6->Visible = true;
			label6->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(0));
			label12->Visible = true;
			label12->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(0));
			label7->Visible = true;
			label7->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(1));
			label13->Visible = true;
			label13->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(1));
			totalAmount = cust.getFoodPrice(0) + cust.getFoodPrice(1);
		}
		else if (x == 3) {
			label6->Visible = true;
			label6->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(0));
			label12->Visible = true;
			label12->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(0));
			label7->Visible = true;
			label7->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(1));
			label13->Visible = true;
			label13->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(1));
			label8->Visible = true;
			label8->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(2));
			label14->Visible = true;
			label14->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(2));
			totalAmount = cust.getFoodPrice(0) + cust.getFoodPrice(1) + cust.getFoodPrice(2);

		}
		else if (x == 4) {
			label6->Visible = true;
			label6->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(0));
			label12->Visible = true;
			label12->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(0));
			label7->Visible = true;
			label7->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(1));
			label13->Visible = true;
			label13->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(1));
			label8->Visible = true;
			label8->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(2));
			label14->Visible = true;
			label14->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(2));
			label9->Visible = true;
			label9->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(3));
			label15->Visible = true;
			label15->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(3));
			totalAmount = cust.getFoodPrice(0) + cust.getFoodPrice(1) + cust.getFoodPrice(2) + cust.getFoodPrice(3);
		}
		else if (x == 5) {
			label6->Visible = true;
			label6->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(0));
			label12->Visible = true;
			label12->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(0));
			label7->Visible = true;
			label7->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(1));
			label13->Visible = true;
			label13->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(1));
			label8->Visible = true;
			label8->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(2));
			label14->Visible = true;
			label14->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(2));
			label9->Visible = true;
			label9->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(3));
			label15->Visible = true;
			label15->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(3));
			label10->Visible = true;
			label10->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(4));
			label16->Visible = true;
			label16->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(4));
			totalAmount = cust.getFoodPrice(0) + cust.getFoodPrice(1) + cust.getFoodPrice(2) + cust.getFoodPrice(3) + cust.getFoodPrice(4);
		}
		else if (x == 6) {
			label6->Visible = true;
			label6->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(0));
			label12->Visible = true;
			label12->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(0));
			label7->Visible = true;
			label7->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(1));
			label13->Visible = true;
			label13->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(1));
			label8->Visible = true;
			label8->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(2));
			label14->Visible = true;
			label14->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(2));
			label9->Visible = true;
			label9->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(3));
			label15->Visible = true;
			label15->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(3));
			label10->Visible = true;
			label10->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(4));
			label16->Visible = true;
			label16->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(4));
			label11->Visible = true;
			label11->Text = msclr::interop::marshal_as<String^>(cust.getFoodName(5));
			label17->Visible = true;
			label17->Text = msclr::interop::marshal_as<String^>(cust.getFoodQuantS(5));
			totalAmount = cust.getFoodPrice(0) + cust.getFoodPrice(1) + cust.getFoodPrice(2) + cust.getFoodPrice(3) + cust.getFoodPrice(4) + cust.getFoodPrice(5);
		}
		int casted = totalAmount;
		string tAmount = to_string(casted);
		label25->Visible = true;
		label25->Text = msclr::interop::marshal_as<String^>(tAmount);
		
		


		
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		fstream customerFile;
		customerFile.open("Customer.DAT", ios::binary | ios::app);
		customerFile.write((char*)&cust, sizeof(cust));
		customerFile.close();
		Application::Exit();
		


		this->Hide();

	
	}
};
}
