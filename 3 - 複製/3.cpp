#include<iostream>
#include"creatrue.h"
#include"human.h"
#include"demon.h"
#include"elf.h"
using namespace std;

int
main(void)
{
	srand(time(0));
	Creature a;
	Cyberdemon b;
	Balrogs c;
	Elf d;
	
	a.getDamage();
	b.getDamage();
	c.getDamage();
	d.getDamage();
	
}