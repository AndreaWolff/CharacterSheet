#include "stdafx.h"
#include <iostream>
#include <string>
#include "CharacterGenerator.h"

using namespace std;

CharacterGenerator::CharacterGenerator() 
{
}

CharacterGenerator::CharacterGenerator(string race, string chClass, string gender, string background)
{
	//charRace, Class, Gender and Background brought in from the sheet generator on form 1
	charRace = race;
	charClass = chClass;
	charGender = gender;
	charBackground = background;
	level = 1;
	minNum = 8;
	maxNum = 18;
}

CharacterGenerator::~CharacterGenerator()
{
}

int CharacterGenerator::getStrength() 
{
	return strength = dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getDexterity() 
{
	return dexterity = dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getConstitution()
{
	return constitution = dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getWisdom()
{
	return wisdom = dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getIntelligence()
{
	return intelligence = dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getCharisma()
{
	return charisma = dice.rollDie(minNum, maxNum);
}

int CharacterGenerator::getStrModifier()
{
	return strModifier = (strength - 10) / 2;
}

int CharacterGenerator::getDexModifier()
{
	return dexModifier = (dexterity - 10) / 2;
}

int CharacterGenerator::getConsModifier()
{
	return consModifier = (constitution - 10) / 2;
}

int CharacterGenerator::getWisModifier()
{
	return wisModifier = (wisdom - 10) / 2;
}

int CharacterGenerator::getIntModifier()
{
	return intModifier = (intelligence - 10) / 2;
}

int CharacterGenerator::getCharModifier()
{
	return charModifier = (charisma - 10) / 2;
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

