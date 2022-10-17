#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include <stack>
#include <string>
namespace Project1gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RecievedFrom
	/// </summary>
	public ref class RecievedFrom : public System::Windows::Forms::Form
	{
	public:
		RecievedFrom(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RecievedFrom(String^ x)
		{
			InitializeComponent();
			username->Text = x;
			chooseID();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RecievedFrom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label3;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(368, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Messages to";
			this->label1->Click += gcnew System::EventHandler(this, &RecievedFrom::label1_Click);
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(411, 35);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(295, 69);
			this->username->TabIndex = 1;
			this->username->Text = L"username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 38);
			this->label2->TabIndex = 2;
			this->label2->Text = L"From";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(433, 147);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(357, 364);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(90, 511);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 53);
			this->button2->TabIndex = 7;
			this->button2->Text = L"view";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RecievedFrom::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(195, 443);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 38);
			this->textBox1->TabIndex = 11;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(195, 150);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(207, 261);
			this->richTextBox2->TabIndex = 12;
			this->richTextBox2->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 443);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 38);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Enter ID";
			// 
			// RecievedFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(802, 618);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RecievedFrom";
			this->Text = L"RecievedFrom";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
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
	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::stack<std::string>contactName;
	richTextBox1->Text = "";
	std::string choosenID = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::fstream myfile3;
	myfile3.open("information.txt", std::ios::in);
	if (myfile3.is_open()) {
		std::string line;
		while (getline(myfile3, line))
		{
			std::vector<std::string> parsedline = delimitedString(line);

			 if (strcmp(parsedline.at(0).c_str(), choosenID.c_str())==0) {//when find ID
				 contactName.push(parsedline.at(1));
				 break;
			 }

		}
		myfile3.close();
	}

	std::string userName = msclr::interop::marshal_as<std::string>(username->Text);
	std::stack<std::string> Messages;
	std::fstream myfile4;
	myfile4.open("Messages.txt", std::ios::in);
	if (myfile4.is_open()) {
		std::string line;
		while (getline(myfile4, line)) {//search about username in Messages file
			std::vector<std::string> parsedline = delimitedString(line);

			if (strcmp(parsedline.at(1).c_str(), userName.c_str()) == 0) {//when find username

				if (strcmp(parsedline.at(0).c_str(), contactName.top().c_str())==0) {
					Messages.push(parsedline.at(2));
				}
				
			}
		}
		myfile4.close();
	}

	while (!Messages.empty())
	{
		String^ MLTO = gcnew System::String(Messages.top().c_str());
		richTextBox1->AppendText(MLTO + "\n");
		Messages.pop();
	}
}
void chooseID() {
	std::string userName = msclr::interop::marshal_as<std::string>(username->Text);
	std::stack<std::string> contacts;
	std::fstream myfile;
	myfile.open("Messages.txt", std::ios::in);
	if (myfile.is_open()) {
		std::string line;
		while (getline(myfile, line)) {//search about username in contacts file
			std::vector<std::string> parsedline = delimitedString(line);

			if (strcmp(parsedline.at(1).c_str(), userName.c_str()) == 0) {//when find username
				const char* sender = parsedline.at(0).c_str();
				contacts.push(parsedline.at(0));
				
			}
		}
		myfile.close();
	}

	while(!contacts.empty())
	{
		std::fstream myfile2;
		myfile2.open("information.txt", std::ios::in);
		if (myfile2.is_open()) {
		std::string line;
		while (getline(myfile2, line))
		{
			std::vector<std::string> parsedline = delimitedString(line);

			if (strcmp(parsedline.at(1).c_str(), contacts.top().c_str()) == 0) {//when find username
				String^ CID = gcnew System::String(parsedline.at(0).c_str());
				richTextBox2->AppendText(CID + "\n");

			}
		}
		myfile2.close();
		}
		contacts.pop();
	}

}
};
}
