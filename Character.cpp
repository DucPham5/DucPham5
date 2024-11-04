#include "Character.h"

Character::Character()
{
    name = " ";
    exp = 0;
    level = 1;
    HP = 100;
    maxHP = 100;
    VC = 0;
    healthItems = 0;

}

int Character::getAttack()
{
    return attack;
}

int Character::getDefense()
{
    return defense;
}


void Character::setAttack(int attack)
{
    this->attack = attack;
}

void Character::setDefense(int defense)
{
    this->defense = defense;
}

void Character::setName(string name)
{
    this->name = name;
}
//used after every fight for exp gain
void Character::gainExp(int exp)
{
    this->exp += exp;
    if(this->exp >= 50 * level){
        this->exp -= 50 * level;
        this->level++;
        this->VC += 3;
    }
    
}

int Character::getLevel()
{
    return level;
}

void Character::setHealthItems(int healthItems)
{
    this->healthItems = healthItems;
}

int Character::getHealthItems()
{
    return healthItems;
}

//used for shop buying health items
bool Character::buyHealthItems(int VC)
{
    if(VC > this->VC){
        cout << "Not enough funds!" << endl;
        cout << endl;
        return false;
    }
    else{
        this->VC -= VC;
        healthItems += VC;
        cout << "Health potions purchased!" << endl;
        cout << endl;
    }
    return true;
}

void Character::setHealth(int health){
    HP = health;
}
int Character::getHealth()
{
    return HP;
}

int Character::getExp(){
    return exp;
}

int Character::getVC()
{
    return VC;
}


void Character::setVC(int VC)
{
    this->VC = VC;
}

string Character::getName()
{
    return name;
}

void Character::setLevel(int level)
{ 
    this->level = level;
}
