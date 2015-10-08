#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "CharacterGenerator.h"
#include "Human.h"
#include "Fighter.h"

using namespace std;

CharacterGenerator::CharacterGenerator() 
{
}

//for testing the GUI
CharacterGenerator::CharacterGenerator( string rRace, string gGender, string background)
{
	//charRace, Class, Gender and Background brought in from the sheet generator on form 1
	//Starting with Human Race first
	level = 1;

	statGenDice = new Die(18, 8);
	generateStats();

	// Moved object creation to respective functions. I thought it tidied things up, but feel free to move them back
	
	setRace( rRace, gGender );
	//setClass("Fighter");
	setBackGround( background, "Lawful Neutral" );
	
	printStats();

}
/*
CharacterGenerator::CharacterGenerator( string race1, string chClass, string gender2, string background )
{
	//charRace, Class, Gender and Background brought in from the sheet generator on form 1
	charRace = race1;
	charClass = chClass;
	charGender = gender2;

	level = 1;
	
	statGenDice = new Die(18,8);

	charBackground = new CharacterBackground( background );
	charRace = new CharacterRace(race1);
	charGender = new CharacterRace(gender1);
	
	generateStats();
	printStats();

}
*/
CharacterGenerator::~CharacterGenerator()
{
	delete statGenDice;
	delete charBackground;
	delete charRace;
	//delete charClass;
}

// set methods

void CharacterGenerator::setStrength() 
{
	 strength = statGenDice->rollDie();
}
void CharacterGenerator::setDexterity()
{
	 dexterity = statGenDice->rollDie();
}
void CharacterGenerator::setConstitution()
{
	 constitution = statGenDice->rollDie();
}
void CharacterGenerator::setWisdom()
{
	 wisdom = statGenDice->rollDie();
}
void CharacterGenerator::setIntelligence()
{
	 intelligence = statGenDice->rollDie();
}
void CharacterGenerator::setCharisma()
{
	 charisma = statGenDice->rollDie();
}

void CharacterGenerator::setStrModifier()
{
	 strModifier = (strength - 10) / 2;
}

void CharacterGenerator::setDexModifier()
{
	 dexModifier = (dexterity - 10) / 2;
}

void CharacterGenerator::setConsModifier()
{
	 consModifier = (constitution - 10) / 2;
}

void CharacterGenerator::setWisModifier()
{
	 wisModifier = (wisdom - 10) / 2;
}

void CharacterGenerator::setIntModifier()
{
	 intModifier = (intelligence - 10) / 2;
}

void CharacterGenerator::setCharModifier()
{
	 charModifier = (charisma - 10) / 2;
}

void CharacterGenerator::generateStats()
{
	setStrength();
	setDexterity();
	setConstitution();
	setWisdom();
	setIntelligence();
	setCharisma();
	setStrModifier();
	setDexModifier();
	setConsModifier();
	setWisModifier();
	setIntModifier();
	setCharModifier();
}

void CharacterGenerator::printStats() 
{
	cout << "Strength = " << getStrength() << endl;
	cout << "Dexterity = " << getDexterity() << endl;
	cout << "Constitution = " << getConstitution() << endl;
	cout << "Wisdom = " << getWisdom() << endl;
	cout << "Intelligence = " << getIntelligence() << endl;
	cout << "Charisma = " << getCharisma() << endl;
	cout << "StrMod = " << getStrModifier() << endl;
	cout << "DexMod = " << getDexModifier() << endl;
	cout << "ConsMod = " << getConsModifier() << endl;
	cout << "WisMod = " << getWisModifier() << endl;
	cout << "IntMod = " << getIntModifier() << endl;
	cout << "CharMod = " << getCharModifier() << endl;
	//cout << charRace->getName << endl;
}

// get methods

int CharacterGenerator::getStrength()
{
	return strength;
}
int CharacterGenerator::getDexterity()
{
	return dexterity;
}
int CharacterGenerator::getConstitution()
{
	return constitution;
}
int CharacterGenerator::getWisdom()
{
	return wisdom;
}
int CharacterGenerator::getIntelligence()
{
	return intelligence;
}
int CharacterGenerator::getCharisma()
{
	return charisma;
}

int CharacterGenerator::getStrModifier()
{
	return strModifier;
}

int CharacterGenerator::getDexModifier()
{
	return dexModifier;
}

int CharacterGenerator::getConsModifier()
{
	return consModifier;
}

int CharacterGenerator::getWisModifier()
{
	return wisModifier;
}

int CharacterGenerator::getIntModifier()
{
	return intModifier;
}

int CharacterGenerator::getCharModifier()
{
	return charModifier;
}


//


void CharacterGenerator::setClass( string chosenClass )
{
	if (chosenClass.compare("Fighter") == 0) {
		charClass = new Fighter( constitution );
	}
	
}

void CharacterGenerator::setBackGround( string background, string alignment )
{
	charBackground = new CharacterBackground( background, alignment );
}

void CharacterGenerator::setRace( string race, string gender )
{
	// Hard coded human object instantiation to test inheritence
	// Will turn into a decision based on race chosen in form

	if ( race.compare( "Human" ) == 0 )
	{
		charRace = new Human( gender );
	}
}

void CharacterGenerator::setLevel(int levelUpDown)
{
	//character starts at level one but can manually be input to level 2?? for expanding??
	level = levelUpDown;
}
int CharacterGenerator::getLevel()
{
	return level;
}

void CharacterGenerator::setPlayerName(string name)
{
	//have to get the user to input their own name on the sheet
	playerName = name; 
}
string CharacterGenerator::getPlayerName()
{
	return playerName;
}

void CharacterGenerator::setProficiencyBonus(int bonus)
{
	//depends on the level but starts at 1 - which was initialized in this constructor
	proficiencyBonus = bonus;
}
int CharacterGenerator::getProficiencyBonus()
{
	return proficiencyBonus;
}

