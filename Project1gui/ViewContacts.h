#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include <msclr/marshal_cppstd.h>
namespace Project1gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewContacts
	/// </summary>
	public ref class ViewContacts : public System::Windows::Forms::Form
	{
	public:
		ViewContacts(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ViewContacts(String^ x)
		{
			InitializeComponent();
			username->Text = x;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewContacts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ username;
	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(701, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"view all contacts of";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(48, 127);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(162, 38);
			this->username->TabIndex = 1;
			this->username->Text = L"username";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(313, 127);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(317, 439);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(70, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 64);
			this->button1->TabIndex = 3;
			this->button1->Text = L"view";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ViewContacts::button1_Click);
			// 
			// ViewContacts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(802, 618);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ViewContacts";
			this->Text = L"ViewContacts";
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
		std::string userName = msclr::interop::marshal_as<std::string>(username->Text);
		std::vector<std::string> contacts;
		bool found = false;
		std::fstream myfile;
		myfile.open("contacts.txt", std::ios::in);
		if (myfile.is_open()) {
			std::string line;
			while (getline(myfile, line)) {//search about username in contacts file
				std::vector<std::string> parsedline = delimitedString(line);
				const char* username = parsedline.at(0).c_str();

				const char* modifiedUsername = userName.c_str();

				if (strcmp(username, modifiedUsername) == 0) {//when find username break
					for (int i = 1; i < parsedline.size(); i++)
					{
						contacts.push_back(parsedline.at(i));
					}
				}
			}
			myfile.close();
		}
		std::string newline;
		for (int i = 0; i < contacts.size(); i++)
		{
			newline = newline + contacts.at(i) + "\n";
		}
		String^ con = gcnew System::String(newline.c_str());
		richTextBox1->Text = con;
	}
};
}
