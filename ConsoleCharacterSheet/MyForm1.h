#pragma once
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
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
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
			delete raceClass;
			delete personality;
			delete ideal;
			delete bond;
			delete flaw;

			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^  raceBox;
	private: System::Windows::Forms::ComboBox^  ClassBox;
	private: System::Windows::Forms::ComboBox^  GenderBox;
	private: System::Windows::Forms::ComboBox^  BackgroundGenBox;

	private: System::Windows::Forms::TextBox^  personalityBox;
	private: System::Windows::Forms::TextBox^  idealBox;
	private: System::Windows::Forms::TextBox^  bondBox;
	private: System::Windows::Forms::TextBox^  flawBox;

	private: System::Windows::Forms::Button^  StartGeneration;

	private: CharacterGenerator * char1;
	private: CharacterBackground * background;
	private: CharacterRace * raceClass;

	private: String^ genItem;
	private: String^ racItem;
	private: String^ clasItem;
	private: String^ player;
	private: String^ character;
	private: String^ aliItem;
	private: String^ bGItem;
	private: String^ personality;
	private: String^ ideal;
	private: String^ bond;
	private: String^ flaw;
	private: System::Windows::Forms::TextBox^  characterName;
	private: System::Windows::Forms::TextBox^  playerName;

	private: System::Windows::Forms::Label^  raceLabel;
	private: System::Windows::Forms::Label^  classLabel;
	private: System::Windows::Forms::Label^  genderLabel;
	private: System::Windows::Forms::Label^  backgroundLabel;
	private: System::Windows::Forms::Label^  playernameLabel;
	private: System::Windows::Forms::Label^  charnameLabel;
	private: System::Windows::Forms::ComboBox^  alignmentBox;
	private: System::Windows::Forms::Label^  alignmentLabel;

	private: System::Windows::Forms::Label^  ageLabel;
	private: System::Windows::Forms::NumericUpDown^  ageBox;



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
			this->personalityBox = (gcnew System::Windows::Forms::TextBox());
			this->idealBox = (gcnew System::Windows::Forms::TextBox());
			this->bondBox = (gcnew System::Windows::Forms::TextBox());
			this->flawBox = (gcnew System::Windows::Forms::TextBox());
			this->GenderBox = (gcnew System::Windows::Forms::ComboBox());
			this->raceBox = (gcnew System::Windows::Forms::ComboBox());
			this->ClassBox = (gcnew System::Windows::Forms::ComboBox());
			this->characterName = (gcnew System::Windows::Forms::TextBox());
			this->playerName = (gcnew System::Windows::Forms::TextBox());
			this->raceLabel = (gcnew System::Windows::Forms::Label());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->backgroundLabel = (gcnew System::Windows::Forms::Label());
			this->playernameLabel = (gcnew System::Windows::Forms::Label());
			this->charnameLabel = (gcnew System::Windows::Forms::Label());
			this->alignmentBox = (gcnew System::Windows::Forms::ComboBox());
			this->alignmentLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->ageBox = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageBox))->BeginInit();
			this->SuspendLayout();
			// 
			// BackgroundGenBox
			// 
			this->BackgroundGenBox->FormattingEnabled = true;
			this->BackgroundGenBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Criminal", L"Folk Hero", L"Hermit" });
			this->BackgroundGenBox->Location = System::Drawing::Point(410, 230);
			this->BackgroundGenBox->Name = L"BackgroundGenBox";
			this->BackgroundGenBox->Size = System::Drawing::Size(121, 21);
			this->BackgroundGenBox->TabIndex = 0;
			this->BackgroundGenBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::BackgroundGenBox_SelectedIndexChanged);
			// 
			// StartGeneration
			// 
			this->StartGeneration->Location = System::Drawing::Point(293, 300);
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
			// bondBox
			// 
			this->bondBox->Location = System::Drawing::Point(42, 420);
			this->bondBox->Name = L"bondBox";
			this->bondBox->Size = System::Drawing::Size(655, 20);
			this->bondBox->TabIndex = 4;
			this->bondBox->TextChanged += gcnew System::EventHandler(this, &MyForm::bondBox_TextChanged);
			// 
			// flawBox
			// 
			this->flawBox->Location = System::Drawing::Point(42, 447);
			this->flawBox->Name = L"flawBox";
			this->flawBox->Size = System::Drawing::Size(655, 20);
			this->flawBox->TabIndex = 5;
			this->flawBox->TextChanged += gcnew System::EventHandler(this, &MyForm::flawBox_TextChanged);
			// 
			// GenderBox
			// 
			this->GenderBox->FormattingEnabled = true;
			this->GenderBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->GenderBox->Location = System::Drawing::Point(410, 173);
			this->GenderBox->Name = L"GenderBox";
			this->GenderBox->Size = System::Drawing::Size(121, 21);
			this->GenderBox->TabIndex = 6;
			this->GenderBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::GenderBox_SelectedIndexChanged);
			// 
			// raceBox
			// 
			this->raceBox->FormattingEnabled = true;
			this->raceBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Human", L"Elf", L"Dwarf" });
			this->raceBox->Location = System::Drawing::Point(410, 49);
			this->raceBox->Name = L"raceBox";
			this->raceBox->Size = System::Drawing::Size(121, 21);
			this->raceBox->TabIndex = 7;
			this->raceBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::raceBox_SelectedIndexChanged);
			// 
			// ClassBox
			// 
			this->ClassBox->FormattingEnabled = true;
			this->ClassBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Fighter", L"Cleric", L"Wizard", L"Ranger" });
			this->ClassBox->Location = System::Drawing::Point(410, 109);
			this->ClassBox->Name = L"ClassBox";
			this->ClassBox->Size = System::Drawing::Size(121, 21);
			this->ClassBox->TabIndex = 8;
			// 
			// characterName
			// 
			this->characterName->Location = System::Drawing::Point(220, 111);
			this->characterName->Name = L"characterName";
			this->characterName->Size = System::Drawing::Size(121, 20);
			this->characterName->TabIndex = 10;
			// 
			// playerName
			// 
			this->playerName->Location = System::Drawing::Point(220, 48);
			this->playerName->Name = L"playerName";
			this->playerName->Size = System::Drawing::Size(121, 20);
			this->playerName->TabIndex = 11;
			// 
			// raceLabel
			// 
			this->raceLabel->AutoSize = true;
			this->raceLabel->Location = System::Drawing::Point(410, 30);
			this->raceLabel->Name = L"raceLabel";
			this->raceLabel->Size = System::Drawing::Size(76, 13);
			this->raceLabel->TabIndex = 12;
			this->raceLabel->Text = L"Choose a race";
			this->raceLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// classLabel
			// 
			this->classLabel->AutoSize = true;
			this->classLabel->Location = System::Drawing::Point(413, 90);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(79, 13);
			this->classLabel->TabIndex = 13;
			this->classLabel->Text = L"Choose a class";
			// 
			// genderLabel
			// 
			this->genderLabel->AutoSize = true;
			this->genderLabel->Location = System::Drawing::Point(410, 157);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(88, 13);
			this->genderLabel->TabIndex = 14;
			this->genderLabel->Text = L"Choose a gender";
			// 
			// backgroundLabel
			// 
			this->backgroundLabel->AutoSize = true;
			this->backgroundLabel->Location = System::Drawing::Point(410, 214);
			this->backgroundLabel->Name = L"backgroundLabel";
			this->backgroundLabel->Size = System::Drawing::Size(112, 13);
			this->backgroundLabel->TabIndex = 15;
			this->backgroundLabel->Text = L"Choose a background";
			// 
			// playernameLabel
			// 
			this->playernameLabel->AutoSize = true;
			this->playernameLabel->Location = System::Drawing::Point(220, 30);
			this->playernameLabel->Name = L"playernameLabel";
			this->playernameLabel->Size = System::Drawing::Size(84, 13);
			this->playernameLabel->TabIndex = 16;
			this->playernameLabel->Text = L"Enter your name";
			// 
			// charnameLabel
			// 
			this->charnameLabel->AutoSize = true;
			this->charnameLabel->Location = System::Drawing::Point(217, 91);
			this->charnameLabel->Name = L"charnameLabel";
			this->charnameLabel->Size = System::Drawing::Size(139, 13);
			this->charnameLabel->TabIndex = 17;
			this->charnameLabel->Text = L"Enter your character\'s name";
			// 
			// alignmentBox
			// 
			this->alignmentBox->FormattingEnabled = true;
			this->alignmentBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Lawful Good", L"Neutral Good", L"Chaotic Good",
					L"Lawful Neutral", L"Neutral", L"Chaotic Neutral", L"Lawful Evil", L"Neutral Evil", L"Chaotic Evil"
			});
			this->alignmentBox->Location = System::Drawing::Point(220, 174);
			this->alignmentBox->Name = L"alignmentBox";
			this->alignmentBox->Size = System::Drawing::Size(121, 21);
			this->alignmentBox->TabIndex = 18;
			// 
			// alignmentLabel
			// 
			this->alignmentLabel->AutoSize = true;
			this->alignmentLabel->Location = System::Drawing::Point(220, 157);
			this->alignmentLabel->Name = L"alignmentLabel";
			this->alignmentLabel->Size = System::Drawing::Size(114, 13);
			this->alignmentLabel->TabIndex = 19;
			this->alignmentLabel->Text = L"Choose your alignment";
			// 
			// ageLabel
			// 
			this->ageLabel->AutoSize = true;
			this->ageLabel->Location = System::Drawing::Point(220, 211);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Size = System::Drawing::Size(87, 13);
			this->ageLabel->TabIndex = 21;
			this->ageLabel->Text = L"Choose your age";
			// 
			// ageBox
			// 
			this->ageBox->Location = System::Drawing::Point(220, 230);
			this->ageBox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->ageBox->Name = L"ageBox";
			this->ageBox->Size = System::Drawing::Size(120, 20);
			this->ageBox->TabIndex = 22;
			this->ageBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 503);
			this->Controls->Add(this->ageBox);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->alignmentLabel);
			this->Controls->Add(this->alignmentBox);
			this->Controls->Add(this->charnameLabel);
			this->Controls->Add(this->playernameLabel);
			this->Controls->Add(this->backgroundLabel);
			this->Controls->Add(this->genderLabel);
			this->Controls->Add(this->classLabel);
			this->Controls->Add(this->raceLabel);
			this->Controls->Add(this->playerName);
			this->Controls->Add(this->characterName);
			this->Controls->Add(this->ClassBox);
			this->Controls->Add(this->raceBox);
			this->Controls->Add(this->GenderBox);
			this->Controls->Add(this->flawBox);
			this->Controls->Add(this->bondBox);
			this->Controls->Add(this->idealBox);
			this->Controls->Add(this->personalityBox);
			this->Controls->Add(this->StartGeneration);
			this->Controls->Add(this->BackgroundGenBox);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void raceBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}

	private: System::Void GenderBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}

	private: System::Void BackgroundGenBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
			 
	private: System::Void StartGeneration_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//GUI HAS A ROUGH LAYOUT!!! IT NEEDS SOME LOVING!!!

		//Completed all of the background Class tho....for now.....
		//Starting on CharacterRace class next.......looking at the Human race first
		//tried to make it really straight forward, let me know if you have ANY questions!!
		//So much done!!!!!!! :)
		
		std::string backgroundString;
		std::string raceString;
		std::string playerString;
		std::string characterString;
		std::string classString;
		std::string genderString;
		std::string alignmentString;
		std::string personalityTrait;
		std::string idealTrait;
		std::string bondTrait;
		std::string flawTrait;

		//generates race drop down box
		int raceIndex = raceBox->SelectedIndex;
		Object^ raceItem = raceBox->SelectedItem;
		racItem = raceItem->ToString();
		MarshalString( racItem, raceString );

		//Converts decimal to int for age
		int ageVal = (int)ageBox->Value;

		// Player Name
		player = playerName->Text;
		MarshalString(player, playerString);

		// Character Name
		character = characterName->Text;
		MarshalString(character, characterString);

		//generates alignment drop down box
		int alignIndex = alignmentBox->SelectedIndex;
		Object^ alignItem = alignmentBox->SelectedItem;
		aliItem = alignItem->ToString();
		MarshalString(aliItem, alignmentString);

		//generates class drop down box
		int classIndex = ClassBox->SelectedIndex;
		Object^ classItem = ClassBox->SelectedItem;
		clasItem = classItem->ToString();
		MarshalString( clasItem, classString );

		//generates gender drop down box
		int genIndex = GenderBox->SelectedIndex;
		Object^ genderItem = GenderBox->SelectedItem;
		genItem = genderItem->ToString();
		MarshalString( genItem, genderString );

		//generates background drop down box
		int backgroundIndex = BackgroundGenBox->SelectedIndex;
		Object^ backgroundItem = BackgroundGenBox->SelectedItem;
		bGItem = backgroundItem->ToString();
		MarshalString( bGItem, backgroundString );

		//calls CharacterGenerator constructor
		char1 = new CharacterGenerator( playerString, characterString, raceString, genderString, backgroundString, classString, alignmentString, ageVal );

		//raceClass = new CharacterRace(raceString, genderString);

		//starting with human race first
		//sets race text boxes
		//code to come
		
		//sets gender text boxes
		//code to come
		//this is allow them to have a boy or girl name

		//sets background text boxes
		/*
		background = new CharacterBackground(backgroundString );
		personalityTrait = background->getPersonalityTrait();
		String^ personality = gcnew String( personalityTrait.c_str() );
		this->personalityBox->Text = personality;

		idealTrait = background->getIdeal();
		String^ ideal = gcnew String( idealTrait.c_str() );
		this->idealBox->Text = ideal;

		bondTrait = background->getBond();
		String^ bond = gcnew String( bondTrait.c_str() );
		this->bondBox->Text = bond;

		flawTrait = background->getFlaw();
		String^ flaw = gcnew String( flawTrait.c_str() );
		this->flawBox->Text = flaw;
		*/
		//MessageBox::Show(personality);
	}

	private: System::Void personalityBox_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}

	private: System::Void idealBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}

	private: System::Void bondBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}

	private: System::Void flawBox_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}