#include<iostream>
#include"Dice.h"
using namespace std;
int
main(void)
{
	Dice x(100);
	Dice y(50);
	LoadedDice a(100);
	LoadedDice b(50);

	
	for (int i = 0; i <= 100; i++) {
		cout << x.rollTwoDice(x, y) << endl<<endl;
	}
	for (int i = 0; i <= 100; i++) {
		cout << a.rollTwoDice(a, b) << endl << endl;
	}
	
}