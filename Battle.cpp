#include "Battle.h"
#include "Manage.h"

Battle::Battle(Character* player): player(player)
{}


bool Battle::updateEnemyHp(int& enemyHp, Character* player)
{
    int chance = rand() % 10 + 1;
    if(chance > 8){
        int critDamage = player->getTotalAttack() + 7;
        enemyHp = enemyHp - critDamage;
        cout << "============================" << endl;
        cout << "Critical Hit for " << critDamage;
    }
    else if(chance > 2 && chance <= 8){
        enemyHp = enemyHp - player->getTotalAttack();
        cout << "============================" << endl;
        cout << "You hit for " << player->getTotalAttack();
    }
    else{
        enemyHp = enemyHp;
        cout << "============================" << endl;
        cout << "Your attack missed!";
    }

    cout << endl;

    if(enemyHp <= 0 ){
        cout << "Enemy Defeated!" << endl;
        cout << "You gained: " << endl;
        cout << "30 exp!" << endl;
        cout << "3 VC" << endl;
        cout << "============================" << endl << endl;
        player->gainExp(30);
        player->setVC(player->getVC() + 3);
        player->getCharacterStats();
        enemyHp = 0;
        cout << endl;
        return false;
    }
    cout << "Enemy remaining HP:" << enemyHp << endl;
    cout << "============================" << endl;

    cout << endl;
    return true;
}

bool Battle::updateUserHp(Character* &playerHp, Character *player)
{   int enemyAttack = 20;
    int chance = rand() % 10 + 1;
    int defenseProtect = (player->getTotalDefense()/2);
    int enemyHit = enemyAttack - defenseProtect;

    if(chance > 7){
        int critDamage = enemyHit + 9;
        playerHp->setHealth(playerHp->getHealth() - critDamage) ;
                cout << "============================" << endl;
    cout << "The enemy critical hit for " << critDamage;
    }
    else if(chance > 1 && chance <= 7){
        playerHp->setHealth(playerHp->getHealth() - enemyHit);
        cout << "============================" << endl;
        cout << "The enemy hit for " << enemyHit;
    }
    else{
        playerHp->setHealth(playerHp->getHealth());
        cout << "============================" << endl;
        cout << "The opponent's attack missed!";
    }

    cout << endl;

    if(playerHp->getHealth() <= 0 ){
        cout << "You have been defeated!" << endl;
        cout << "You gained: " << endl;
        cout << "5 exp" << endl;
        cout << "============================" << endl << endl;
        player->gainExp(5);
        player->setHealth(0);
        player->getCharacterStats();
        cout << endl;
        return false;
    }
    cout << player->getName() << " remaining HP:" << playerHp->getHealth() << endl;
    cout << "============================" << endl;
    cout << endl;
    return true;

}

bool Battle::healthBoost(Character *&playerHealth)
{   
    if(playerHealth->getHealthItems() <= 0){
        cout << "You have no health potions!" << endl;
        playerHealth->setHealthItems(0);
        return false;
    }
    else{
        playerHealth->setHealth(playerHealth->getHealth() + 10);
        playerHealth->setHealthItems(playerHealth->getHealthItems() - 1);
        cout << "============================" << endl;
        cout << "HP boosted by 10!" << endl;
        cout << playerHealth->getName() << " remaining HP: " << playerHealth->getHealth() << endl;
        cout << "============================" << endl;
        cout << endl;

    }


    return true;
}
