#pragma once
#include<sstream>
#include<vector>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include "HomeForm.h"

namespace Project1gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
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
	private: System::Windows::Forms::TextBox^ username_textbox;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ statue;
	private: System::Windows::Forms::TextBox^ password_textbox;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statue = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(151, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(12, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OrangeRed;
			this->label3->Location = System::Drawing::Point(12, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"password";
			// 
			// username_textbox
			// 
			this->username_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_textbox->Location = System::Drawing::Point(241, 159);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(267, 49);
			this->username_textbox->TabIndex = 3;
			// 
			// password_textbox
			// 
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->password_textbox->Location = System::Drawing::Point(241, 250);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->PasswordChar = '*';
			this->password_textbox->Size = System::Drawing::Size(267, 49);
			this->password_textbox->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(299, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 66);
			this->button1->TabIndex = 5;
			this->button1->Text = L"login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// statue
			// 
			this->statue->AutoSize = true;
			this->statue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statue->ForeColor = System::Drawing::Color::Red;
			this->statue->Location = System::Drawing::Point(321, 316);
			this->statue->Name = L"statue";
			this->statue->Size = System::Drawing::Size(0, 42);
			this->statue->TabIndex = 6;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(520, 513);
			this->Controls->Add(this->statue);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->username_textbox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	std::vector<std::string>delimitedString(std::string line) {
		std::vector<std::string> result;
		std::stringstream s_stream(line);

			while (s_stream.good()) {
				std::string substr;
				getline(s_stream, substr, ',');
				result.push_back(substr);
			}
			return result;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string enteredUsername = msclr::interop::marshal_as<std::string>(username_textbox->Text);
		std::string enteredPassword = msclr::interop::marshal_as<std::string>(password_textbox->Text);
		std::fstream myfile;
		myfile.open("information.txt",std::ios::in);
		if (myfile.is_open()) {
			std::string line;
			while (getline(myfile, line)) {
				std::vector<std::string> parsedline = delimitedString(line);
				const char* username = parsedline.at(1).c_str();

				const char* modifiedUsername = enteredUsername.c_str();

				if (strcmp(username, modifiedUsername) == 0) {
					const char* password = parsedline.at(2).c_str();

					const char* modifiedPassword = enteredPassword.c_str();

					if (strcmp(password, modifiedPassword) == 0) {
						statue->Text = "Successful";
						//open user's home page
						HomeForm^ homFrm = gcnew HomeForm(username_textbox->Text);
						homFrm->Show();
						
					}
					else {
						statue->Text = "Wrong";
						username_textbox->Text = "";
						password_textbox->Text = "";
					}
				}
			}
			myfile.close();
		}
	}

private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
