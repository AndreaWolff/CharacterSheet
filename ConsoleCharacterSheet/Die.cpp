#include "stdafx.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>   
#include <time.h> 
#include <iostream>
#include "Die.h"

using namespace std;

Die::Die()
{
}

Die::~Die()
{
}

int Die::rollDie(int max, int min)
{
	//randomly generates any numbers that we call into this
	//used for alot of different class - pointers?

	//srand(time(NULL));
	//return value = rand() % maxValue + minValue;
	cout << maxValue << endl << minValue;
	return 0;
}
