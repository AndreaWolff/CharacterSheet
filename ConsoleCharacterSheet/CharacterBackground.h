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
		//void setPersonalityTraits(string);
		string getPersonalityTraits();
	private:
		string charBackground;
		string personalityTrait;
};

#endif
