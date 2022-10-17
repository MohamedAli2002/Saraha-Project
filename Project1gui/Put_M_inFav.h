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
	/// Summary for Put_M_inFav
	/// </summary>
	public ref class Put_M_inFav : public System::Windows::Forms::Form
	{
	public:
		Put_M_inFav(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Put_M_inFav(String^ x)
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
		~Put_M_inFav()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ statue;

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
		void InitializeComponent(void)
		{
			this->title = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statue = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(12, 34);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(714, 69);
			this->title->TabIndex = 0;
			this->title->Text = L"Put Message in Fav list of";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(12, 183);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(323, 423);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(341, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"copy Message and Enter it here";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(347, 280);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(406, 45);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(475, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Put_M_inFav::button1_Click);
			// 
			// statue
			// 
			this->statue->AutoSize = true;
			this->statue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statue->Location = System::Drawing::Point(503, 346);
			this->statue->Name = L"statue";
			this->statue->Size = System::Drawing::Size(92, 32);
			this->statue->TabIndex = 5;
			this->statue->Text = L"statue";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(32, 114);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(162, 38);
			this->username->TabIndex = 6;
			this->username->Text = L"username";
			// 
			// Put_M_inFav
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(802, 618);
			this->Controls->Add(this->username);
			this->Controls->Add(this->statue);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Put_M_inFav";
			this->Text = L"Put_M_inFav";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::vector<std::string>delimitedString(std::string line) {
			std::vector<std::string> result;
			std::stringstream s_stream(line);

			while (s_stream.good()) {
				std::string substr;
				getline(s_stream, substr,',');
				result.push_back(substr);
			}
			return result;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string Msg = msclr::interop::marshal_as<std::string>(textBox1->Text);

		std::fstream myfile2;
		myfile2.open("Messages.txt", std::ios::in);
		if (myfile2.is_open()) {
			std::string line;
			while (getline(myfile2, line)) {
				std::vector<std::string> parsedline = delimitedString(line);
				const char* Message = parsedline.at(2).c_str();

				const char* favMessage = Msg.c_str();

				if (strcmp(Message, favMessage) == 0) {
					std::fstream myfile3;
					myfile3.open("favorites.txt", std::ios::app);
					if (myfile3.is_open()) {
						myfile3 << line << "\n";
						statue->Text = "Added";
						myfile3.close();
					}
				}

			}

			myfile2.close();
		}

	}

		   void showMessages() {
			   std::string userName = msclr::interop::marshal_as<std::string>(username->Text);
			   std::fstream myfile;
			   myfile.open("Messages.txt", std::ios::in);
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
