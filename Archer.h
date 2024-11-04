#ifndef ARCHER_H
#define ARCHER_H

#include "Character.h"

class Archer: public Character
{
public: 
    Archer();
    void staffStats();
    void setWeaponStats(int );
    void getCharacterStats();
    int getWeaponAttack();
    int getWeaponDefense();
    int getTotalAttack();
    int getTotalDefense();
    string getType();
    void setWeaponAttack(int);
    void setWeaponDefense(int);

private:
    int bow;
    int bowStrength;
    int bowDefense;                                                                                                                                                                                                                                                                                                                                                                   

};

#endif