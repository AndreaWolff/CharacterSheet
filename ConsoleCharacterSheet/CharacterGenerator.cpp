#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "CharacterGenerator.h"
#include "Human.h"
#include "Dwarf.h"
#include "Elf.h"
#include "Fighter.h"
#include "Cleric.h"
#include "Ranger.h"
#include "Wizard.h"

using namespace std;

CharacterGenerator::CharacterGenerator() 
{
}

CharacterGenerator::CharacterGenerator( string player, string rRace, string gGender, string background, string cClass, string aAlignment, int aAge )
{
	//Race, Class, Gender and Background brought in from the sheet generator on form 1
	statGenDice = new Die(18, 8);

	level = 1;
	proficiencyBonus = 2;
	armorClass = 10;
	age = aAge;
	alignment = aAlignment;

	setPlayerName( player );
	generateStats();
	setRace( rRace, gGender );
	setClass(cClass);
	setBackGround( background, alignment );
}

CharacterGenerator::~CharacterGenerator()
{
	delete statGenDice;
	delete charBackground;
	delete charRace;
	delete charClass;
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

void CharacterGenerator::setClass( string chosenClass )
{
	if (chosenClass.compare("Fighter") == 0) 
		charClass = new Fighter( consModifier );
	else {
		if (chosenClass.compare("Ranger") == 0) 
			charClass = new Ranger( consModifier );
		else {
			if (chosenClass.compare("Cleric") == 0) 
				charClass = new Cleric( consModifier );
			else {
				if (chosenClass.compare("Wizard") == 0) 
					charClass = new Wizard(consModifier);
			}
		}
	}
	
}

void CharacterGenerator::setBackGround( string background, string alignment )
{
	charBackground = new CharacterBackground( background, alignment );
}

void CharacterGenerator::setRace( string race, string gender )
{
	if ( race.compare( "Human" ) == 0 )
		charRace = new Human( gender );
	else {
		if (race.compare("Elf") == 0)
			charRace = new Elf( gender );
		else {
			if (race.compare("Dwarf") == 0)
				charRace = new Dwarf( gender );
		}
	}
}

CharacterBackground * CharacterGenerator::getCharacterBackground()
{
	return charBackground;
}

CharacterRace * CharacterGenerator::getCharacterRace()
{
	return charRace;
}

CharacterClass * CharacterGenerator::getCharacterClass()
{
	return charClass;
}

void CharacterGenerator::setLevel(int levelUp)
{
	//character starts at level one but can manually be input to level 2?? for expanding??
	level = levelUp;
}
int CharacterGenerator::getLevel()
{
	return level;
}

void CharacterGenerator::setPlayerName(string name)
{
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

int CharacterGenerator::getAge()
{
	return age;
}

string CharacterGenerator::getAlignment()
{
	return alignment;
}

int CharacterGenerator::getInitiative()
{
	return dexModifier;
}

int CharacterGenerator::getArmorClass()
{
	return armorClass = armorClass + dexModifier;
}

