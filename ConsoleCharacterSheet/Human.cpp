#include "stdafx.h"
#include "Human.h"

Human::Human()
{

}

Human::Human( string gender ) : CharacterRace( gender )
{
	//									^ This calls the base class on instantiation of the derived object

	darkvision = false;

	populateHumanNameMap();
	setName( gender );
}

Human::~Human()
{
}

void Human::populateHumanNameMap()
{
	humanMaleName.insert( { 1, "Aseir Basha" } );
	humanMaleName.insert( { 2, "Darvin Amblecrown" } );
	humanMaleName.insert( { 3, "Bor Bersk" } );
	humanMaleName.insert( { 4, "Ander Brightwood" } );
	humanMaleName.insert( { 5, "Ramas Fezim" } );
	humanMaleName.insert( { 6, "Vladislak Ulmokina" } );

	humanFemaleName.insert( { 1, "Arveene Buckman" } );
	humanFemaleName.insert( { 2, "Kethra Windrivver" } );
	humanFemaleName.insert( { 3, "Chathi Nathandem" } );
	humanFemaleName.insert( { 4, "Yuldra Dyernina" } );
	humanFemaleName.insert( { 5, "Jia Ling" } );
	humanFemaleName.insert( { 6, "Quara Falone" } );
}

 void Human::setName( string gender) 
{
	if (gender.compare("Male") == 0)
	{
		charName = humanMaleName.at(die1D6->rollDie());
	}
	else // Defaults to Female character
	{
		charName = humanFemaleName.at(die1D6->rollDie());
	}
}
 string Human::getName()
 {
	 return charName;
 }