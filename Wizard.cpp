#include "Wizard.h"

Wizard::Wizard()
{
    staff = 1;
    staffStrength = 0;
    staffDefense = 0;
    type = "Wizard";


}


void Wizard::setWeaponStats(int staff){
    while(staff != 1 && staff != 2 && staff != 3){
        cout << "Please enter valid option..." << endl;
        cin >> staff;
    }
    if(staff == 1){
        cout << "You have chosen staff 1!" << endl;
        staffStrength = 10;
        staffDefense = 5;
    }
    else if (staff == 2){
        cout << "You have chosen staff 2!" << endl;
        staffStrength = 5;
        staffDefense = 10;
    }
    else if (staff == 3){
        cout << "You have chosen staff 3!" << endl;
        staffStrength = 7;
        staffDefense = 7;
    }

}

void Wizard::getCharacterStats()
{   cout << "Sorcerer " << Character::getName() << " Stats: " << endl;
    cout << "-------------------" << endl;
    cout << "Level: " << Character::getLevel() << endl;
    cout << "Exp: " << Character::getExp() << " /" << 50 * level << endl;
    cout << "Health: " << Character::getHealth() << " /100" << endl;
    Wizard::staffStats();
    cout << "Attack: " << getTotalAttack() << endl;
    cout << "Defense: " << getTotalDefense() << endl;
    cout << "VC: " << Character::getVC() << endl;
    cout << "Health Potions: " << Character::getHealthItems() << endl;
    cout << "-------------------" << endl;
}



int Wizard::getWeaponAttack()
{
    return staffStrength;
}

int Wizard::getWeaponDefense()
{
    return staffDefense;
}

string Wizard::getType()
{
    return type;
}

int Wizard::getTotalAttack()
{
    totalAttack = attack + staffStrength;
    return totalAttack;
}

int Wizard::getTotalDefense()
{
    totalDefense = defense + staffDefense;
    return totalDefense;
}

void Wizard::setWeaponAttack(int weaponStrength)
{
    staffStrength = weaponStrength;
}

void Wizard::setWeaponDefense(int weaponDefense)
{
    staffDefense = weaponDefense;
}

void Wizard::staffStats(){
    cout <<"Staff Strength: " << staffStrength << endl;
    cout << "Sword Defense: " << staffDefense << endl;

}