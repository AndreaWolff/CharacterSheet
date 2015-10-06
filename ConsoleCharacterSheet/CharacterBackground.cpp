#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include "CharacterBackground.h"
#include "Die.h"

using namespace std;

CharacterBackground::CharacterBackground()
{
}

CharacterBackground::CharacterBackground(string background)
{
	//initialized the charBackground to the one the user chose
	die1D6 = new Die(6, 1);
	die1D8 = new Die(8, 1);

	populateCrimMap();
	setPersonalityTrait( background );
	cout << getPersonalityTrait() << endl;
}

void CharacterBackground::populateCrimMap()
{
	crimTrait.insert( { 1, "I always have a plan for what to do when things go wrong." } );
	crimTrait.insert( { 2, "I am always calm, no matter what the situation.I never raise my voice or let my emotions control me." } );
	crimTrait.insert( { 3, "The first thing I do in a new place is note the locations of everything valuable - or where such things could be hidden." });
	crimTrait.insert( { 4, "I would rather make a new friend than a new enemy." });
	crimTrait.insert( { 5, "I am incredibly slow to trust.Those who seem the fairest often have the most to hide." });
	crimTrait.insert( { 6, "I dont pay attention to the risks in a situation. Never tell me the odds." });
	crimTrait.insert( { 7, "The best way to get me to do something is to tell me I can't do it." });
	crimTrait.insert( { 8, "I blow up at the slightest insult." });
}

CharacterBackground::~CharacterBackground()
{
	delete die1D6;
	delete die1D8;
}

void CharacterBackground::setPersonalityTrait( string background ) 
{
	if ( background.compare("Criminal") == 0 )
	{
		personalityTrait = crimTrait.at(die1D8->rollDie());
	}
}

void CharacterBackground::setIdeal() 
{

}

void CharacterBackground::setBond() 
{

}

void CharacterBackground::setFlaw() 
{

}

string CharacterBackground::getPersonalityTrait()
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