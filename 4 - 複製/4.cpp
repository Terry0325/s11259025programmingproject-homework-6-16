#include<iostream>
#include"creatrue.h"
#include"human.h"
#include"demon.h"
#include"elf.h"
void battleArena(Creature& creature1, Creature& creature2);
void testd(Creature& creature1);
using namespace std;


int
main(void)
{
	srand(time(0));
	Creature a;
	Cyberdemon b;
	Balrogs c;
	Elf d;
	int f;
	battleArena(c, d);
	

}

void battleArena(Creature& creature1, Creature& creature2)
{
	int creature1_hp = creature1.get_hitpoints();
	int creature2_hp = creature2.get_hitpoints();
	int creature1_damage;
	int creature2_damage;
	do {
			creature1_damage = creature1.getDamage();
			creature2.set_hitpoints(creature2.get_hitpoints() - creature1_damage);
			cout << "\nNow the" << creature2.getSpecies() << " have" << creature2.get_hitpoints() << " hp\n" << endl;
			creature2_damage = creature2.getDamage();
			creature1.set_hitpoints(creature1.get_hitpoints() - creature2_damage);
			cout << "\nNow the" << creature1.getSpecies() << " have" << creature1.get_hitpoints() << " hp" << endl;

		
		
		if (creature2.get_hitpoints() <= 0 && creature1.get_hitpoints() <= 0) {
			cout << "tie" << endl;
			creature1.set_hitpoints(creature1_hp);
			creature2.set_hitpoints(creature2_hp);
		}
		else if(creature2.get_hitpoints() <= 0 && creature1.get_hitpoints() >= 0){
			cout << creature1.getSpecies() <<" win"<< endl;
			break;
		}
		else if (creature2.get_hitpoints() >= 0 && creature1.get_hitpoints() <= 0) {
			cout << creature2.getSpecies() << " win" << endl;
			break;
		}


	} while (1);
}
