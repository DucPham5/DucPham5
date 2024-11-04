#ifndef KNIGHT_H
#define KNIGHT_H

#include "Character.h"

class Knight: public Character
{
public:
    Knight();
    int getAttack();
    int getDefense();
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
    int sword;
    int swordStrength;
    int swordDefense;
};

#endif