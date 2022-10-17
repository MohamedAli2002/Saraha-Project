#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <string>


using namespace System;
namespace Project1gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ IdTextbox;
	protected:

	private: System::Windows::Forms::TextBox^ PasswordTextbox;
	protected:


	private: System::Windows::Forms::TextBox^ UserNameTextbox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	protected:

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
			this->IdTextbox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->UserNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// IdTextbox
			// 
			this->IdTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IdTextbox->Location = System::Drawing::Point(226, 106);
			this->IdTextbox->Name = L"IdTextbox";
			this->IdTextbox->Size = System::Drawing::Size(281, 53);
			this->IdTextbox->TabIndex = 0;
			this->IdTextbox->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// PasswordTextbox
			// 
			this->PasswordTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextbox->Location = System::Drawing::Point(226, 248);
			this->PasswordTextbox->Name = L"PasswordTextbox";
			this->PasswordTextbox->Size = System::Drawing::Size(281, 53);
			this->PasswordTextbox->TabIndex = 1;
			// 
			// UserNameTextbox
			// 
			this->UserNameTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameTextbox->Location = System::Drawing::Point(226, 179);
			this->UserNameTextbox->Name = L"UserNameTextbox";
			this->UserNameTextbox->Size = System::Drawing::Size(281, 53);
			this->UserNameTextbox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(2, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(2, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 42);
			this->label2->TabIndex = 4;
			this->label2->Text = L"UserName";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OrangeRed;
			this->label3->Location = System::Drawing::Point(2, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 42);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Passsword";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(290, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 78);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::OrangeRed;
			this->label4->Location = System::Drawing::Point(68, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(383, 69);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Registeration";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(284, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 32);
			this->label5->TabIndex = 8;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(519, 511);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->UserNameTextbox);
			this->Controls->Add(this->PasswordTextbox);
			this->Controls->Add(this->IdTextbox);
			this->Name = L"RegisterForm";
			this->Text = L"Registeration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string id = msclr::interop::marshal_as<std::string>(IdTextbox->Text);
	std::string username = msclr::interop::marshal_as<std::string>(UserNameTextbox->Text);
	std::string password = msclr::interop::marshal_as<std::string>(PasswordTextbox->Text);
	std::fstream myfile;
	myfile.open("information.txt", std::ios::app);
	if (myfile.is_open()) {
		myfile << id << "," << username << "," << password << "\n";
		myfile.close();
	}

	std::fstream myfile2;
	myfile2.open("contacts.txt", std::ios::app);
	if (myfile2.is_open()) {
		myfile2 << username << "\n";
		myfile2.close();
	}

	label5->Text = "Success";
}
};
}
