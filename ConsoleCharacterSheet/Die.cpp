#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include "Die.h"

using namespace std;

Die::Die()
{
}


Die::Die(int max, int min) : maxValue( max ) , minValue ( min )
{
}


Die::~Die()
{
}

int Die::rollDie()
{
	return value = minValue + rand() % ( maxValue + 1 - minValue);
}
