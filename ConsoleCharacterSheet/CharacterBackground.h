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
		CharacterBackground( string, string );
		~CharacterBackground();
		void setPersonalityTrait( string );
		void setIdeal( string, string );
		void setBond( string );
		void setFlaw( string );
		string getPersonalityTrait();
		string getIdeal();
		string getBond();
		string getFlaw();
		string getBackgroundType();
	private:
		void populateCrimMap();
		void populateFolkMap();
		void populateHermitMap();
		string backgroundType;
		string alignment;
		string personalityTrait;
		string ideal;
		string bond;
		string flaw;
		map <int, string> crimTrait;
		map <string, string> crimIdeal;
		map <int, string> crimBond;
		map <int, string> crimFlaw;
		map <int, string> folkTrait;
		map <string, string> folkIdeal;
		map <int, string> folkBond;
		map <int, string> folkFlaw;
		map <int, string> hermitTrait;
		map <string, string> hermitIdeal;
		map <int, string> hermitBond;
		map <int, string> hermitFlaw;
		Die * die1D6;
		Die * die1D8;
};

#endif
