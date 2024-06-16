#ifndef DEMON_H
#define DEMON_H
#include"creatrue.h"
#include<iostream>
using namespace std;
class Demon :public Creature
{
public:
    Demon() :Creature()
    {
        this->type = 5;
    }
    
    int getDamage()
    {
        int damage = Creature::getDamage();
        if ((rand() % 100) < 5){
       
           damage = damage + 50;
           cout << "Demonic attack inflicts 50 "
               << " additional damage points!" << endl;
        };
        return(damage);
    }
private:

};
class Cyberdemon :public Demon
{
public:
    Cyberdemon() :Demon()
    {
        this->type = 1;
    }

  
};
class Balrogs :public Demon
{
public:
    Balrogs() :Demon()
    {
        this->type = 2;
    }
    int getDamage()
    {
        int damage = Demon::getDamage();
        int damage2 = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage2 <<
            " additional damage points!" << endl;
        damage = damage + damage2;
        return(damage);
    }
   
};
#endif // !DEMON_H

