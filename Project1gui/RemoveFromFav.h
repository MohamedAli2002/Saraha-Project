#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include <queue>
namespace Project1gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RemoveFromFav
	/// </summary>
	public ref class RemoveFromFav : public System::Windows::Forms::Form
	{
	public:
		RemoveFromFav(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		RemoveFromFav(String^ x)
		{
			InitializeComponent();
			username->Text = x;
			showMessages();
				//
				//TODO: Add the constructor code here
				//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RemoveFromFav()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->statue = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(681, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Remove From Fav list of";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(50, 112);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(162, 38);
			this->username->TabIndex = 1;
			this->username->Text = L"username";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(40, 184);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(351, 398);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(397, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(384, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"copy Message and put it here";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(428, 332);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 38);
			this->textBox1->TabIndex = 4;
			// 
			// statue
			// 
			this->statue->AutoSize = true;
			this->statue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statue->Location = System::Drawing::Point(542, 383);
			this->statue->Name = L"statue";
			this->statue->Size = System::Drawing::Size(77, 29);
			this->statue->TabIndex = 5;
			this->statue->Text = L"statue";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(489, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 62);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RemoveFromFav::button1_Click);
			// 
			// RemoveFromFav
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(802, 618);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->statue);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RemoveFromFav";
			this->Text = L"RemoveFromFav";
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
		richTextBox1->Clear();
		std::string Msg = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::queue<std::string> FMessages;
		std::vector<std::string> lines;
		std::fstream myfile2;
		myfile2.open("favorites.txt", std::ios::in);
		if (myfile2.is_open()) {
			std::string line;
			while (getline(myfile2, line)) {
				lines.push_back(line);
				std::vector<std::string> parsedline = delimitedString(line);
				const char* Message = parsedline.at(2).c_str();

				const char* favMessage = Msg.c_str();

				if (strcmp(Message, favMessage) == 0) {
					FMessages.push(line);
					
				}

			}

			myfile2.close();
		}
		for (int i = 0; i < lines.size(); i++)
		{
			const char* favline = FMessages.front().c_str();
			const char* line = lines.at(i).c_str();

			if (strcmp(favline, line) == 0) {
				lines.erase(lines.begin() + i);
				FMessages.pop();
			}
		}
		std::fstream myfile3;
		myfile3.open("favorites.txt", std::ios::out);
		if (myfile3.is_open()) {
			for (int i = 0; i < lines.size(); i++)
			{
				myfile3 << lines.at(i) << "\n";
			}
			statue->Text = "Removed";
			myfile3.close();
		}
		showMessages();
	}

		   void showMessages() {
			   std::string userName = msclr::interop::marshal_as<std::string>(username->Text);
			   std::fstream myfile;
			   myfile.open("favorites.txt", std::ios::in);
			   if (myfile.is_open()) {
				   std::string line;
				   while (getline(myfile, line)) {
					   std::vector<std::string> parsedline = delimitedString(line);

					   const char* usernameAsSender = parsedline.at(0).c_str();
					   const char* usernameAsReciever = parsedline.at(1).c_str();
					   const char* modifiedUserName = userName.c_str();

					   if (strcmp(usernameAsSender, modifiedUserName) == 0 || strcmp(usernameAsReciever, modifiedUserName) == 0) {
						   String^ s = gcnew String(parsedline.at(2).c_str());
						   richTextBox1->AppendText(s + "\n");
					   }
					   parsedline.clear();
				   }
				   myfile.close();
			   }
		   }
};
}
