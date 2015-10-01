#pragma once
#ifndef CharacterGeneratorH
#define CharacterGeneratorH
#include <iostream>
#include <string>

using namespace std;

class CharacterGenerator
{
	public:
		CharacterGenerator();
		CharacterGenerator(string, string, string, string);
		//CharacterGenerator(const CharacterGenerator&);
		~CharacterGenerator();
		//void setStrength(int, int);
		//void setDexterity(int, int);
		//void setConstitution(int, int);
		//void setWisdom(int, int);
		//void setIntelligence(int, int);
		//void setCharisma(int, int);
		int getStrength();
		int getDexterity();
		int getConstitution();
		int getWisdom();
		int getIntelligence();
		int getCharisma();
		//int getStrModifier();
		//int getDexModifier();
		//int getConsModifier();
		//int getWisModifier();
		//int getIntModifier();
		//int getCharModifier();
		void setLevel(int);
		int getLevel();
		void setPlayerName(string);
		string getPlayerName();
		void setProficiencyBonus(int);
		int getProficiencyBonus();
	private:
		string charRace;
		string charClass;
		string charGender;
		string charBackground;
		string playerName;
		int minNum;
		int maxNum;
		int strength;
		int dexterity;
		int constitution;
		int wisdom;
		int intelligence;
		int charisma;
		//int strModifier;
		//int dexModifier;
		//int consModifier;
		//int wisModifier;
		//int intModifier;
		//int charModifier;
		int level;
		int proficiencyBonus;
};

#endif

