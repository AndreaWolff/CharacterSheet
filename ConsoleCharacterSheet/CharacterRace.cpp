#include "stdafx.h"
#include <iostream>
#include <string>
#include "CharacterRace.h"

using namespace std;

CharacterRace::CharacterRace()
{
}

CharacterRace::CharacterRace(string race, string gender)
{
	charRace = race;
	charGender = gender;

	//example for name
	//use the map set up in Human - use inheritance to get this?

	//this should be the set function created for name
	//if gender == male
	//use male names
	//dice 1d6
	//if gender == female
	//use female names
	//dice 1d6
	//get name to put into a text box in the form
}

CharacterRace::~CharacterRace()
{
}

