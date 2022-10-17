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
	/// Summary for SendMessage
	/// </summary>
	public ref class SendMessage : public System::Windows::Forms::Form
	{
	public:
		SendMessage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SendMessage(String^ x)
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
		~SendMessage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ contactName;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ send;
	private: System::Windows::Forms::Label^ sendStatue;


	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::Label^ searchStatue;
	private: System::Windows::Forms::Label^ contact;

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
			this->title = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->contactName = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->send = (gcnew System::Windows::Forms::Button());
			this->sendStatue = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::Button());
			this->searchStatue = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(23, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(749, 91);
			this->title->TabIndex = 0;
			this->title->Text = L"Send Message from";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(279, 114);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(196, 46);
			this->username->TabIndex = 1;
			this->username->Text = L"username";
			// 
			// contactName
			// 
			this->contactName->AutoSize = true;
			this->contactName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactName->Location = System::Drawing::Point(31, 210);
			this->contactName->Name = L"contactName";
			this->contactName->Size = System::Drawing::Size(151, 46);
			this->contactName->TabIndex = 2;
			this->contactName->Text = L"contact";
			this->contactName->Click += gcnew System::EventHandler(this, &SendMessage::contactName_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(229, 210);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 45);
			this->textBox1->TabIndex = 3;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(229, 318);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(387, 241);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 38);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Message to";
			// 
			// send
			// 
			this->send->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->send->Location = System::Drawing::Point(659, 390);
			this->send->Name = L"send";
			this->send->Size = System::Drawing::Size(113, 52);
			this->send->TabIndex = 6;
			this->send->Text = L"Send";
			this->send->UseVisualStyleBackColor = true;
			this->send->Click += gcnew System::EventHandler(this, &SendMessage::send_Click);
			// 
			// sendStatue
			// 
			this->sendStatue->AutoSize = true;
			this->sendStatue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sendStatue->ForeColor = System::Drawing::Color::Blue;
			this->sendStatue->Location = System::Drawing::Point(659, 472);
			this->sendStatue->Name = L"sendStatue";
			this->sendStatue->Size = System::Drawing::Size(111, 38);
			this->sendStatue->TabIndex = 8;
			this->sendStatue->Text = L"Statue";
			// 
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(537, 210);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(128, 46);
			this->search->TabIndex = 9;
			this->search->Text = L"search";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &SendMessage::search_Click);
			// 
			// searchStatue
			// 
			this->searchStatue->AutoSize = true;
			this->searchStatue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchStatue->ForeColor = System::Drawing::Color::Blue;
			this->searchStatue->Location = System::Drawing::Point(307, 269);
			this->searchStatue->Name = L"searchStatue";
			this->searchStatue->Size = System::Drawing::Size(153, 29);
			this->searchStatue->TabIndex = 10;
			this->searchStatue->Text = L"searchStatue";
			// 
			// contact
			// 
			this->contact->AutoSize = true;
			this->contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(12, 455);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(0, 32);
			this->contact->TabIndex = 11;
			// 
			// SendMessage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(784, 571);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->searchStatue);
			this->Controls->Add(this->search);
			this->Controls->Add(this->sendStatue);
			this->Controls->Add(this->send);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->contactName);
			this->Controls->Add(this->username);
			this->Controls->Add(this->title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SendMessage";
			this->Text = L"SendMessage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void contactName_Click(System::Object^ sender, System::EventArgs^ e) {
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

private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
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
					if (strcmp(contact_name, modified_contact_name)==0) {
						found = true;
						contact->Text = textBox1->Text;
						break;
					}
				}
			}
		}
		myfile.close();
	}
	if (found == true) {
		searchStatue->Text = "found";
	}
	else {
		searchStatue->Text = "NOT FOUND";
		textBox1->Text = "";
	}
}

private: System::Void send_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string usernameToString = msclr::interop::marshal_as<std::string>(username->Text);
	std::string contactToString = msclr::interop::marshal_as<std::string>(contact->Text);
	std::string MessageToString = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
	std::string searchToString = msclr::interop::marshal_as<std::string>(searchStatue->Text);

	const char* search_statue = searchToString.c_str();
	if (strcmp(search_statue,"found") == 0) {
		std::fstream myfile;
		myfile.open("Messages.txt", std::ios::app);
		if (myfile.is_open()) {
			myfile << usernameToString << "," << contactToString << "," << MessageToString << "\n";
			sendStatue->Text = "sent";
			myfile.close();
		}
	}
}
};
}
