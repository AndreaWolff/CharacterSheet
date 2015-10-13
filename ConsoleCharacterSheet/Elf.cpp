#include "stdafx.h"
#include "Elf.h"

Elf::Elf()
{
	
}

Elf::Elf( string gender ) : CharacterRace( gender )
{
	darkvision = true;

	charRace = "Elf";
	charSpeed = 30;
	populateElfNameMap();
	setName( gender );
}

Elf::~Elf()
{
}

void Elf::populateElfNameMap()
{
	elfMaleName.insert({ 1, "Ara Xiloscient" });
	elfMaleName.insert({ 2, "Bryn Siannodel" });
	elfMaleName.insert({ 3, "Del Nailo" });
	elfMaleName.insert({ 4, "Eryn Meliamne" });
	elfMaleName.insert({ 5, "Faen Liadon" });
	elfMaleName.insert({ 6, "Innil Illphelkiir" });

	elfFemaleName.insert({ 1, "Adrie Meliamne" });
	elfFemaleName.insert({ 2, "Drusilia Illphelkiir" });
	elfFemaleName.insert({ 3, "Enna Holimion" });
	elfFemaleName.insert({ 4, "Mialee Galanodel" });
	elfFemaleName.insert({ 5, "Sariel Amastacia" });
	elfFemaleName.insert({ 6, "Valanthe Amakiir" });
}

string Elf::getName()
{
	return charName;
}

void Elf::setName( string gender )
{
	if (gender.compare("Male") == 0)
	{
		charName = elfMaleName.at(die1D6->rollDie());
	}
	else // Defaults to Female character
	{
		charName = elfFemaleName.at(die1D6->rollDie());
	}
}
