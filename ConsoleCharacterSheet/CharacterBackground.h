#pragma once
#ifndef CharacterBackgroundH
#define CharacterBackgroundH
#include <iostream>
#include <string>
#include <map>
#include "Die.h"

using namespace std;

class CharacterBackground
{
	public:
		CharacterBackground();
		CharacterBackground(string);
		~CharacterBackground();
		void setPersonalityTrait( string );
		void setIdeal();
		void setBond();
		void setFlaw();
		string getPersonalityTrait();
		string getIdeal();
		string getBond();
		string getFlaw();
	private:
		void populateCrimMap();
		string charBackground;
		string personalityTrait;
		string ideal;
		string bond;
		string flaw;
		map <int, string> crimTrait;
		Die * die1D6;
		Die * die1D8;
};

#endif
