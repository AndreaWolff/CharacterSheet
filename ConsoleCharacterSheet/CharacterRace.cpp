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
	// Will add these at later stage
	//charSpeed = speed;
	//charAge = age;

	// Die here should mean all derived classes can access it
	die1D6 = new Die(6, 1);
}

CharacterRace::~CharacterRace()
{
	delete die1D6;
}



