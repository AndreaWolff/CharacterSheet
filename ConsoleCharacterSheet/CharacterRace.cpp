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

void CharacterRace::setName(string)
{
}

string CharacterRace::getName()
{
	return charName;
}

//void CharacterRace::setCharacterImage( string gender )
//{
//	if (gender.compare("Male") == 0)
//			 fileName = "C:\\Users\\A\\My Documents\\arnie2.bmp";
//	else // Defaults to Female character
//			fileName = "C:\\Users\\A\\My Documents\\bath.bmp";
//}

//string CharacterRace::getCharacterImage()
//{
//	return fileName;
//}

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





