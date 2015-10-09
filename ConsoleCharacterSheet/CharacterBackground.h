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
		CharacterBackground( string );
		~CharacterBackground();
		void setPersonalityTrait( string );
		void setIdeal( string );
		void setBond( string );
		void setFlaw( string );
		string getPersonalityTrait();
		string getIdeal();
		string getBond();
		string getFlaw();
		string getAlignment();
		string getBackgroundType();
	private:
		void populateCrimMap();
		void populateFolkMap();
		void populateHermitMap();
		string backgroundType;
		string personalityTrait;
		string ideal;
		string bond;
		string flaw;
		map <int, string> crimTrait;
		map <int, string> crimIdeal;
		map <int, string> crimBond;
		map <int, string> crimFlaw;
		map <int, string> folkTrait;
		map <int, string> folkIdeal;
		map <int, string> folkBond;
		map <int, string> folkFlaw;
		map <int, string> hermitTrait;
		map <int, string> hermitIdeal;
		map <int, string> hermitBond;
		map <int, string> hermitFlaw;
		Die * die1D6;
		Die * die1D8;
};

#endif
