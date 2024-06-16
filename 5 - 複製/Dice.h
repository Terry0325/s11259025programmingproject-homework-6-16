#ifndef DICE_H
#define DICE_H
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

class Dice
{
public:
	Dice()
	{
		numSides = 6;
		srand(time(NULL)); // Seeds random number generator
	}
	Dice(int numSides)
	{
		this->numSides = numSides;
		srand(time(NULL)); // Seeds random number generator
	}
	virtual int rollDice()const
	{
		return (rand() % numSides) + 1;
	}
	// Take two dice objects, roll them, and return the sum
	int rollTwoDice(const Dice & die1, const Dice & die2)
	{
		int dice1 = die1.rollDice();
		int dice2 = die2.rollDice();
		cout << "Dice1 got " << dice1 << " point"<<endl;
		cout << "Dice2 got " << dice2 << " point" << endl;

		return dice1+ dice2;
	}
	
	 
protected:
	int numSides;
};

class LoadedDice :public Dice
{
public:
	LoadedDice() :Dice()
	{

	}
	LoadedDice(int numSides) :Dice(numSides)
	{

	}

	int rollDice()const
	{
		if (rand() % 100 < 50) {
			return (numSides);
		}
		else {
			return (rand() % numSides - 1) + 1;
		}
	}

};

#endif // !DICE_H
