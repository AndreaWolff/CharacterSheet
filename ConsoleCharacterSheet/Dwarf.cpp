#include "stdafx.h"
#include "Dwarf.h"

Dwarf::Dwarf()
{
}

Dwarf::Dwarf( string gender ) : CharacterRace( gender )
{
	darkvision = true;

	charRace = "Dwarf";
	charSpeed = 25;
	populateDwarfNameMap();
	setName(gender);
}

Dwarf::~Dwarf()
{
}

void Dwarf::populateDwarfNameMap()
{
	dwarfMaleName.insert({ 1, "Adrik Ungart" });
	dwarfMaleName.insert({ 2, "Brottor Torunn" });
	dwarfMaleName.insert({ 3, "Darrak Strakeln" });
	dwarfMaleName.insert({ 4, "Fargrim Rumnaheim" });
	dwarfMaleName.insert({ 5, "Orsik Lutgehr" });
	dwarfMaleName.insert({ 6, "Ulfgar Ironfist" });

	dwarfFemaleName.insert({ 1, "Amber Holderhekk" });
	dwarfFemaleName.insert({ 2, "Diesa Gorunn" });
	dwarfFemaleName.insert({ 3, "Helja Fireforge" });
	dwarfFemaleName.insert({ 4, "Kristryd Dankill" });
	dwarfFemaleName.insert({ 5, "Riswynn Battlehammer" });
	dwarfFemaleName.insert({ 6, "Vistra Brawnanvil" });
}

string Dwarf::getName()
{
	return charName;
}

void Dwarf::setName( string gender )
{
	if (gender.compare("Male") == 0)
	{
		charName = dwarfMaleName.at(die1D6->rollDie());
	}
	else // Defaults to Female character
	{
		charName = dwarfFemaleName.at(die1D6->rollDie());
	}
}
