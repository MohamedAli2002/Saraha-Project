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
	/// Summary for AddUserForm
	/// </summary>
	public ref class auForm : public System::Windows::Forms::Form
	{
	public:

		auForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		auForm(String^ x)
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
		~auForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ satatue;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ username;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->satatue = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(279, 194);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(275, 45);
			this->textBox1->TabIndex = 0;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->Location = System::Drawing::Point(13, 197);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(226, 38);
			this->Name->TabIndex = 1;
			this->Name->Text = L"Contact Name";
			this->Name->Click += gcnew System::EventHandler(this, &auForm::Name_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(594, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 66);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &auForm::button1_Click);
			// 
			// satatue
			// 
			this->satatue->AutoSize = true;
			this->satatue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->satatue->Location = System::Drawing::Point(273, 268);
			this->satatue->Name = L"satatue";
			this->satatue->Size = System::Drawing::Size(92, 32);
			this->satatue->TabIndex = 3;
			this->satatue->Text = L"statue";
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(97, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(562, 91);
			this->title->TabIndex = 4;
			this->title->Text = L"Add Contact to";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(314, 100);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(196, 46);
			this->username->TabIndex = 5;
			this->username->Text = L"username";
			// 
			// auForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(802, 618);
			this->Controls->Add(this->username);
			this->Controls->Add(this->title);
			this->Controls->Add(this->satatue);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Text = L"AddUserForm";
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
		std::string addedUsername = msclr::interop::marshal_as<std::string>(textBox1->Text);
		bool found = false;
		std::fstream myfile;
		myfile.open("contacts.txt", std::ios::in);
		if (myfile.is_open()) {
			std::string line;
			while (getline(myfile, line)) {//search about username in contacts file
				std::vector<std::string> parsedline = delimitedString(line);
				const char* username = parsedline.at(0).c_str();

				const char* modifiedUsername = addedUsername.c_str();

				if (strcmp(username, modifiedUsername) == 0) {//when find username break
					found = true;
				}
			}
			myfile.close();
		}
		if (found == true) {
			std::vector<std::string> carry;
			int counter = -1;
			std::string line;
			std::fstream myfile2;
			myfile2.open("contacts.txt", std::ios::in);
			if (myfile2.is_open()) {
				while (getline(myfile2, line)) {//put every line in file in cell of vector "carry"
					carry.push_back(line);
				}
				myfile2.close();
			}

			std::fstream myfile3;
			myfile3.open("contacts.txt", std::ios::in);
			if (myfile3.is_open()) {
				while (getline(myfile3, line)) {//search about username in contacts file
					std::vector<std::string> parsedline = delimitedString(line);
					const char* username2 = parsedline.at(0).c_str();
					const char* modifiedUsername2 = userName.c_str();
					++counter;
					if (strcmp(username2, modifiedUsername2) == 0) {//when find username break
						break;
					}

				}

				std::string newline;
				newline = carry.at(counter);
				newline = newline + "," + addedUsername;
				carry.erase(carry.begin() + counter);
				carry.insert(carry.begin() + counter, newline);
				myfile3.close();
			}

			std::fstream myfile4;
			myfile4.open("contacts.txt", std::ios::out);//write in the same file every cell of vector in line in file
			if (myfile4.is_open()) {
				for (unsigned int i = 0; i < carry.size(); i++) {
					myfile4 << carry.at(i) << "\n";
				}
				myfile4.close();
			}
			satatue->Text = "Added";
		}
		else {
			satatue->Text = "contact you want to add is not on system";
			Name->Text = "";
		}
	}
	private: System::Void Name_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
