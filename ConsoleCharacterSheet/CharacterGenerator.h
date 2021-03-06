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
		CharacterGenerator( string, string, string, string, string, string, int );
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

		CharacterBackground* getCharacterBackground();
		CharacterRace* getCharacterRace();
		CharacterClass* getCharacterClass();

		void setLevel( int );
		int getLevel();
		void setPlayerName( string);
		string getPlayerName();
		void setProficiencyBonus( int );
		int getProficiencyBonus();
		int getAge();
		string getAlignment();
		int getInitiative();
		int getArmorClass();
	private:
		void generateStats();
		string playerName;
		string charName;
		string alignment;
		int age;
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
		int initiative;
		int armorClass;

		Die * statGenDice;
		CharacterBackground * charBackground;
		CharacterRace * charRace;
		CharacterClass * charClass;
};

#endif

