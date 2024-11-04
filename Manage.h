#ifndef MANAGE_H
#define MANAGE_H
#include "Character.h"
#include <fstream>
class Manage
{
public:
    Character* character;
    bool menu();
    bool create();
    bool gameMenu(Character* );
    bool attackIncrease(int, Character* &);
    bool defenseIncrease(int, Character* &);
    void saveGame(Character* & player);
    void loadGame();

private:

};

#endif