#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include <stack>

namespace Project1gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for undo
	/// </summary>
	public ref class undo : public System::Windows::Forms::Form
	{
	public:
		undo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		undo(String^ x)
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
		~undo()
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ statue;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->statue = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(659, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"undo last sent Message";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(254, 128);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(162, 38);
			this->username->TabIndex = 1;
			this->username->Text = L"username";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(24, 215);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(390, 220);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(486, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"undo Message";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &undo::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(486, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(276, 57);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Show Message";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &undo::button2_Click);
			// 
			// statue
			// 
			this->statue->AutoSize = true;
			this->statue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statue->ForeColor = System::Drawing::Color::Black;
			this->statue->Location = System::Drawing::Point(548, 459);
			this->statue->Name = L"statue";
			this->statue->Size = System::Drawing::Size(106, 38);
			this->statue->TabIndex = 5;
			this->statue->Text = L"statue";
			// 
			// undo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(784, 571);
			this->Controls->Add(this->statue);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"undo";
			this->Text = L"undo";
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
	void showMessage() {
		std::stack<std::string> Messages;
		std::string userName = msclr::interop::marshal_as<std::string>(username->Text);
		std::fstream myfile;
		myfile.open("Messages.txt", std::ios::in);
		if (myfile.is_open()) {
			std::string line;
			while (getline(myfile, line)) {//search about username in Messages file
				std::vector<std::string> parsedline = delimitedString(line);

				if (strcmp(parsedline.at(0).c_str(), userName.c_str()) == 0) {//when find username break
					Messages.push(parsedline.at(2));
				}
			}
			myfile.close();
		}
		String^ LastMessage = gcnew System::String(Messages.top().c_str());
		richTextBox1->Text = LastMessage;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::stack<std::string> Messages;
		std::vector<std::string> carry;
		std::string userName = msclr::interop::marshal_as<std::string>(username->Text);
		std::fstream myfile;
		myfile.open("Messages.txt", std::ios::in);
		if (myfile.is_open()) {
			std::string line;
			int counter=-1;
			int x = 0;
			while (getline(myfile, line)) {//search about username in Messages file
				std::vector<std::string> parsedline = delimitedString(line);
				carry.push_back(line);

				++counter;
				if (strcmp(parsedline.at(0).c_str(), userName.c_str()) == 0) {//when find username break
					Messages.push(parsedline.at(2));
					x = counter;
				}
				
			}
			carry.erase(carry.begin() + x);
			myfile.close();
		}
		std::fstream myfile2;
		myfile2.open("Messages.txt", std::ios::out);
		if (myfile2.is_open()) {
			for (int i = 0; i < carry.size(); i++){
				myfile2 << carry.at(i) << "\n";
			}
		}
		statue->Text = "success";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	showMessage();
}
};
}
