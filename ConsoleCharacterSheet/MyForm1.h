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

	private: CharacterGenerator * char1;
	private: CharacterBackground * background;
	private: CharacterRace * raceClass;
	private: CharacterClass * charClass;

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

	private: int raceIndex;
	private: int ageVal;
	private: int alignIndex;
	private: int classIndex;
	private: int genIndex;
	private: int backgroundIndex;
	private: int strength;
	private: int strMod;
	private: int dexterity;
	private: int dexMod;
	private: int constitution;
	private: int consMod;
	private: int intelligence;
	private: int intMod;
	private: int wisdow;
	private: int wisMod;
	private: int charisma;
	private: int chaMod;

	private: System::Windows::Forms::ComboBox^  raceBox;
	private: System::Windows::Forms::ComboBox^  ClassBox;
	private: System::Windows::Forms::ComboBox^  GenderBox;
	private: System::Windows::Forms::ComboBox^  BackgroundGenBox;

	private: System::Windows::Forms::TextBox^  personalityBox;
	private: System::Windows::Forms::TextBox^  idealBox;
	private: System::Windows::Forms::TextBox^  bondBox;
	private: System::Windows::Forms::TextBox^  flawBox;

	private: System::Windows::Forms::Button^  StartGeneration;

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

	private: System::Windows::Forms::Label^  personalityLabel;
	private: System::Windows::Forms::Label^  idealLabel;
	private: System::Windows::Forms::Label^  bondLabel;
	private: System::Windows::Forms::Label^  flawLabel;

	private: System::Windows::Forms::Label^  characterNameLabel;
	private: System::Windows::Forms::TextBox^  charNameBox;
	private: System::Windows::Forms::Label^  charClasslabel;
	private: System::Windows::Forms::TextBox^  charClassBox;
	private: System::Windows::Forms::TextBox^  charBackgroungBox;
	private: System::Windows::Forms::Label^  charBackgroundLabel;
	private: System::Windows::Forms::Label^  playerNameLabel1;
	private: System::Windows::Forms::TextBox^  playerNameBox1;
	private: System::Windows::Forms::Label^  charRaceLabel;
	private: System::Windows::Forms::TextBox^  charRaceBox;
	private: System::Windows::Forms::Label^  charAlignmentLabel;
	private: System::Windows::Forms::TextBox^  charAlignmentBox;
	private: System::Windows::Forms::Label^  charAgeLabel;
	private: System::Windows::Forms::TextBox^  charAgeBox;

	private: System::Windows::Forms::Label^  strengthLabel;
	private: System::Windows::Forms::TextBox^  strengthBox;
	private: System::Windows::Forms::TextBox^  strengthModBox;
	private: System::Windows::Forms::Label^  dexLabel;
	private: System::Windows::Forms::TextBox^  dexBox;
	private: System::Windows::Forms::TextBox^  dexModBox;
	private: System::Windows::Forms::Label^  constitLabel;
	private: System::Windows::Forms::TextBox^  constitBox;
	private: System::Windows::Forms::TextBox^  constitModBox;
	private: System::Windows::Forms::Label^  intellLabel;
	private: System::Windows::Forms::TextBox^  intellBox;
	private: System::Windows::Forms::TextBox^  intellModBox;
	private: System::Windows::Forms::Label^  wisdomLabel;
	private: System::Windows::Forms::TextBox^  wisBox;
	private: System::Windows::Forms::TextBox^  wisModBox;
	private: System::Windows::Forms::Label^  charismaLabel;
	private: System::Windows::Forms::TextBox^  charismaBox;
	private: System::Windows::Forms::TextBox^  charismaModBox;

	private: System::Windows::Forms::Label^  InstructionLabel;

	private: System::Windows::Forms::Label^  proficiencyLabel;
	private: System::Windows::Forms::TextBox^  proficiencyBox;

	private: System::Windows::Forms::TextBox^  strModBox;
	private: System::Windows::Forms::TextBox^  dextModBox;
	private: System::Windows::Forms::TextBox^  conModBox;
	private: System::Windows::Forms::TextBox^  intModBox;
	private: System::Windows::Forms::TextBox^  wisdModBox;
	private: System::Windows::Forms::TextBox^  chaModBox;

	private: System::Windows::Forms::Label^  strModLabel;
	private: System::Windows::Forms::Label^  dextModLabel;
	private: System::Windows::Forms::Label^  conModLabel;
	private: System::Windows::Forms::Label^  intModLabel;
	private: System::Windows::Forms::Label^  wisdModLabel;
	private: System::Windows::Forms::Label^  chaModLabel;
	private: System::Windows::Forms::Label^  savingThrowLabel;

	private: System::Windows::Forms::Label^  skillsLabel;
	private: System::Windows::Forms::TextBox^  acrobBox;
	private: System::Windows::Forms::Label^  acrobLabel;
	private: System::Windows::Forms::TextBox^  animalBox;
	private: System::Windows::Forms::Label^  animalLabel;
	private: System::Windows::Forms::TextBox^  arcanaBox;
	private: System::Windows::Forms::TextBox^  athleBox;
	private: System::Windows::Forms::TextBox^  decepBox;
	private: System::Windows::Forms::TextBox^  histBox;
	private: System::Windows::Forms::TextBox^  InsightBox;
	private: System::Windows::Forms::TextBox^  intimBox;
	private: System::Windows::Forms::TextBox^  investBox;
	private: System::Windows::Forms::TextBox^  medBox;
	private: System::Windows::Forms::TextBox^  natureBox;
	private: System::Windows::Forms::TextBox^  perceptionBox;
	private: System::Windows::Forms::TextBox^  performBox;
	private: System::Windows::Forms::TextBox^  persuaBox;
	private: System::Windows::Forms::TextBox^  religionBox;
	private: System::Windows::Forms::TextBox^  handBox;
	private: System::Windows::Forms::TextBox^  stealthBox;
	private: System::Windows::Forms::TextBox^  survivalBox;
	private: System::Windows::Forms::Label^  handLabel;
	private: System::Windows::Forms::Label^  arcanaLabel;
	private: System::Windows::Forms::Label^  athleLabel;
	private: System::Windows::Forms::Label^  decepLabel;
	private: System::Windows::Forms::Label^  histLabel;
	private: System::Windows::Forms::Label^  insightLabel;
	private: System::Windows::Forms::Label^  IntimLabel;
	private: System::Windows::Forms::Label^  InvestLabel;
	private: System::Windows::Forms::Label^  medLabel;
	private: System::Windows::Forms::Label^  natureLabel;
	private: System::Windows::Forms::Label^  percepLabel;
	private: System::Windows::Forms::Label^  performLabel;
	private: System::Windows::Forms::Label^  persuaLabel;
	private: System::Windows::Forms::Label^  religionLabel;
	private: System::Windows::Forms::Label^  stealthLabel;
	private: System::Windows::Forms::Label^  survivalLabel;
	private: System::Windows::Forms::PictureBox^  charImageBox;
