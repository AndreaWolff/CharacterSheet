#include "stdafx.h"
#include <iostream>
#include "Die.h"

using namespace std;

Die::Die()
{
}

Die::Die(int min, int max)
{
	minValue = min;
	maxValue = max;
	rollDie();
}

Die::~Die()
{
}

int Die::rollDie()
{
	cout << minValue << endl << maxValue;
	return 0;
}
