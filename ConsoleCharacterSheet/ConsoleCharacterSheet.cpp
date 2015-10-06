// ConsoleCharacterSheet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include "CharacterGenerator.h"
using namespace std;

int main()
{
	srand(time(0));
	CharacterGenerator * char1 = new CharacterGenerator("","","","Criminal");

	delete char1;

	_getch();
    return 0;
}

