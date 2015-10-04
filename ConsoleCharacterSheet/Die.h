#pragma once
#ifndef DieH
#define DieH

class Die
{
	public:
		Die();
		~Die();
		int rollDie(int, int);
	private:
		int maxValue;
		int minValue;
		int value;
};

#endif
