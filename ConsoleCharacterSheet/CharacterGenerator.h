#pragma once
#ifndef CharacterGeneratorH
#define CharacterGeneratorH
#include <iostream>
#include <string>
#include "Die.h"
#include "CharacterBackground.h"
#include "CharacterRace.h"
#include "CharacterClass.h"

using namespace std;

class CharacterGenerator
{
	public:
		CharacterGenerator();
		CharacterGenerator(string, string, string, string );
		//CharacterGenerator( string, string, string, string );
		~CharacterGenerator();

		void setStrength();
		void setDexterity();
		void setConstitution();
		void setWisdom();
		void setIntelligence();
		void setCharisma();
		void setStrModifier();
		void setDexModifier();
		void setConsModifier();
		void setWisModifier();
		void setIntModifier();
		void setCharModifier();

		int getStrength();
		int getDexterity();
		int getConstitution();
		int getWisdom();
		int getIntelligence();
		int getCharisma();
		int getStrModifier();
		int getDexModifier();
		int getConsModifier();
		int getWisModifier();
		int getIntModifier();
		int getCharModifier();

		void setClass( string );
		void setBackGround( string, string );
		void setRace( string, string );
		void setLevel( int );
		int getLevel();
		void setPlayerName( string );
		string getPlayerName();
		void setProficiencyBonus( int );
		int getProficiencyBonus();

	private:
		void generateStats();
		void printStats();
		string playerName;
		string classType;
		string raceType;
		string backgroundType;
		string gender;
		int strength;
		int dexterity;
		int constitution;
		int wisdom;
		int intelligence;
		int charisma;
		int strModifier;
		int dexModifier;
		int consModifier;
		int wisModifier;
		int intModifier;
		int charModifier;
		int level;
		int proficiencyBonus;
		Die * statGenDice;
		CharacterBackground * charBackground;
		CharacterRace * charRace;
		CharacterClass * charClass;
};

#endif

