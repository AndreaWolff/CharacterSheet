#include "stdafx.h"
#include <iostream>
#include <string>
#include "CharacterGenerator.h"
#include <conio.h>

using namespace std;

CharacterGenerator::CharacterGenerator() 
{
}

//for testing the GUI
CharacterGenerator::CharacterGenerator(string background)
{
	//charRace, Class, Gender and Background brought in from the sheet generator on form 1

	level = 1;

	statGenDice = new Die(18, 8);

	charBackground = new CharacterBackground(background);

	generateStats();
	printStats();

}

CharacterGenerator::CharacterGenerator(string race, string chClass, string gender, string background)
{
	//charRace, Class, Gender and Background brought in from the sheet generator on form 1
	charRace = race;
	charClass = chClass;
	charGender = gender;

	level = 1;
	
	statGenDice = new Die(18,8);

	charBackground = new CharacterBackground( background );
	
	generateStats();
	printStats();

}

CharacterGenerator::~CharacterGenerator()
{
	delete statGenDice;
	delete charBackground;
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

