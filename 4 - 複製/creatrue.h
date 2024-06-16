#ifndef CREATRUE_H
#define CREATRUE_H
#include<string>
#include<cstdlib>

using namespace std;

class Creature
{
protected:
    int type;
    // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    int strength;
    // How much damage we can inflict
    int hitpoints;  // How much damage we can sustain
   
public:
    string getSpecies()
    {
        switch (type)
        {
        case 0: return "Human";
        case 1: return "Cyberdemon";
        case 2: return "Balrog";
        case 3: return "Elf";
        }
        return "Unknown";
    }
    // Returns type of species
    Creature()
    {

        this->type = 0;
        this->strength = 10;
        this->hitpoints = 10;

    }
    // Initialize to human, 10 strength, 10 hit points
    Creature(int newType, int newStrength, int newHit)
    {
        this->type = newType;
        this->strength = newStrength;
        this->hitpoints = newHit;
    }
    // Initialize creature to new type, strength, hit points
    // Also add appropriate accessor and mutator functions
    // for type, strength, and hit points
    void set_type(int newType)
    {
        this->type = newType;
    }
    void set_strength(int newStrength)
    {
        this->strength = newStrength;
    }
    void set_hitpoints(int newHit)
    {
        this->hitpoints = newHit;
    }


    int get_type()
    {
        return(this->type);
    }
    int get_strength()
    {
        return(this->strength);
    }
    int get_hitpoints()
    {
        return(this->hitpoints);
    }


    virtual int getDamage()
    {

        int damage;
        // All creatures inflict damage, which is a
        // random number up to their strength
        damage = (rand() % strength) + 1;
        cout << getSpecies() << " attacks for " <<
            damage << " points!" << endl;

        return damage;
    }

    // Returns amount of damage this creature
    // inflicts in one round of combat

    
};

#endif // !CREATRUE_H

#pragma once
