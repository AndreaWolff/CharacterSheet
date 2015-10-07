#pragma once
//#include <msclrmarshal_cppstd.h>
#include <msclr/marshal.h>
#include <sstream>
#include <string>
#include "CharacterGenerator.h"

namespace ConsoleCharacterSheet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void MarshalString(String ^ s, string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			delete char1;
			delete background;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  BackgroundGenBox;
	private: System::Windows::Forms::Button^  StartGeneration;
	private: System::Windows::Forms::TextBox^  PersonalityTextBox;
	private: String^ bGItem;
	private: CharacterGenerator * char1;
	private: CharacterBackground * background;
	private: System::Windows::Forms::TextBox^  personalityBox;
	private: System::Windows::Forms::TextBox^  idealBox;



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
			this->BackgroundGenBox = (gcnew System::Windows::Forms::ComboBox());
			this->StartGeneration = (gcnew System::Windows::Forms::Button());
			this->PersonalityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->personalityBox = (gcnew System::Windows::Forms::TextBox());
			this->idealBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BackgroundGenBox
			// 
			this->BackgroundGenBox->FormattingEnabled = true;
			this->BackgroundGenBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Criminal", L"Folk Hero", L"Hermit" });
			this->BackgroundGenBox->Location = System::Drawing::Point(42, 46);
			this->BackgroundGenBox->Name = L"BackgroundGenBox";
			this->BackgroundGenBox->Size = System::Drawing::Size(121, 21);
			this->BackgroundGenBox->TabIndex = 0;
			this->BackgroundGenBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::BackgroundGenBox_SelectedIndexChanged);
			// 
			// StartGeneration
			// 
			this->StartGeneration->Location = System::Drawing::Point(42, 97);
			this->StartGeneration->Name = L"StartGeneration";
			this->StartGeneration->Size = System::Drawing::Size(147, 23);
			this->StartGeneration->TabIndex = 1;
			this->StartGeneration->Text = L"Start Generation";
			this->StartGeneration->UseVisualStyleBackColor = true;
			this->StartGeneration->Click += gcnew System::EventHandler(this, &MyForm::StartGeneration_Click);
			// 
			// personalityBox
			// 
			this->personalityBox->Location = System::Drawing::Point(42, 366);
			this->personalityBox->Name = L"personalityBox";
			this->personalityBox->Size = System::Drawing::Size(655, 20);
			this->personalityBox->TabIndex = 2;
			this->personalityBox->TextChanged += gcnew System::EventHandler(this, &MyForm::personalityBox_TextChanged);
			// 
			// idealBox
			// 
			this->idealBox->Location = System::Drawing::Point(42, 393);
			this->idealBox->Name = L"idealBox";
			this->idealBox->Size = System::Drawing::Size(655, 20);
			this->idealBox->TabIndex = 3;
			this->idealBox->TextChanged += gcnew System::EventHandler(this, &MyForm::idealBox_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 557);
			this->Controls->Add(this->idealBox);
			this->Controls->Add(this->personalityBox);
			this->Controls->Add(this->StartGeneration);
			this->Controls->Add(this->BackgroundGenBox);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BackgroundGenBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}

	private: System::Void StartGeneration_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		std::string backgroundString;
		std::string personalityTrait;
		std::string idealTrait;
		int backgroundIndex = BackgroundGenBox->SelectedIndex;
		Object^ backgroundItem = BackgroundGenBox->SelectedItem;
		
		bGItem = backgroundItem->ToString();
		MarshalString(bGItem, backgroundString);

		char1 = new CharacterGenerator(backgroundString);
		background = new CharacterBackground(backgroundString);

		personalityTrait = background->getPersonalityTrait();
		String^ personality = gcnew String(personalityTrait.c_str());
		this->personalityBox->Text = personality;

		idealTrait = background->getIdeal();
		String^ ideal = gcnew String(idealTrait.c_str());
		this->idealBox->Text = ideal;

		//MessageBox::Show(personality);
	}

	private: System::Void personalityBox_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void idealBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
};
}