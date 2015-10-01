#pragma once
#ifndef DieH
#define DieH

class Die
{
public:
	Die();
	Die(int, int);
	~Die();
	int rollDie();
private:
	int maxValue;
	int minValue;
};

#endif
