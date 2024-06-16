#ifndef ELF_H
#define ELF_H
#include"creatrue.h"
#include<iostream>;
using namespace std;
class Elf :public Creature
{
public:
    Elf() :Creature()
    {
        this->type = 3;

    }


    int getDamage()
    {

        int damage = Creature::getDamage();
        if ((rand() % 10) == 0)
        {
            cout << "Magical attack inflicts " << damage <<
                " additional damage points!" << endl;
            damage = damage * 2;
        }
        return(damage);


    }

};

#endif // !ELF_H

#pragma once
