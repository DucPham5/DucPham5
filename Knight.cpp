#include "Knight.h"

Knight::Knight()
{
    sword = 1;
    swordStrength = 0;
    swordDefense = 0;
    type = "Knight";
}


void Knight::staffStats()
{
    cout << "Sword Strength: " << swordStrength << endl;
    cout << "Sword Defense: " << swordDefense << endl;
}

void Knight::setWeaponStats(int sword)
{
    while(sword != 1 && sword != 2 && sword != 3){
        cout << "Please enter valid option..." << endl;
        cin >> sword;
    }
    if(sword == 1){
        cout << "You have chosen sword 1!" << endl;
        swordStrength = 13;
        swordDefense = 3;
    }
    else if (sword == 2){
        cout << "You have chosen sword 2!" << endl;
        swordStrength = 3;
        swordDefense = 13;
    }
    else if (sword == 3){
        cout << "You have chosen sword 3!" << endl;
        swordStrength = 6;
        swordDefense = 6;
    }
}

void Knight::getCharacterStats()
{
    cout << "Knight " << Character::getName() << " Stats: " << endl;
    cout << "-------------------" << endl;
    cout << "Level: " << Character::getLevel() << endl;
    cout << "Exp: " << Character::getExp() << " /" << 50 * level << endl;
    cout << "Health: " << Character::getHealth() << " /100" << endl;
    Knight::staffStats();
    cout << "Attack: " << getTotalAttack() << endl;
    cout << "Defense: " << getTotalDefense() << endl;
    cout << "VC: " << Character::getVC() << endl;
    cout << "Health Potions: " << Character::getHealthItems() << endl;
    cout << "-------------------" << endl;
}

int Knight::getWeaponAttack()
{
    return swordStrength;
}

int Knight::getWeaponDefense()
{
    return swordDefense;
}

int Knight::getTotalAttack()
{
    totalAttack = attack + swordStrength;
    return totalAttack;
}

int Knight::getTotalDefense()
{
    totalDefense = defense + swordDefense;
    return totalDefense;
}

string Knight::getType()
{
    return type;
}

void Knight::setWeaponAttack(int weaponStrength)
{
    swordStrength = weaponStrength;
}

void Knight::setWeaponDefense(int weaponDefense)
{
    swordDefense = weaponDefense;
}