private: System::Windows::Forms::Label^  ACLabel;
private: System::Windows::Forms::TextBox^  ACBox;
private: System::Windows::Forms::TextBox^  InitiaBox;
private: System::Windows::Forms::Label^  InitiaLabel;
private: System::Windows::Forms::Label^  speedLabel;
private: System::Windows::Forms::TextBox^  speedBox;
private: System::Windows::Forms::Label^  HPLabel;
private: System::Windows::Forms::TextBox^  HPBox;

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
			this->playerName = (gcnew System::Windows::Forms::TextBox());
			this->raceLabel = (gcnew System::Windows::Forms::Label());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->backgroundLabel = (gcnew System::Windows::Forms::Label());
			this->playernameLabel = (gcnew System::Windows::Forms::Label());
			this->alignmentBox = (gcnew System::Windows::Forms::ComboBox());
			this->alignmentLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->ageBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->personalityLabel = (gcnew System::Windows::Forms::Label());
			this->idealLabel = (gcnew System::Windows::Forms::Label());
			this->bondLabel = (gcnew System::Windows::Forms::Label());
			this->flawLabel = (gcnew System::Windows::Forms::Label());
			this->characterNameLabel = (gcnew System::Windows::Forms::Label());
			this->charNameBox = (gcnew System::Windows::Forms::TextBox());
			this->charClasslabel = (gcnew System::Windows::Forms::Label());
			this->charClassBox = (gcnew System::Windows::Forms::TextBox());
			this->charBackgroungBox = (gcnew System::Windows::Forms::TextBox());
			this->charBackgroundLabel = (gcnew System::Windows::Forms::Label());
			this->playerNameLabel1 = (gcnew System::Windows::Forms::Label());
			this->playerNameBox1 = (gcnew System::Windows::Forms::TextBox());
			this->charRaceLabel = (gcnew System::Windows::Forms::Label());
			this->charRaceBox = (gcnew System::Windows::Forms::TextBox());
			this->charAlignmentLabel = (gcnew System::Windows::Forms::Label());
			this->charAlignmentBox = (gcnew System::Windows::Forms::TextBox());
			this->charAgeLabel = (gcnew System::Windows::Forms::Label());
			this->charAgeBox = (gcnew System::Windows::Forms::TextBox());
			this->strengthLabel = (gcnew System::Windows::Forms::Label());
			this->strengthBox = (gcnew System::Windows::Forms::TextBox());
			this->strengthModBox = (gcnew System::Windows::Forms::TextBox());
			this->dexLabel = (gcnew System::Windows::Forms::Label());
			this->dexBox = (gcnew System::Windows::Forms::TextBox());
			this->dexModBox = (gcnew System::Windows::Forms::TextBox());
			this->constitLabel = (gcnew System::Windows::Forms::Label());
			this->constitBox = (gcnew System::Windows::Forms::TextBox());
			this->constitModBox = (gcnew System::Windows::Forms::TextBox());
			this->intellLabel = (gcnew System::Windows::Forms::Label());
			this->intellBox = (gcnew System::Windows::Forms::TextBox());
			this->intellModBox = (gcnew System::Windows::Forms::TextBox());
			this->wisdomLabel = (gcnew System::Windows::Forms::Label());
			this->wisBox = (gcnew System::Windows::Forms::TextBox());
			this->wisModBox = (gcnew System::Windows::Forms::TextBox());
			this->charismaLabel = (gcnew System::Windows::Forms::Label());
			this->charismaBox = (gcnew System::Windows::Forms::TextBox());
			this->charismaModBox = (gcnew System::Windows::Forms::TextBox());
			this->InstructionLabel = (gcnew System::Windows::Forms::Label());
			this->proficiencyLabel = (gcnew System::Windows::Forms::Label());
			this->proficiencyBox = (gcnew System::Windows::Forms::TextBox());
			this->strModBox = (gcnew System::Windows::Forms::TextBox());
			this->dextModBox = (gcnew System::Windows::Forms::TextBox());
			this->conModBox = (gcnew System::Windows::Forms::TextBox());
			this->intModBox = (gcnew System::Windows::Forms::TextBox());
			this->wisdModBox = (gcnew System::Windows::Forms::TextBox());
			this->chaModBox = (gcnew System::Windows::Forms::TextBox());
			this->strModLabel = (gcnew System::Windows::Forms::Label());
			this->dextModLabel = (gcnew System::Windows::Forms::Label());
			this->conModLabel = (gcnew System::Windows::Forms::Label());
			this->intModLabel = (gcnew System::Windows::Forms::Label());
			this->wisdModLabel = (gcnew System::Windows::Forms::Label());
			this->chaModLabel = (gcnew System::Windows::Forms::Label());
			this->savingThrowLabel = (gcnew System::Windows::Forms::Label());
			this->skillsLabel = (gcnew System::Windows::Forms::Label());
			this->acrobBox = (gcnew System::Windows::Forms::TextBox());
			this->acrobLabel = (gcnew System::Windows::Forms::Label());
			this->animalBox = (gcnew System::Windows::Forms::TextBox());
			this->animalLabel = (gcnew System::Windows::Forms::Label());
			this->arcanaBox = (gcnew System::Windows::Forms::TextBox());
			this->athleBox = (gcnew System::Windows::Forms::TextBox());
			this->decepBox = (gcnew System::Windows::Forms::TextBox());
			this->histBox = (gcnew System::Windows::Forms::TextBox());
			this->InsightBox = (gcnew System::Windows::Forms::TextBox());
			this->intimBox = (gcnew System::Windows::Forms::TextBox());
			this->investBox = (gcnew System::Windows::Forms::TextBox());
			this->medBox = (gcnew System::Windows::Forms::TextBox());
			this->natureBox = (gcnew System::Windows::Forms::TextBox());
			this->perceptionBox = (gcnew System::Windows::Forms::TextBox());
			this->performBox = (gcnew System::Windows::Forms::TextBox());
			this->persuaBox = (gcnew System::Windows::Forms::TextBox());
			this->religionBox = (gcnew System::Windows::Forms::TextBox());
			this->handBox = (gcnew System::Windows::Forms::TextBox());
			this->stealthBox = (gcnew System::Windows::Forms::TextBox());
			this->survivalBox = (gcnew System::Windows::Forms::TextBox());
			this->handLabel = (gcnew System::Windows::Forms::Label());
			this->arcanaLabel = (gcnew System::Windows::Forms::Label());
			this->athleLabel = (gcnew System::Windows::Forms::Label());
			this->decepLabel = (gcnew System::Windows::Forms::Label());
			this->histLabel = (gcnew System::Windows::Forms::Label());
			this->insightLabel = (gcnew System::Windows::Forms::Label());
			this->IntimLabel = (gcnew System::Windows::Forms::Label());
			this->InvestLabel = (gcnew System::Windows::Forms::Label());
			this->medLabel = (gcnew System::Windows::Forms::Label());
			this->natureLabel = (gcnew System::Windows::Forms::Label());
			this->percepLabel = (gcnew System::Windows::Forms::Label());
			this->performLabel = (gcnew System::Windows::Forms::Label());
			this->persuaLabel = (gcnew System::Windows::Forms::Label());
			this->religionLabel = (gcnew System::Windows::Forms::Label());
			this->stealthLabel = (gcnew System::Windows::Forms::Label());
			this->survivalLabel = (gcnew System::Windows::Forms::Label());
			this->charImageBox = (gcnew System::Windows::Forms::PictureBox());
			this->ACLabel = (gcnew System::Windows::Forms::Label());
			this->ACBox = (gcnew System::Windows::Forms::TextBox());
			this->InitiaBox = (gcnew System::Windows::Forms::TextBox());
			this->InitiaLabel = (gcnew System::Windows::Forms::Label());
			this->speedLabel = (gcnew System::Windows::Forms::Label());
			this->speedBox = (gcnew System::Windows::Forms::TextBox());
			this->HPLabel = (gcnew System::Windows::Forms::Label());
			this->HPBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charImageBox))->BeginInit();
			this->SuspendLayout();
			// 
			// BackgroundGenBox
			// 
			this->BackgroundGenBox->FormattingEnabled = true;
			this->BackgroundGenBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Criminal", L"Folk Hero", L"Hermit" });
			this->BackgroundGenBox->Location = System::Drawing::Point(21, 319);
			this->BackgroundGenBox->Name = L"BackgroundGenBox";
			this->BackgroundGenBox->Size = System::Drawing::Size(121, 21);
			this->BackgroundGenBox->TabIndex = 0;
			this->BackgroundGenBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::BackgroundGenBox_SelectedIndexChanged);
			// 
			// StartGeneration
			// 
			this->StartGeneration->Location = System::Drawing::Point(21, 483);
			this->StartGeneration->Name = L"StartGeneration";
			this->StartGeneration->Size = System::Drawing::Size(123, 23);
			this->StartGeneration->TabIndex = 1;
			this->StartGeneration->Text = L"Start Generation";
			this->StartGeneration->UseVisualStyleBackColor = true;
			this->StartGeneration->Click += gcnew System::EventHandler(this, &MyForm::StartGeneration_Click);
			// 
			// personalityBox
			// 
			this->personalityBox->Location = System::Drawing::Point(570, 319);
			this->personalityBox->Name = L"personalityBox";
			this->personalityBox->ReadOnly = true;
			this->personalityBox->Size = System::Drawing::Size(566, 20);
			this->personalityBox->TabIndex = 2;
			this->personalityBox->TextChanged += gcnew System::EventHandler(this, &MyForm::personalityBox_TextChanged);
			// 
			// idealBox
			// 
			this->idealBox->Location = System::Drawing::Point(570, 374);
			this->idealBox->Name = L"idealBox";
			this->idealBox->ReadOnly = true;
			this->idealBox->Size = System::Drawing::Size(566, 20);
			this->idealBox->TabIndex = 3;
			this->idealBox->TextChanged += gcnew System::EventHandler(this, &MyForm::idealBox_TextChanged);
			// 
			// bondBox
			// 
			this->bondBox->Location = System::Drawing::Point(570, 425);
			this->bondBox->Name = L"bondBox";
			this->bondBox->ReadOnly = true;
			this->bondBox->Size = System::Drawing::Size(566, 20);
			this->bondBox->TabIndex = 4;
			this->bondBox->TextChanged += gcnew System::EventHandler(this, &MyForm::bondBox_TextChanged);
			// 
			// flawBox
			// 
			this->flawBox->Location = System::Drawing::Point(570, 480);
			this->flawBox->Name = L"flawBox";
			this->flawBox->ReadOnly = true;
			this->flawBox->Size = System::Drawing::Size(566, 20);
			this->flawBox->TabIndex = 5;
			this->flawBox->TextChanged += gcnew System::EventHandler(this, &MyForm::flawBox_TextChanged);
			// 
			// GenderBox
			// 
			this->GenderBox->FormattingEnabled = true;
			this->GenderBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->GenderBox->Location = System::Drawing::Point(21, 263);
			this->GenderBox->Name = L"GenderBox";
			this->GenderBox->Size = System::Drawing::Size(121, 21);
			this->GenderBox->TabIndex = 6;
			this->GenderBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::GenderBox_SelectedIndexChanged);
			// 
			// raceBox
			// 
			this->raceBox->FormattingEnabled = true;
			this->raceBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Human", L"Elf", L"Dwarf" });
			this->raceBox->Location = System::Drawing::Point(21, 157);
			this->raceBox->Name = L"raceBox";
			this->raceBox->Size = System::Drawing::Size(121, 21);
			this->raceBox->TabIndex = 7;
			this->raceBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::raceBox_SelectedIndexChanged);
			// 
			// ClassBox
			// 
			this->ClassBox->FormattingEnabled = true;
			this->ClassBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Fighter", L"Cleric", L"Wizard", L"Ranger" });
			this->ClassBox->Location = System::Drawing::Point(21, 206);
			this->ClassBox->Name = L"ClassBox";
			this->ClassBox->Size = System::Drawing::Size(121, 21);
			this->ClassBox->TabIndex = 8;
			// 
			// playerName
			// 
			this->playerName->Location = System::Drawing::Point(21, 112);
			this->playerName->Name = L"playerName";
			this->playerName->Size = System::Drawing::Size(121, 20);
			this->playerName->TabIndex = 11;
			// 
			// raceLabel
			// 
			this->raceLabel->AutoSize = true;
			this->raceLabel->Location = System::Drawing::Point(22, 141);
			this->raceLabel->Name = L"raceLabel";
			this->raceLabel->Size = System::Drawing::Size(76, 13);
			this->raceLabel->TabIndex = 12;
			this->raceLabel->Text = L"Choose a race";
			this->raceLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// classLabel
			// 
			this->classLabel->AutoSize = true;
			this->classLabel->Location = System::Drawing::Point(22, 190);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(79, 13);
			this->classLabel->TabIndex = 13;
			this->classLabel->Text = L"Choose a class";
			// 
			// genderLabel
			// 
			this->genderLabel->AutoSize = true;
			this->genderLabel->Location = System::Drawing::Point(22, 247);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(88, 13);
			this->genderLabel->TabIndex = 14;
			this->genderLabel->Text = L"Choose a gender";
			// 
			// backgroundLabel
			// 
			this->backgroundLabel->AutoSize = true;
			this->backgroundLabel->Location = System::Drawing::Point(22, 303);
			this->backgroundLabel->Name = L"backgroundLabel";
			this->backgroundLabel->Size = System::Drawing::Size(112, 13);
			this->backgroundLabel->TabIndex = 15;
			this->backgroundLabel->Text = L"Choose a background";
			// 
			// playernameLabel
			// 
			this->playernameLabel->AutoSize = true;
			this->playernameLabel->Location = System::Drawing::Point(22, 96);
			this->playernameLabel->Name = L"playernameLabel";
			this->playernameLabel->Size = System::Drawing::Size(84, 13);
			this->playernameLabel->TabIndex = 16;
			this->playernameLabel->Text = L"Enter your name";
			// 
			// alignmentBox
			// 
			this->alignmentBox->FormattingEnabled = true;
			this->alignmentBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Lawful", L"Good", L"Neutral", L"Chaotic",
					L"Evil"
			});
			this->alignmentBox->Location = System::Drawing::Point(22, 378);
			this->alignmentBox->Name = L"alignmentBox";
			this->alignmentBox->Size = System::Drawing::Size(120, 21);
			this->alignmentBox->TabIndex = 18;
			// 
			// alignmentLabel
			// 
			this->alignmentLabel->AutoSize = true;
			this->alignmentLabel->Location = System::Drawing::Point(22, 362);
			this->alignmentLabel->Name = L"alignmentLabel";
			this->alignmentLabel->Size = System::Drawing::Size(114, 13);
			this->alignmentLabel->TabIndex = 19;
			this->alignmentLabel->Text = L"Choose your alignment";
			// 
			// ageLabel
			// 
			this->ageLabel->AutoSize = true;
			this->ageLabel->Location = System::Drawing::Point(22, 419);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Size = System::Drawing::Size(87, 13);
			this->ageLabel->TabIndex = 21;
			this->ageLabel->Text = L"Choose your age";
			// 
			// ageBox
			// 
			this->ageBox->Location = System::Drawing::Point(21, 435);
			this->ageBox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->ageBox->Name = L"ageBox";
			this->ageBox->Size = System::Drawing::Size(120, 20);
			this->ageBox->TabIndex = 22;
			this->ageBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// personalityLabel
			// 
			this->personalityLabel->AutoSize = true;
			this->personalityLabel->Location = System::Drawing::Point(569, 295);
			this->personalityLabel->Name = L"personalityLabel";
			this->personalityLabel->Size = System::Drawing::Size(87, 13);
			this->personalityLabel->TabIndex = 23;
			this->personalityLabel->Text = L"Personality Traits";
			// 
			// idealLabel
			// 
			this->idealLabel->AutoSize = true;
			this->idealLabel->Location = System::Drawing::Point(569, 350);
			this->idealLabel->Name = L"idealLabel";
			this->idealLabel->Size = System::Drawing::Size(35, 13);
			this->idealLabel->TabIndex = 24;
			this->idealLabel->Text = L"Ideals";
			// 
			// bondLabel
			// 
			this->bondLabel->AutoSize = true;
			this->bondLabel->Location = System::Drawing::Point(569, 402);
			this->bondLabel->Name = L"bondLabel";
			this->bondLabel->Size = System::Drawing::Size(37, 13);
			this->bondLabel->TabIndex = 25;
			this->bondLabel->Text = L"Bonds";
			// 
			// flawLabel
			// 
			this->flawLabel->AutoSize = true;
			this->flawLabel->Location = System::Drawing::Point(569, 454);
			this->flawLabel->Name = L"flawLabel";
			this->flawLabel->Size = System::Drawing::Size(34, 13);
			this->flawLabel->TabIndex = 26;
			this->flawLabel->Text = L"Flaws";
			this->flawLabel->Click += gcnew System::EventHandler(this, &MyForm::flawLabel_Click);
			// 
			// characterNameLabel
			// 
			this->characterNameLabel->AutoSize = true;
			this->characterNameLabel->Location = System::Drawing::Point(209, 60);
			this->characterNameLabel->Name = L"characterNameLabel";
			this->characterNameLabel->Size = System::Drawing::Size(84, 13);
			this->characterNameLabel->TabIndex = 27;
			this->characterNameLabel->Text = L"Character Name";
			// 
			// charNameBox
			// 
			this->charNameBox->Location = System::Drawing::Point(212, 37);
			this->charNameBox->Name = L"charNameBox";
			this->charNameBox->ReadOnly = true;
			this->charNameBox->Size = System::Drawing::Size(163, 20);
			this->charNameBox->TabIndex = 28;
			// 
			// charClasslabel
			// 
			this->charClasslabel->AutoSize = true;
			this->charClasslabel->Location = System::Drawing::Point(524, 59);
			this->charClasslabel->Name = L"charClasslabel";
			this->charClasslabel->Size = System::Drawing::Size(32, 13);
			this->charClasslabel->TabIndex = 29;
			this->charClasslabel->Text = L"Class";
			// 
			// charClassBox
			// 
			this->charClassBox->Location = System::Drawing::Point(527, 36);
			this->charClassBox->Name = L"charClassBox";
			this->charClassBox->ReadOnly = true;
			this->charClassBox->Size = System::Drawing::Size(100, 20);
			this->charClassBox->TabIndex = 30;
			// 
			// charBackgroungBox
			// 
			this->charBackgroungBox->Location = System::Drawing::Point(652, 36);
			this->charBackgroungBox->Name = L"charBackgroungBox";
			this->charBackgroungBox->ReadOnly = true;
			this->charBackgroungBox->Size = System::Drawing::Size(100, 20);
			this->charBackgroungBox->TabIndex = 31;
			// 
			// charBackgroundLabel
			// 
			this->charBackgroundLabel->AutoSize = true;
			this->charBackgroundLabel->Location = System::Drawing::Point(649, 60);
			this->charBackgroundLabel->Name = L"charBackgroundLabel";
			this->charBackgroundLabel->Size = System::Drawing::Size(65, 13);
			this->charBackgroundLabel->TabIndex = 32;
			this->charBackgroundLabel->Text = L"Background";
			// 
			// playerNameLabel1
			// 
			this->playerNameLabel1->AutoSize = true;
			this->playerNameLabel1->Location = System::Drawing::Point(1028, 59);
			this->playerNameLabel1->Name = L"playerNameLabel1";
			this->playerNameLabel1->Size = System::Drawing::Size(67, 13);
			this->playerNameLabel1->TabIndex = 33;
			this->playerNameLabel1->Text = L"Player Name";
			// 
			// playerNameBox1
			// 
			this->playerNameBox1->Location = System::Drawing::Point(1031, 36);
			this->playerNameBox1->Name = L"playerNameBox1";
			this->playerNameBox1->ReadOnly = true;
			this->playerNameBox1->Size = System::Drawing::Size(113, 20);
			this->playerNameBox1->TabIndex = 34;
			// 
			// charRaceLabel
			// 
			this->charRaceLabel->AutoSize = true;
			this->charRaceLabel->Location = System::Drawing::Point(397, 60);
			this->charRaceLabel->Name = L"charRaceLabel";
			this->charRaceLabel->Size = System::Drawing::Size(33, 13);
			this->charRaceLabel->TabIndex = 35;
			this->charRaceLabel->Text = L"Race";
			// 
			// charRaceBox
			// 
			this->charRaceBox->Location = System::Drawing::Point(400, 37);
			this->charRaceBox->Name = L"charRaceBox";
			this->charRaceBox->ReadOnly = true;
			this->charRaceBox->Size = System::Drawing::Size(100, 20);
			this->charRaceBox->TabIndex = 36;
			// 
			// charAlignmentLabel
			// 
			this->charAlignmentLabel->AutoSize = true;
			this->charAlignmentLabel->Location = System::Drawing::Point(771, 59);
			this->charAlignmentLabel->Name = L"charAlignmentLabel";
			this->charAlignmentLabel->Size = System::Drawing::Size(53, 13);
			this->charAlignmentLabel->TabIndex = 37;
			this->charAlignmentLabel->Text = L"Alignment";
			// 
			// charAlignmentBox
			// 
			this->charAlignmentBox->Location = System::Drawing::Point(774, 36);
			this->charAlignmentBox->Name = L"charAlignmentBox";
			this->charAlignmentBox->ReadOnly = true;
			this->charAlignmentBox->Size = System::Drawing::Size(100, 20);
			this->charAlignmentBox->TabIndex = 38;
			// 
			// charAgeLabel
			// 
			this->charAgeLabel->AutoSize = true;
			this->charAgeLabel->Location = System::Drawing::Point(899, 60);
			this->charAgeLabel->Name = L"charAgeLabel";
			this->charAgeLabel->Size = System::Drawing::Size(26, 13);
			this->charAgeLabel->TabIndex = 39;
			this->charAgeLabel->Text = L"Age";
			// 
			// charAgeBox
			// 
			this->charAgeBox->Location = System::Drawing::Point(902, 36);
			this->charAgeBox->Name = L"charAgeBox";
			this->charAgeBox->ReadOnly = true;
			this->charAgeBox->Size = System::Drawing::Size(100, 20);
			this->charAgeBox->TabIndex = 40;
			// 
			// strengthLabel
			// 
			this->strengthLabel->AutoSize = true;
			this->strengthLabel->Location = System::Drawing::Point(262, 99);
			this->strengthLabel->Name = L"strengthLabel";
			this->strengthLabel->Size = System::Drawing::Size(47, 13);
			this->strengthLabel->TabIndex = 41;
			this->strengthLabel->Text = L"Strength";
			// 
			// strengthBox
			// 
			this->strengthBox->Location = System::Drawing::Point(259, 116);
			this->strengthBox->Name = L"strengthBox";
			this->strengthBox->ReadOnly = true;
			this->strengthBox->Size = System::Drawing::Size(56, 20);
			this->strengthBox->TabIndex = 42;
			this->strengthBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// strengthModBox
			// 
			this->strengthModBox->Location = System::Drawing::Point(268, 142);
			this->strengthModBox->Name = L"strengthModBox";
			this->strengthModBox->ReadOnly = true;
			this->strengthModBox->Size = System::Drawing::Size(36, 20);
			this->strengthModBox->TabIndex = 43;
			this->strengthModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dexLabel
			// 
			this->dexLabel->AutoSize = true;
			this->dexLabel->Location = System::Drawing::Point(262, 165);
			this->dexLabel->Name = L"dexLabel";
			this->dexLabel->Size = System::Drawing::Size(48, 13);
			this->dexLabel->TabIndex = 44;
			this->dexLabel->Text = L"Dexterity";
			this->dexLabel->Click += gcnew System::EventHandler(this, &MyForm::dexLabel_Click);
			// 
			// dexBox
			// 
			this->dexBox->Location = System::Drawing::Point(259, 181);
			this->dexBox->Name = L"dexBox";
			this->dexBox->ReadOnly = true;
			this->dexBox->Size = System::Drawing::Size(56, 20);
			this->dexBox->TabIndex = 45;
			this->dexBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dexModBox
			// 
			this->dexModBox->Location = System::Drawing::Point(268, 207);
			this->dexModBox->Name = L"dexModBox";
			this->dexModBox->ReadOnly = true;
			this->dexModBox->Size = System::Drawing::Size(36, 20);
			this->dexModBox->TabIndex = 46;
			this->dexModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// constitLabel
			// 
			this->constitLabel->AutoSize = true;
			this->constitLabel->Location = System::Drawing::Point(256, 230);
			this->constitLabel->Name = L"constitLabel";
			this->constitLabel->Size = System::Drawing::Size(62, 13);
			this->constitLabel->TabIndex = 47;
			this->constitLabel->Text = L"Constitution";
			// 
			// constitBox
			// 
			this->constitBox->Location = System::Drawing::Point(259, 246);
			this->constitBox->Name = L"constitBox";
			this->constitBox->ReadOnly = true;
			this->constitBox->Size = System::Drawing::Size(56, 20);
			this->constitBox->TabIndex = 48;
			this->constitBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// constitModBox
			// 
			this->constitModBox->Location = System::Drawing::Point(270, 272);
			this->constitModBox->Name = L"constitModBox";
			this->constitModBox->ReadOnly = true;
			this->constitModBox->Size = System::Drawing::Size(34, 20);
			this->constitModBox->TabIndex = 49;
			this->constitModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// intellLabel
			// 
			this->intellLabel->AutoSize = true;
			this->intellLabel->Location = System::Drawing::Point(257, 295);
			this->intellLabel->Name = L"intellLabel";
			this->intellLabel->Size = System::Drawing::Size(61, 13);
			this->intellLabel->TabIndex = 50;
			this->intellLabel->Text = L"Intelligence";
			// 
			// intellBox
			// 
			this->intellBox->Location = System::Drawing::Point(259, 313);
			this->intellBox->Name = L"intellBox";
			this->intellBox->ReadOnly = true;
			this->intellBox->Size = System::Drawing::Size(56, 20);
			this->intellBox->TabIndex = 51;
			this->intellBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// intellModBox
			// 
			this->intellModBox->Location = System::Drawing::Point(270, 339);
			this->intellModBox->Name = L"intellModBox";
			this->intellModBox->ReadOnly = true;
			this->intellModBox->Size = System::Drawing::Size(34, 20);
			this->intellModBox->TabIndex = 52;
			this->intellModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// wisdomLabel
			// 
			this->wisdomLabel->AutoSize = true;
			this->wisdomLabel->Location = System::Drawing::Point(265, 362);
			this->wisdomLabel->Name = L"wisdomLabel";
			this->wisdomLabel->Size = System::Drawing::Size(45, 13);
			this->wisdomLabel->TabIndex = 53;
			this->wisdomLabel->Text = L"Wisdom";
			// 
			// wisBox
			// 
			this->wisBox->Location = System::Drawing::Point(259, 378);
			this->wisBox->Name = L"wisBox";
			this->wisBox->ReadOnly = true;
			this->wisBox->Size = System::Drawing::Size(56, 20);
			this->wisBox->TabIndex = 54;
			this->wisBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// wisModBox
			// 
			this->wisModBox->Location = System::Drawing::Point(270, 404);
			this->wisModBox->Name = L"wisModBox";
			this->wisModBox->ReadOnly = true;
			this->wisModBox->Size = System::Drawing::Size(35, 20);
			this->wisModBox->TabIndex = 55;
			this->wisModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// charismaLabel
			// 
			this->charismaLabel->AutoSize = true;
			this->charismaLabel->Location = System::Drawing::Point(262, 428);
			this->charismaLabel->Name = L"charismaLabel";
			this->charismaLabel->Size = System::Drawing::Size(50, 13);
			this->charismaLabel->TabIndex = 56;
			this->charismaLabel->Text = L"Charisma";
			// 
			// charismaBox
			// 
			this->charismaBox->Location = System::Drawing::Point(259, 443);
			this->charismaBox->Name = L"charismaBox";
			this->charismaBox->ReadOnly = true;
			this->charismaBox->Size = System::Drawing::Size(56, 20);
			this->charismaBox->TabIndex = 57;
			this->charismaBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->charismaBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// charismaModBox
			// 
			this->charismaModBox->Location = System::Drawing::Point(271, 469);
			this->charismaModBox->Name = L"charismaModBox";
			this->charismaModBox->ReadOnly = true;
			this->charismaModBox->Size = System::Drawing::Size(34, 20);
			this->charismaModBox->TabIndex = 58;
			this->charismaModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// InstructionLabel
			// 
			this->InstructionLabel->AutoSize = true;
			this->InstructionLabel->Location = System::Drawing::Point(12, 73);
			this->InstructionLabel->Name = L"InstructionLabel";
			this->InstructionLabel->Size = System::Drawing::Size(134, 13);
			this->InstructionLabel->TabIndex = 59;
			this->InstructionLabel->Text = L"Enter ALL the below boxes";
			this->InstructionLabel->Click += gcnew System::EventHandler(this, &MyForm::InstructionLabel_Click);
			// 
			// proficiencyLabel
			// 
			this->proficiencyLabel->AutoSize = true;
			this->proficiencyLabel->Location = System::Drawing::Point(709, 249);
			this->proficiencyLabel->Name = L"proficiencyLabel";
			this->proficiencyLabel->Size = System::Drawing::Size(59, 13);
			this->proficiencyLabel->TabIndex = 60;
			this->proficiencyLabel->Text = L"Proficiency";
			// 
			// proficiencyBox
			// 
			this->proficiencyBox->Location = System::Drawing::Point(712, 268);
			this->proficiencyBox->Name = L"proficiencyBox";
			this->proficiencyBox->ReadOnly = true;
			this->proficiencyBox->Size = System::Drawing::Size(56, 20);
			this->proficiencyBox->TabIndex = 61;
			this->proficiencyBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// strModBox
			// 
			this->strModBox->Location = System::Drawing::Point(570, 116);
			this->strModBox->Name = L"strModBox";
			this->strModBox->ReadOnly = true;
			this->strModBox->Size = System::Drawing::Size(27, 20);
			this->strModBox->TabIndex = 62;
			this->strModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dextModBox
			// 
			this->dextModBox->Location = System::Drawing::Point(570, 142);
			this->dextModBox->Name = L"dextModBox";
			this->dextModBox->ReadOnly = true;
			this->dextModBox->Size = System::Drawing::Size(27, 20);
			this->dextModBox->TabIndex = 63;
			this->dextModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// conModBox
			// 
			this->conModBox->Location = System::Drawing::Point(570, 168);
			this->conModBox->Name = L"conModBox";
			this->conModBox->ReadOnly = true;
			this->conModBox->Size = System::Drawing::Size(27, 20);
			this->conModBox->TabIndex = 64;
			this->conModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// intModBox
			// 
			this->intModBox->Location = System::Drawing::Point(570, 193);
			this->intModBox->Name = L"intModBox";
			this->intModBox->ReadOnly = true;
			this->intModBox->Size = System::Drawing::Size(27, 20);
			this->intModBox->TabIndex = 65;
			this->intModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// wisdModBox
			// 
			this->wisdModBox->Location = System::Drawing::Point(570, 220);
			this->wisdModBox->Name = L"wisdModBox";
			this->wisdModBox->ReadOnly = true;
			this->wisdModBox->Size = System::Drawing::Size(27, 20);
			this->wisdModBox->TabIndex = 66;
			this->wisdModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// chaModBox
			// 
			this->chaModBox->Location = System::Drawing::Point(570, 246);
			this->chaModBox->Name = L"chaModBox";
			this->chaModBox->ReadOnly = true;
			this->chaModBox->Size = System::Drawing::Size(27, 20);
			this->chaModBox->TabIndex = 67;
			this->chaModBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// strModLabel
			// 
			this->strModLabel->AutoSize = true;
			this->strModLabel->Location = System::Drawing::Point(606, 119);
			this->strModLabel->Name = L"strModLabel";
			this->strModLabel->Size = System::Drawing::Size(47, 13);
			this->strModLabel->TabIndex = 68;
			this->strModLabel->Text = L"Strength";
			// 
			// dextModLabel
			// 
			this->dextModLabel->AutoSize = true;
			this->dextModLabel->Location = System::Drawing::Point(606, 145);
			this->dextModLabel->Name = L"dextModLabel";
			this->dextModLabel->Size = System::Drawing::Size(48, 13);
			this->dextModLabel->TabIndex = 69;
			this->dextModLabel->Text = L"Dexterity";
			this->dextModLabel->Click += gcnew System::EventHandler(this, &MyForm::dextModLabel_Click);
			// 
			// conModLabel
			// 
			this->conModLabel->AutoSize = true;
			this->conModLabel->Location = System::Drawing::Point(606, 171);
			this->conModLabel->Name = L"conModLabel";
			this->conModLabel->Size = System::Drawing::Size(62, 13);
			this->conModLabel->TabIndex = 70;
			this->conModLabel->Text = L"Constitution";
			// 
			// intModLabel
			// 
			this->intModLabel->AutoSize = true;
			this->intModLabel->Location = System::Drawing::Point(606, 196);
			this->intModLabel->Name = L"intModLabel";
			this->intModLabel->Size = System::Drawing::Size(61, 13);
			this->intModLabel->TabIndex = 71;
			this->intModLabel->Text = L"Intelligence";
			// 
			// wisdModLabel
			// 
			this->wisdModLabel->AutoSize = true;
			this->wisdModLabel->Location = System::Drawing::Point(606, 223);
			this->wisdModLabel->Name = L"wisdModLabel";
			this->wisdModLabel->Size = System::Drawing::Size(45, 13);
			this->wisdModLabel->TabIndex = 72;
			this->wisdModLabel->Text = L"Wisdom";
			// 
			// chaModLabel
			// 
			this->chaModLabel->AutoSize = true;
			this->chaModLabel->Location = System::Drawing::Point(606, 249);
			this->chaModLabel->Name = L"chaModLabel";
			this->chaModLabel->Size = System::Drawing::Size(50, 13);
			this->chaModLabel->TabIndex = 73;
			this->chaModLabel->Text = L"Charisma";
			// 
			// savingThrowLabel
			// 
			this->savingThrowLabel->AutoSize = true;
			this->savingThrowLabel->Location = System::Drawing::Point(567, 99);
			this->savingThrowLabel->Name = L"savingThrowLabel";
			this->savingThrowLabel->Size = System::Drawing::Size(78, 13);
			this->savingThrowLabel->TabIndex = 74;
			this->savingThrowLabel->Text = L"Saving Throws";
			// 
			// skillsLabel
			// 
			this->skillsLabel->AutoSize = true;
			this->skillsLabel->Location = System::Drawing::Point(400, 99);
			this->skillsLabel->Name = L"skillsLabel";
			this->skillsLabel->Size = System::Drawing::Size(31, 13);
			this->skillsLabel->TabIndex = 75;
			this->skillsLabel->Text = L"Skills";
			// 
			// acrobBox
			// 
			this->acrobBox->Location = System::Drawing::Point(403, 116);
			this->acrobBox->Name = L"acrobBox";
			this->acrobBox->ReadOnly = true;
			this->acrobBox->Size = System::Drawing::Size(27, 20);
			this->acrobBox->TabIndex = 76;
			this->acrobBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// acrobLabel
			// 
			this->acrobLabel->AutoSize = true;
			this->acrobLabel->Location = System::Drawing::Point(437, 119);
			this->acrobLabel->Name = L"acrobLabel";
			this->acrobLabel->Size = System::Drawing::Size(85, 13);
			this->acrobLabel->TabIndex = 77;
			this->acrobLabel->Text = L"Acrobatics (Dex)";
			// 
			// animalBox
			// 
			this->animalBox->Location = System::Drawing::Point(402, 142);
			this->animalBox->Name = L"animalBox";
			this->animalBox->ReadOnly = true;
			this->animalBox->Size = System::Drawing::Size(28, 20);
			this->animalBox->TabIndex = 78;
			this->animalBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// animalLabel
			// 
			this->animalLabel->AutoSize = true;
			this->animalLabel->Location = System::Drawing::Point(436, 145);
			this->animalLabel->Name = L"animalLabel";
			this->animalLabel->Size = System::Drawing::Size(110, 13);
			this->animalLabel->TabIndex = 79;
			this->animalLabel->Text = L"Animal Handling (Wis)";
			// 
			// arcanaBox
			// 
			this->arcanaBox->Location = System::Drawing::Point(403, 168);
			this->arcanaBox->Name = L"arcanaBox";
			this->arcanaBox->ReadOnly = true;
			this->arcanaBox->Size = System::Drawing::Size(28, 20);
			this->arcanaBox->TabIndex = 80;
			this->arcanaBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// athleBox
			// 
			this->athleBox->Location = System::Drawing::Point(403, 194);
			this->athleBox->Name = L"athleBox";
			this->athleBox->ReadOnly = true;
			this->athleBox->Size = System::Drawing::Size(28, 20);
			this->athleBox->TabIndex = 81;
			this->athleBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// decepBox
			// 
			this->decepBox->Location = System::Drawing::Point(403, 220);
			this->decepBox->Name = L"decepBox";
			this->decepBox->ReadOnly = true;
			this->decepBox->Size = System::Drawing::Size(28, 20);
			this->decepBox->TabIndex = 82;
			this->decepBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// histBox
			// 
			this->histBox->Location = System::Drawing::Point(403, 246);
			this->histBox->Name = L"histBox";
			this->histBox->ReadOnly = true;
			this->histBox->Size = System::Drawing::Size(28, 20);
			this->histBox->TabIndex = 83;
			this->histBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// InsightBox
			// 
			this->InsightBox->Location = System::Drawing::Point(403, 272);
			this->InsightBox->Name = L"InsightBox";
			this->InsightBox->ReadOnly = true;
			this->InsightBox->Size = System::Drawing::Size(28, 20);
			this->InsightBox->TabIndex = 84;
			this->InsightBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// intimBox
			// 
			this->intimBox->Location = System::Drawing::Point(403, 298);
			this->intimBox->Name = L"intimBox";
			this->intimBox->ReadOnly = true;
			this->intimBox->Size = System::Drawing::Size(28, 20);
			this->intimBox->TabIndex = 85;
			this->intimBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// investBox
			// 
			this->investBox->Location = System::Drawing::Point(403, 324);
			this->investBox->Name = L"investBox";
			this->investBox->ReadOnly = true;
			this->investBox->Size = System::Drawing::Size(27, 20);
			this->investBox->TabIndex = 86;
			this->investBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// medBox
			// 
			this->medBox->Location = System::Drawing::Point(403, 350);
			this->medBox->Name = L"medBox";
			this->medBox->ReadOnly = true;
			this->medBox->Size = System::Drawing::Size(28, 20);
			this->medBox->TabIndex = 87;
			this->medBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// natureBox
			// 
			this->natureBox->Location = System::Drawing::Point(403, 376);
			this->natureBox->Name = L"natureBox";
			this->natureBox->ReadOnly = true;
			this->natureBox->Size = System::Drawing::Size(28, 20);
			this->natureBox->TabIndex = 88;
			this->natureBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// perceptionBox
			// 
			this->perceptionBox->Location = System::Drawing::Point(403, 402);
			this->perceptionBox->Name = L"perceptionBox";
			this->perceptionBox->ReadOnly = true;
			this->perceptionBox->Size = System::Drawing::Size(28, 20);
			this->perceptionBox->TabIndex = 89;
			this->perceptionBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// performBox
			// 
			this->performBox->Location = System::Drawing::Point(403, 428);
			this->performBox->Name = L"performBox";
			this->performBox->ReadOnly = true;
			this->performBox->Size = System::Drawing::Size(28, 20);
			this->performBox->TabIndex = 90;
			this->performBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// persuaBox
			// 
			this->persuaBox->Location = System::Drawing::Point(403, 454);
			this->persuaBox->Name = L"persuaBox";
			this->persuaBox->ReadOnly = true;
			this->persuaBox->Size = System::Drawing::Size(28, 20);
			this->persuaBox->TabIndex = 91;
			this->persuaBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// religionBox
			// 
			this->religionBox->Location = System::Drawing::Point(403, 480);
			this->religionBox->Name = L"religionBox";
			this->religionBox->ReadOnly = true;
			this->religionBox->Size = System::Drawing::Size(28, 20);
			this->religionBox->TabIndex = 92;
			this->religionBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// handBox
			// 
			this->handBox->Location = System::Drawing::Point(403, 506);
			this->handBox->Name = L"handBox";
			this->handBox->ReadOnly = true;
			this->handBox->Size = System::Drawing::Size(28, 20);
			this->handBox->TabIndex = 93;
			this->handBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// stealthBox
			// 
			this->stealthBox->Location = System::Drawing::Point(403, 532);
			this->stealthBox->Name = L"stealthBox";
			this->stealthBox->ReadOnly = true;
			this->stealthBox->Size = System::Drawing::Size(28, 20);
			this->stealthBox->TabIndex = 94;
			this->stealthBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// survivalBox
			// 
			this->survivalBox->Location = System::Drawing::Point(403, 558);
			this->survivalBox->Name = L"survivalBox";
			this->survivalBox->ReadOnly = true;
			this->survivalBox->Size = System::Drawing::Size(28, 20);
			this->survivalBox->TabIndex = 95;
			this->survivalBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// handLabel
			// 
			this->handLabel->AutoSize = true;
			this->handLabel->Location = System::Drawing::Point(437, 509);
			this->handLabel->Name = L"handLabel";
			this->handLabel->Size = System::Drawing::Size(108, 13);
			this->handLabel->TabIndex = 96;
			this->handLabel->Text = L"Sleight of Hand (Dex)";
			// 
			// arcanaLabel
			// 
			this->arcanaLabel->AutoSize = true;
			this->arcanaLabel->Location = System::Drawing::Point(437, 171);
			this->arcanaLabel->Name = L"arcanaLabel";
			this->arcanaLabel->Size = System::Drawing::Size(68, 13);
			this->arcanaLabel->TabIndex = 97;
			this->arcanaLabel->Text = L"Aracana (Int)";
			this->arcanaLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// athleLabel
			// 
			this->athleLabel->AutoSize = true;
			this->athleLabel->Location = System::Drawing::Point(437, 197);
			this->athleLabel->Name = L"athleLabel";
			this->athleLabel->Size = System::Drawing::Size(69, 13);
			this->athleLabel->TabIndex = 98;
			this->athleLabel->Text = L"Athletics (Str)";
			// 
			// decepLabel
			// 
			this->decepLabel->AutoSize = true;
			this->decepLabel->Location = System::Drawing::Point(436, 223);
			this->decepLabel->Name = L"decepLabel";
			this->decepLabel->Size = System::Drawing::Size(84, 13);
			this->decepLabel->TabIndex = 99;
			this->decepLabel->Text = L"Deception (Cha)";
			// 
			// histLabel
			// 
			this->histLabel->AutoSize = true;
			this->histLabel->Location = System::Drawing::Point(437, 249);
			this->histLabel->Name = L"histLabel";
			this->histLabel->Size = System::Drawing::Size(60, 13);
			this->histLabel->TabIndex = 100;
			this->histLabel->Text = L"History (Int)";
			// 
			// insightLabel
			// 
			this->insightLabel->AutoSize = true;
			this->insightLabel->Location = System::Drawing::Point(437, 275);
			this->insightLabel->Name = L"insightLabel";
			this->insightLabel->Size = System::Drawing::Size(65, 13);
			this->insightLabel->TabIndex = 101;
			this->insightLabel->Text = L"Insight (Wis)";
			// 
			// IntimLabel
			// 
			this->IntimLabel->AutoSize = true;
			this->IntimLabel->Location = System::Drawing::Point(437, 301);
			this->IntimLabel->Name = L"IntimLabel";
			this->IntimLabel->Size = System::Drawing::Size(88, 13);
			this->IntimLabel->TabIndex = 102;
			this->IntimLabel->Text = L"Intimidation (Cha)";
			// 
			// InvestLabel
			// 
			this->InvestLabel->AutoSize = true;
			this->InvestLabel->Location = System::Drawing::Point(437, 327);
			this->InvestLabel->Name = L"InvestLabel";
			this->InvestLabel->Size = System::Drawing::Size(88, 13);
			this->InvestLabel->TabIndex = 103;
			this->InvestLabel->Text = L"Investigation (Int)";
			// 
			// medLabel
			// 
			this->medLabel->AutoSize = true;
			this->medLabel->Location = System::Drawing::Point(437, 353);
			this->medLabel->Name = L"medLabel";
			this->medLabel->Size = System::Drawing::Size(77, 13);
			this->medLabel->TabIndex = 104;
			this->medLabel->Text = L"Medicine (Wis)";
			// 
			// natureLabel
			// 
			this->natureLabel->AutoSize = true;
			this->natureLabel->Location = System::Drawing::Point(437, 381);
			this->natureLabel->Name = L"natureLabel";
			this->natureLabel->Size = System::Drawing::Size(60, 13);
			this->natureLabel->TabIndex = 105;
			this->natureLabel->Text = L"Nature (Int)";
			// 
			// percepLabel
			// 
			this->percepLabel->AutoSize = true;
			this->percepLabel->Location = System::Drawing::Point(437, 407);
			this->percepLabel->Name = L"percepLabel";
			this->percepLabel->Size = System::Drawing::Size(85, 13);
			this->percepLabel->TabIndex = 106;
			this->percepLabel->Text = L"Perception (Wis)";
			// 
			// performLabel
			// 
			this->performLabel->AutoSize = true;
			this->performLabel->Location = System::Drawing::Point(437, 431);
			this->performLabel->Name = L"performLabel";
			this->performLabel->Size = System::Drawing::Size(95, 13);
			this->performLabel->TabIndex = 107;
			this->performLabel->Text = L"Performance (Cha)";
			// 
			// persuaLabel
			// 
			this->persuaLabel->AutoSize = true;
			this->persuaLabel->Location = System::Drawing::Point(437, 457);
			this->persuaLabel->Name = L"persuaLabel";
			this->persuaLabel->Size = System::Drawing::Size(87, 13);
			this->persuaLabel->TabIndex = 108;
			this->persuaLabel->Text = L"Persuasion (Cha)";
			// 
			// religionLabel
			// 
			this->religionLabel->AutoSize = true;
			this->religionLabel->Location = System::Drawing::Point(437, 483);
			this->religionLabel->Name = L"religionLabel";
			this->religionLabel->Size = System::Drawing::Size(66, 13);
			this->religionLabel->TabIndex = 109;
			this->religionLabel->Text = L"Religion (Int)";
			// 
			// stealthLabel
			// 
			this->stealthLabel->AutoSize = true;
			this->stealthLabel->Location = System::Drawing::Point(437, 535);
			this->stealthLabel->Name = L"stealthLabel";
			this->stealthLabel->Size = System::Drawing::Size(68, 13);
			this->stealthLabel->TabIndex = 110;
			this->stealthLabel->Text = L"Stealth (Dex)";
			// 
			// survivalLabel
			// 
			this->survivalLabel->AutoSize = true;
			this->survivalLabel->Location = System::Drawing::Point(437, 561);
			this->survivalLabel->Name = L"survivalLabel";
			this->survivalLabel->Size = System::Drawing::Size(72, 13);
			this->survivalLabel->TabIndex = 111;
			this->survivalLabel->Text = L"Survival (Wis)";
			// 
			// charImageBox
			// 
			this->charImageBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->charImageBox->Location = System::Drawing::Point(923, 92);
			this->charImageBox->Name = L"charImageBox";
			this->charImageBox->Size = System::Drawing::Size(213, 192);
			this->charImageBox->TabIndex = 112;
			this->charImageBox->TabStop = false;
			this->charImageBox->Click += gcnew System::EventHandler(this, &MyForm::charImageBox_Click);
			// 
			// ACLabel
			// 
			this->ACLabel->AutoSize = true;
			this->ACLabel->Location = System::Drawing::Point(709, 99);
			this->ACLabel->Name = L"ACLabel";
			this->ACLabel->Size = System::Drawing::Size(62, 13);
			this->ACLabel->TabIndex = 113;
			this->ACLabel->Text = L"Armor Class";
			// 
			// ACBox
			// 
			this->ACBox->Location = System::Drawing::Point(712, 121);
			this->ACBox->Name = L"ACBox";
			this->ACBox->ReadOnly = true;
			this->ACBox->Size = System::Drawing::Size(56, 20);
			this->ACBox->TabIndex = 114;
			this->ACBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// InitiaBox
			// 
			this->InitiaBox->Location = System::Drawing::Point(712, 168);
			this->InitiaBox->Name = L"InitiaBox";
			this->InitiaBox->ReadOnly = true;
			this->InitiaBox->Size = System::Drawing::Size(56, 20);
			this->InitiaBox->TabIndex = 115;
			this->InitiaBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// InitiaLabel
			// 
			this->InitiaLabel->AutoSize = true;
			this->InitiaLabel->Location = System::Drawing::Point(709, 149);
			this->InitiaLabel->Name = L"InitiaLabel";
			this->InitiaLabel->Size = System::Drawing::Size(46, 13);
			this->InitiaLabel->TabIndex = 116;
			this->InitiaLabel->Text = L"Initiative";
			// 
			// speedLabel
			// 
			this->speedLabel->AutoSize = true;
			this->speedLabel->Location = System::Drawing::Point(709, 197);
			this->speedLabel->Name = L"speedLabel";
			this->speedLabel->Size = System::Drawing::Size(38, 13);
			this->speedLabel->TabIndex = 117;
			this->speedLabel->Text = L"Speed";
			// 
			// speedBox
			// 
			this->speedBox->Location = System::Drawing::Point(712, 220);
			this->speedBox->Name = L"speedBox";
			this->speedBox->ReadOnly = true;
			this->speedBox->Size = System::Drawing::Size(56, 20);
			this->speedBox->TabIndex = 118;
			this->speedBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->speedBox->TextChanged += gcnew System::EventHandler(this, &MyForm::speedBox_TextChanged);
			// 
			// HPLabel
			// 
			this->HPLabel->AutoSize = true;
			this->HPLabel->Location = System::Drawing::Point(815, 99);
			this->HPLabel->Name = L"HPLabel";
			this->HPLabel->Size = System::Drawing::Size(52, 13);
			this->HPLabel->TabIndex = 119;
			this->HPLabel->Text = L"Hit Points";
			// 
			// HPBox
			// 
			this->HPBox->Location = System::Drawing::Point(818, 121);
			this->HPBox->Name = L"HPBox";
			this->HPBox->ReadOnly = true;
			this->HPBox->Size = System::Drawing::Size(56, 20);
			this->HPBox->TabIndex = 120;
			this->HPBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1158, 586);
			this->Controls->Add(this->HPBox);
			this->Controls->Add(this->HPLabel);
			this->Controls->Add(this->speedBox);
			this->Controls->Add(this->speedLabel);
			this->Controls->Add(this->InitiaLabel);
			this->Controls->Add(this->InitiaBox);
			this->Controls->Add(this->ACBox);
			this->Controls->Add(this->ACLabel);
			this->Controls->Add(this->charImageBox);
			this->Controls->Add(this->survivalLabel);
			this->Controls->Add(this->stealthLabel);
			this->Controls->Add(this->religionLabel);
			this->Controls->Add(this->persuaLabel);
			this->Controls->Add(this->performLabel);
			this->Controls->Add(this->percepLabel);
			this->Controls->Add(this->natureLabel);
			this->Controls->Add(this->medLabel);
			this->Controls->Add(this->InvestLabel);
			this->Controls->Add(this->IntimLabel);
			this->Controls->Add(this->insightLabel);
			this->Controls->Add(this->histLabel);
			this->Controls->Add(this->decepLabel);
			this->Controls->Add(this->athleLabel);
			this->Controls->Add(this->arcanaLabel);
			this->Controls->Add(this->handLabel);
			this->Controls->Add(this->survivalBox);
			this->Controls->Add(this->stealthBox);
			this->Controls->Add(this->handBox);
			this->Controls->Add(this->religionBox);
			this->Controls->Add(this->persuaBox);
			this->Controls->Add(this->performBox);
			this->Controls->Add(this->perceptionBox);
			this->Controls->Add(this->natureBox);
			this->Controls->Add(this->medBox);
			this->Controls->Add(this->investBox);
			this->Controls->Add(this->intimBox);
			this->Controls->Add(this->InsightBox);
			this->Controls->Add(this->histBox);
			this->Controls->Add(this->decepBox);
			this->Controls->Add(this->athleBox);
			this->Controls->Add(this->arcanaBox);
			this->Controls->Add(this->animalLabel);
			this->Controls->Add(this->animalBox);
			this->Controls->Add(this->acrobLabel);
			this->Controls->Add(this->acrobBox);
			this->Controls->Add(this->skillsLabel);
			this->Controls->Add(this->savingThrowLabel);
			this->Controls->Add(this->chaModLabel);
			this->Controls->Add(this->wisdModLabel);
			this->Controls->Add(this->intModLabel);
			this->Controls->Add(this->conModLabel);
			this->Controls->Add(this->dextModLabel);
			this->Controls->Add(this->strModLabel);
			this->Controls->Add(this->chaModBox);
			this->Controls->Add(this->wisdModBox);
			this->Controls->Add(this->intModBox);
			this->Controls->Add(this->conModBox);
			this->Controls->Add(this->dextModBox);
			this->Controls->Add(this->strModBox);
			this->Controls->Add(this->proficiencyBox);
			this->Controls->Add(this->proficiencyLabel);
			this->Controls->Add(this->InstructionLabel);
			this->Controls->Add(this->charismaModBox);
			this->Controls->Add(this->charismaBox);
			this->Controls->Add(this->charismaLabel);
			this->Controls->Add(this->wisModBox);
			this->Controls->Add(this->wisBox);
			this->Controls->Add(this->wisdomLabel);
			this->Controls->Add(this->intellModBox);
			this->Controls->Add(this->intellBox);
			this->Controls->Add(this->intellLabel);
			this->Controls->Add(this->constitModBox);
			this->Controls->Add(this->constitBox);
			this->Controls->Add(this->constitLabel);
			this->Controls->Add(this->dexModBox);
			this->Controls->Add(this->dexBox);
			this->Controls->Add(this->dexLabel);
			this->Controls->Add(this->strengthModBox);
			this->Controls->Add(this->strengthBox);
			this->Controls->Add(this->strengthLabel);
			this->Controls->Add(this->charAgeBox);
			this->Controls->Add(this->charAgeLabel);
			this->Controls->Add(this->charAlignmentBox);
			this->Controls->Add(this->charAlignmentLabel);
			this->Controls->Add(this->charRaceBox);
			this->Controls->Add(this->charRaceLabel);
			this->Controls->Add(this->playerNameBox1);
			this->Controls->Add(this->playerNameLabel1);
			this->Controls->Add(this->charBackgroundLabel);
			this->Controls->Add(this->charBackgroungBox);
			this->Controls->Add(this->charClassBox);
			this->Controls->Add(this->charClasslabel);
			this->Controls->Add(this->charNameBox);
			this->Controls->Add(this->characterNameLabel);
			this->Controls->Add(this->flawLabel);
			this->Controls->Add(this->bondLabel);
			this->Controls->Add(this->idealLabel);
			this->Controls->Add(this->personalityLabel);
			this->Controls->Add(this->ageBox);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->alignmentLabel);
			this->Controls->Add(this->alignmentBox);
			this->Controls->Add(this->playernameLabel);
			this->Controls->Add(this->backgroundLabel);
			this->Controls->Add(this->genderLabel);
			this->Controls->Add(this->classLabel);
			this->Controls->Add(this->raceLabel);
			this->Controls->Add(this->playerName);
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
			this->Text = L"Character Sheet";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charImageBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Drop down boxes
	private: System::Void raceBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void GenderBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BackgroundGenBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	//Character picture box
	private: System::Void charImageBox_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	
	//Start generation button
	private: System::Void StartGeneration_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//MessageBox::Show("Please enter ALL of the dropdown fields before clicking Start Generation.");
		
		std::string backgroundString;
		std::string raceString;
		std::string charName2;
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
		raceIndex = raceBox->SelectedIndex;
		Object^ raceItem = raceBox->SelectedItem;
		racItem = raceItem->ToString();
		MarshalString( racItem, raceString );

		//Converts decimal to int for age
		ageVal = (int)ageBox->Value;

		// Player Name
		player = playerName->Text;
		MarshalString( player, playerString );

		//generates alignment drop down box
		alignIndex = alignmentBox->SelectedIndex;
		Object^ alignItem = alignmentBox->SelectedItem;
		aliItem = alignItem->ToString();
		MarshalString( aliItem, alignmentString );

		//generates class drop down box
		classIndex = ClassBox->SelectedIndex;
		Object^ classItem = ClassBox->SelectedItem;
		clasItem = classItem->ToString();
		MarshalString( clasItem, classString );
		//this->charClassBox->Text = clasItem;

		//generates gender drop down box
		genIndex = GenderBox->SelectedIndex;
		Object^ genderItem = GenderBox->SelectedItem;
		genItem = genderItem->ToString();
		MarshalString( genItem, genderString );
		//this->GenderBox->Text = genItem;

		//generates background drop down box
		backgroundIndex = BackgroundGenBox->SelectedIndex;
		Object^ backgroundItem = BackgroundGenBox->SelectedItem;
		bGItem = backgroundItem->ToString();
		MarshalString( bGItem, backgroundString );

		//calls CharacterGenerator constructor
		char1 = new CharacterGenerator( playerString, characterString, raceString, genderString, backgroundString, classString, alignmentString, ageVal );

		//set Character Generator
		playerString = char1->getPlayerName();
		player = gcnew String(playerString.c_str());
		this->playerNameBox1->Text = player;

		ageVal = char1->getAge();
		this->charAgeBox->Text = ageVal.ToString();

		int armorClass = char1->getArmorClass();
		this->ACBox->Text = armorClass.ToString();

		int initiative = char1->getInitiative();
		this->InitiaBox->Text = (initiative > 0 ? "+" + initiative.ToString() : initiative.ToString());

		//set Character Race
		raceClass = char1->getCharacterRace();

		charName2 = raceClass->getName();
		String^ charName = gcnew String(charName2.c_str());
		this->charNameBox->Text = charName;

		raceString = raceClass->getRaceType();
		racItem = gcnew String(raceString.c_str());
		this->charRaceBox->Text = racItem;

		genderString = raceClass->getGender();
		genItem = gcnew String(genderString.c_str());
		this->GenderBox->Text = genItem;

		int speed = raceClass->getSpeed();
		this->speedBox->Text = speed.ToString();

		//set Character Class
		charClass = char1->getCharacterClass();

		classString = charClass->getClassType();
		clasItem = gcnew String(classString.c_str());
		this->charClassBox->Text = clasItem;

		int hitPoints = charClass->getHitPoints();
		this->HPBox->Text = hitPoints.ToString();

		//sets background text boxes
		background = char1->getCharacterBackground();

		backgroundString = background->getBackgroundType();
		bGItem = gcnew String(backgroundString.c_str());		
		this->charBackgroungBox->Text = bGItem;

		alignmentString = char1->getAlignment();
		aliItem = gcnew String(alignmentString.c_str());
		this->charAlignmentBox->Text = aliItem;

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

		//Populating ability boxes
		strength = char1->getStrength();
		this->strengthBox->Text = strength.ToString();

		dexterity = char1->getDexterity();
		this->dexBox->Text = dexterity.ToString();

		constitution = char1->getConstitution();
		this->constitBox->Text = constitution.ToString();

		intelligence = char1->getIntelligence();
		this->intellBox->Text = intelligence.ToString();

		wisdow = char1->getWisdom();
		this->wisBox->Text = wisdow.ToString();

		charisma = char1->getCharisma();
		this->charismaBox->Text = charisma.ToString();

		//Populating ability modifiers
		strMod = char1->getStrModifier();
		this->strengthModBox->Text = ( strMod > 0 ? "+" + strMod.ToString() : strMod.ToString() );
		this->strModBox->Text = ( strMod > 0 ? "+" + strMod.ToString() : strMod.ToString() );

		dexMod = char1->getDexModifier();
		this->dexModBox->Text =  ( dexMod > 0 ? "+" + dexMod.ToString() : dexMod.ToString() );
		this->dextModBox->Text = ( dexMod > 0 ? "+" + dexMod.ToString() : dexMod.ToString() );
		
		consMod = char1->getConsModifier();
		this->constitModBox->Text = ( consMod > 0 ? "+" + consMod.ToString() : consMod.ToString() );
		this->conModBox->Text = ( consMod > 0 ? "+" + consMod.ToString() : consMod.ToString() );
		
		intMod = char1->getIntModifier();
		this->intellModBox->Text = ( intMod > 0 ? "+" + intMod.ToString() : intMod.ToString() );
		this->intModBox->Text = ( intMod > 0 ? "+" + intMod.ToString() : intMod.ToString() );

		wisMod = char1->getWisModifier();
		this->wisModBox->Text =  ( wisMod > 0 ? "+" + wisMod.ToString() : wisMod.ToString() );
		this->wisdModBox->Text = ( wisMod > 0 ? "+" + wisMod.ToString() : wisMod.ToString() );
		
		chaMod = char1->getCharModifier();
		this->charismaModBox->Text = ( chaMod > 0 ? "+" + chaMod.ToString() : chaMod.ToString() );
		this->chaModBox->Text = ( chaMod > 0 ? "+" + chaMod.ToString() : chaMod.ToString() );

		//Populating skills
		this->proficiencyBox->Text = char1->getProficiencyBonus().ToString();

		this->athleBox->Text = (strMod > 0 ? "+" + strMod.ToString() : strMod.ToString());

		this->acrobBox->Text = (dexMod > 0 ? "+" + dexMod.ToString() : dexMod.ToString());
		this->handBox->Text =  (dexMod > 0 ? "+" + dexMod.ToString() : dexMod.ToString());
		this->stealthBox->Text = (dexMod > 0 ? "+" + dexMod.ToString() : dexMod.ToString());

		this->arcanaBox->Text = (intMod > 0 ? "+" + intMod.ToString() : intMod.ToString());
		this->histBox->Text = (intMod > 0 ? "+" + intMod.ToString() : intMod.ToString());
		this->investBox->Text = (intMod > 0 ? "+" + intMod.ToString() : intMod.ToString());
		this->natureBox->Text = (intMod > 0 ? "+" + intMod.ToString() : intMod.ToString());
		this->religionBox->Text = (intMod > 0 ? "+" + intMod.ToString() : intMod.ToString());

		this->animalBox->Text = (wisMod > 0 ? "+" + wisMod.ToString() : wisMod.ToString());
		this->InsightBox->Text = (wisMod > 0 ? "+" + wisMod.ToString() : wisMod.ToString());
		this->medBox->Text = (wisMod > 0 ? "+" + wisMod.ToString() : wisMod.ToString());
		this->perceptionBox->Text = (wisMod > 0 ? "+" + wisMod.ToString() : wisMod.ToString());
		this->survivalBox->Text = (wisMod > 0 ? "+" + wisMod.ToString() : wisMod.ToString());

		this->decepBox->Text = (chaMod > 0 ? "+" + chaMod.ToString() : chaMod.ToString());
		this->intimBox->Text = (chaMod > 0 ? "+" + chaMod.ToString() : chaMod.ToString());
		this->performBox->Text = (chaMod > 0 ? "+" + chaMod.ToString() : chaMod.ToString());
		this->persuaBox->Text = (chaMod > 0 ? "+" + chaMod.ToString() : chaMod.ToString());


		//Works only from image here.......not sure how to get it to pass an path from human?

		//Bitmap^ MyImage;   //creates new image object
		//if (MyImage != nullptr)
		//{
		//	delete MyImage; // destructor needed obviously
		//}

		//std::string fileName;

		//this is if you cant pass it from Human class

		//if (genderString.compare("Male") == 0)
			//fileName = "\\arnie2.bmp";
		//else // Defaults to Female character
			//fileName = "C:\\Users\\A\\My Documents\\bath.bmp";

		//String^ fileToDisplay = gcnew String(fileName.c_str());

		//for testing purposes

		//String^ fileToDisplay; // new string object needed for file path
		//fileToDisplay = "C:\\Users\\A\\My Documents\\arnie2.bmp";// NOTE REQUIRES DOUBLE \\
		
		//displays the image

		//charImageBox->SizeMode = PictureBoxSizeMode::StretchImage; // tells it to stretch
		//MyImage = gcnew Bitmap(fileToDisplay);                    // tells where to get image from
		//charImageBox->ClientSize = System::Drawing::Size(213, 192); // sets size of photo
		//charImageBox->Image = dynamic_cast<Image^>(MyImage);              // draws the image
	}

	//background text boxes
	private: System::Void personalityBox_TextChanged(System::Object^  sender, System::EventArgs^  e){
	}
	private: System::Void idealBox_TextChanged(System::Object^  sender, System::EventArgs^  e){
	}
	private: System::Void bondBox_TextChanged(System::Object^  sender, System::EventArgs^  e){
	}
	private: System::Void flawBox_TextChanged(System::Object^  sender, System::EventArgs^  e)	{
	}

	//accidental clicks on the label boxes
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void flawLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dexLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void InstructionLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dextModLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void speedBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}