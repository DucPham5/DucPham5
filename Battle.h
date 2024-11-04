#ifndef BATTLE_H
#define BATTLE_H


#include "Character.h"

class Battle
{
public:
    Battle(Character* player);
    bool updateEnemyHp(int&, Character*);
    bool updateUserHp(Character* &, Character*);
    bool healthBoost(Character* &);

private:
Character* player; 
};

#endif