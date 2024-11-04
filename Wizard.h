#ifndef WIZARD_H
#define WIZARD_H


#include "Character.h"

class Wizard : public Character
{
public:
    Wizard();
    void staffStats();
    void setWeaponStats(int );
    void getCharacterStats();
    int getWeaponAttack();
    int getWeaponDefense();
    string getType();
    int getTotalAttack();
    int getTotalDefense();
    void setWeaponAttack(int);
    void setWeaponDefense(int);


private:
int staff;
int staffStrength;
int staffDefense;
};

#endif