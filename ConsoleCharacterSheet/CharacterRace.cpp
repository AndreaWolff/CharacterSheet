#include "stdafx.h"
#include <iostream>
#include <string>
#include "CharacterRace.h"
#include "Die.h"

using namespace std;

CharacterRace::CharacterRace()
{
}

CharacterRace::CharacterRace( string gender )
{
	charGender = gender;

	// Die created here, so all derived classes can access it
	die1D6 = new Die(6, 1);
}

CharacterRace::~CharacterRace()
{
	delete die1D6;
}

void CharacterRace::setName(string)
{
}

string CharacterRace::getName()
{
	return charName;
}

string CharacterRace::getRaceType()
{
	return charRace;
}

string CharacterRace::getGender()
{
	return charGender;
}

int CharacterRace::getSpeed()
{
	return charSpeed;
}





