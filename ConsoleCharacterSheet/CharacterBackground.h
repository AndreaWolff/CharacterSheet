#pragma once
#ifndef CharacterBackgroundH
#define CharacterBackgroundH
#include <iostream>
#include <string>

using namespace std;

class CharacterBackground
{
	public:
		CharacterBackground();
		CharacterBackground(string);
		~CharacterBackground();
		string getPersonalityTraits();
		string getIdeal();
		string getBond();
		string getFlaw();
	private:
		string charBackground;
		string personalityTrait;
		string ideal;
		string bond;
		string flaw;
};

#endif
