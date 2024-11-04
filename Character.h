#ifndef CHARACTER_H
#define CHARACTER_H

using namespace std;
#include <string>
#include<iostream>

class Character
{
public:
    Character();
    virtual string getType() = 0;
    int getAttack();
    int getDefense();
    virtual void setWeaponStats(int ) = 0;
    virtual int getWeaponAttack() = 0;
    virtual int getWeaponDefense() = 0;
    virtual void getCharacterStats() = 0;
    virtual int getTotalAttack() = 0;
    virtual int getTotalDefense() = 0;
    virtual void setWeaponAttack(int) = 0;
    virtual void setWeaponDefense(int) =0;
    void setAttack(int);
    void setDefense(int);
    void setName(string );
    void gainExp(int );
    int getHealth();
    int getExp();
    int getVC();
    void setVC(int);
    string getName();
    void setLevel(int);
    int getLevel();
    void setHealth(int );
    void setHealthItems(int);
    int getHealthItems();
    bool buyHealthItems(int);
protected:
    string type;
    string name;
    int exp;
    int level;
    int HP;
    int maxHP;
    int VC; // Virtual Coins used for shop purchases
    int healthItems;
    int attack;
    int defense;
    int totalAttack;
    int totalDefense;

};

#endif