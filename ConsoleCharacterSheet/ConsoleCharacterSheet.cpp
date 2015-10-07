// ConsoleCharacterSheet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include "CharacterGenerator.h"
#include "MyForm1.h"
using namespace std;
using namespace ConsoleCharacterSheet;


int main()
{	
	Application::Run(gcnew MyForm);
	srand(time(0));
	//CharacterGenerator * char1 = new CharacterGenerator("", "", "", "Criminal");
    return 0;
}

