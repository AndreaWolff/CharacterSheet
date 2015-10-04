#include "stdafx.h"
#include <iostream>
#include <string>
#include "CharacterBackground.h"

using namespace std;

CharacterBackground::CharacterBackground()
{
}

CharacterBackground::CharacterBackground(string background)
{
	//initialized the charBackground to the one the user chose
	charBackground = background;
}

CharacterBackground::~CharacterBackground()
{
}

string CharacterBackground::getPersonalityTraits()
{
	//from charBackground, get the background of the character
	//call rollDie() to get a random number
	//call a textfile to find the background that does with the random number
	//assign background to variable for this function
	return personalityTrait; 
}

string CharacterBackground::getIdeal()
{
	//from charBackground, get the background of the character
	//call rollDie() to get a random number
	//call a textfile to find the background that does with the random number
	//assign background to variable for this function
	return ideal;
}

string CharacterBackground::getBond()
{
	//from charBackground, get the background of the character
	//call rollDie() to get a random number
	//call a textfile to find the background that does with the random number
	//assign background to variable for this function
	return bond;
}

string CharacterBackground::getFlaw()
{
	//from charBackground, get the background of the character
	//call rollDie() to get a random number
	//call a textfile to find the background that does with the random number
	//assign background to variable for this function
	return flaw;
}