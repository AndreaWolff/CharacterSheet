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
	charRace = race;
	charClass = chClass;
	charGender = gender;
	charBackground = background;
	minNum = 8;
	maxNum = 18;
}

CharacterGenerator::~CharacterGenerator()
{
}

int CharacterGenerator::getStrength() {
	return strength; //= dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getDexterity() {
	return dexterity; //= dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getConstitution() {
	return constitution; //= dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getWisdom() {
	return wisdom; //= dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getIntelligence() {
	return intelligence; //= dice.rollDie(minNum, maxNum);
}
int CharacterGenerator::getCharisma() {
	return charisma; //= dice.rollDie(minNum, maxNum);
}

//int getStrModifier(); This depends on the Character Race
//int getDexModifier(); This may need sets first before gets
//int getConsModifier();
//int getWisModifier();
//int getIntModifier();
//int getCharModifier();

void CharacterGenerator::setLevel(int levelUpDown) {
	level = levelUpDown;
}
int CharacterGenerator::getLevel() {
	return level;
}

void CharacterGenerator::setPlayerName(string name) {
	playerName = name;
}
string CharacterGenerator::getPlayerName() {
	return playerName;
}

void CharacterGenerator::setProficiencyBonus(int bonus) {
	proficiencyBonus = bonus;
}
int CharacterGenerator::getProficiencyBonus() {
	return proficiencyBonus;
}

