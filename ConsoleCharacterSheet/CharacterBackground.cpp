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
	charBackground = background;
}

CharacterBackground::~CharacterBackground()
{
}

string CharacterBackground::getPersonalityTraits()
{
	return charBackground;
}

