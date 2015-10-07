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
	srand(time(0));
	Application::Run(gcnew MyForm);

    return 0;
}

