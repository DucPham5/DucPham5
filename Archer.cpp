#include "Archer.h"

Archer::Archer()
{
    bow = 1;
    bowStrength = 0;
    bowDefense = 0;
    type = "Archer";
}


void Archer::staffStats()
{
    cout << "Bow Strength: " << bowStrength << endl;
    cout << "Bow Defense: " << bowDefense << endl;
}

void Archer::setWeaponStats(int bow)
{
    while(bow != 1 && bow != 2 && bow != 3){
        cout << "Please enter valid option..." << endl;
        cin >> bow;
    }
    if(bow == 1){
        cout << "You have chosen bow 1!" << endl;
        bowStrength = 14;
        bowDefense = 4;
    }
    else if (bow == 2){
        cout << "You have chosen bow 2!" << endl;
        bowStrength = 5;
        bowDefense = 11;
    }
    else if (bow == 3){
        cout << "You have chosen bow 3!" << endl;
        bowStrength = 9;
        bowDefense = 9;
    }
}

void Archer::getCharacterStats()
{
    cout << "Bowman " << Character::getName() << " Stats: " << endl;
    cout << "-------------------" << endl;
    cout << "Level: " << Character::getLevel() << endl;
    cout << "Exp: " << Character::getExp() << " /" << 50 * level << endl;
    cout << "Health: " << Character::getHealth() << " /100" << endl;
    Archer::staffStats();
    cout << "Attack: " << getTotalAttack() << endl;
    cout << "Defense: " << getTotalDefense() << endl;
    cout << "VC: " << Character::getVC() << endl;
    cout << "Health Potions: " << Character::getHealthItems() << endl;
    cout << "-------------------" << endl;
}

int Archer::getWeaponAttack()
{
    return bowStrength;
}

int Archer::getWeaponDefense()
{
    return bowDefense;
}

int Archer::getTotalAttack(){
    totalAttack = attack + bowStrength;
    return totalAttack;
}

int Archer::getTotalDefense()
{
    totalDefense = defense + bowDefense;
    return totalDefense;
}

string Archer::getType()
{
    return type;
}

void Archer::setWeaponAttack(int weaponStrength)
{
    bowStrength = weaponStrength;
}

void Archer::setWeaponDefense(int weaponDefense)
{
    bowDefense = weaponDefense;
}
