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
	/// Summary for search
	/// </summary>
	public ref class search : public System::Windows::Forms::Form
	{
	public:
		search(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		search(String^ x)
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
		~search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ contactName;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ statue;
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
			this->contactName = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->statue = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(645, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Search Contact in contacts of ";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(281, 128);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(168, 39);
			this->username->TabIndex = 1;
			this->username->Text = L"username";
			// 
			// contactName
			// 
			this->contactName->AutoSize = true;
			this->contactName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactName->Location = System::Drawing::Point(65, 230);
			this->contactName->Name = L"contactName";
			this->contactName->Size = System::Drawing::Size(151, 46);
			this->contactName->TabIndex = 2;
			this->contactName->Text = L"contact";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(256, 229);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 45);
			this->textBox1->TabIndex = 3;
			// 
			// statue
			// 
			this->statue->AutoSize = true;
			this->statue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statue->Location = System::Drawing::Point(317, 301);
			this->statue->Name = L"statue";
			this->statue->Size = System::Drawing::Size(115, 39);
			this->statue->TabIndex = 4;
			this->statue->Text = L"Statue";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(601, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 56);
			this->button1->TabIndex = 5;
			this->button1->Text = L"search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &search::button1_Click);
			// 
			// search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(802, 618);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->statue);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->contactName);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"search";
			this->Text = L"search";
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
		std::string ContactName = msclr::interop::marshal_as<std::string>(textBox1->Text);
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

					const char* modified_contact_name = ContactName.c_str();
					for (int i = 1; i < parsedline.size(); i++)
					{
						const char* contact_name = parsedline.at(i).c_str();
						if (strcmp(contact_name, modified_contact_name) == 0) {
							found = true;
							break;
						}
					}
				}
			}
			myfile.close();
		}
		if (found == true) {
			statue->Text = "found";
		}
		else {
			statue->Text = "NOT FOUND";
			textBox1->Text = "";
		}
	}
};
}
