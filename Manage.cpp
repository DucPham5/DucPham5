#include "Manage.h"
#include "Character.h"
#include "Art.h"
#include "Wizard.h"
#include "Knight.h"
#include "Archer.h"
#include "Battle.h"

bool Manage::menu()
{   Art art;
    art.drawMenu();
    int choice;
    cout << "Enter option: ";
    cin >> choice;
    cout << endl;
    while(choice > 3 || choice < 1){
        cout << "Please enter a valid option" << endl;
        cin >> choice;
    }
    //start new game
    if(choice == 1){
        create();
    }
    //load game option
    if(choice == 2){
        loadGame();
    }
    //exit game
    if(choice == 3 ){
        cout << "Thank you for playing!" << endl;
        exit(0);
    }

    return false;
}

bool Manage::create()
{   Character* character = nullptr;
    Art art;
    int choice;
    string n;
    art.drawCharacterSelect();
    cout << "Enter choice: ";
    cin >> choice;
    cout << endl;
    while(choice < 1 || choice > 3){
        cout << "Please enter a valid option: ";
        cin >> choice;
        cout << endl;
    }
    //selecting wizard option
    if(choice == 1){
        cout << "You have selected the wizard archetype!" << endl;
        art.drawWizard();
        character = new Wizard();//polymorphism
        character->setAttack(8);
        character->setDefense(8);
        cout << "What is your name young sorceror?" << endl;
        cin.ignore();
        getline(cin, n);
        character->setName(n);
        cout << endl;
        int weaponChoice;
        cout << "Select a staff: " << endl;
        art.drawStaff();
        cout << "Staff 1: Staff Strength: 10, Staff Defense: 5" << endl;
        cout << "Staff 2: Staff Strength: 5, Staff Defense: 10" << endl;
        cout << "Staff 3: Staff Strength: 7, Staff Defense: 7" << endl;
        cout << endl;
        cin >> weaponChoice;
        character->setWeaponStats(weaponChoice);
        cout << endl;
        character->getCharacterStats();
        cout << endl;
    }
    //selecting knight option
    else if(choice == 2){
        cout << "You have selected the knight archetype!" << endl;
        art.drawKnight();
        character = new Knight();//polymorphism
        character->setAttack(12);
        character->setDefense(5);
        cout << "What is your name young swordsman?" << endl;
        cin.ignore();
        getline(cin, n);
        character->setName(n);
        cout << endl;
        int weaponChoice;
        cout << "Select a sword: " << endl;
        art.drawSword();
        cout << "Sword 1: Sword Strength: 13, Sword Defense: 3" << endl;
        cout << "Sword 2: Sword Strength: 3, Sword Defense: 13" << endl;
        cout << "Sword 3: Sword Strength: 6, Sword Defense: 6" << endl;
        cout << endl;
        cin >> weaponChoice;
        character->setWeaponStats(weaponChoice);
        cout << endl;
        character->getCharacterStats();
        cout << endl;
    }
    //selecting archer option
    else if(choice == 3){
        cout << "You have selected the archer archetype!" << endl;
        art.drawArcher();
        character = new Archer();//polymorphism
        character->setAttack(4);
        character->setDefense(13);
        cout << "What is your name young bowman?" << endl;
        cin.ignore();
        getline(cin, n);
        character->setName(n);
        cout << endl;
        int weaponChoice;
        cout << "Select a bow: " << endl;
        art.drawBow();
        cout << "Bow 1: Bow Strength: 14, Bow Defense: 4" << endl;
        cout << "Bow 2: Bow Strength: 5, Bow Defense: 11" << endl;
        cout << "Bow 3: Bow Strength: 9, Bow Defense: 9" << endl;
        cout << endl;
        cin >> weaponChoice;
        character->setWeaponStats(weaponChoice);
        cout << endl;
        character->getCharacterStats();
        cout << endl;
    }
    
    Manage::gameMenu(character);


    return false;
}

bool Manage::gameMenu(Character* c)
{   Art a;
    Battle* b;
    int option =0;
    int choice = 0;

    while(option != 4 || option != 5){
    a.drawGameMenu();
    cout << endl;
    cout << "Enter Option: ";
    cin >> option;
    cout << endl;
    if(option > 5 || option < 1){
        cout << "Please enter valid option..." << endl;
    }
    //battle option
    if(option == 1){
        int enemyHp = 100;
        b = new Battle(c);
        if(c->getHealth() > 0){
        cout << "You've encountered an enemy!"<< endl;
        }
        if(c->getHealth() == 0){
            cout << "You're health is low, you need rest!!!!" << endl;
            cout << endl;
        }
        while(enemyHp > 0 && c->getHealth() > 0){
            if(c->getHealth() == 0){
            break;
        }
            a.battle();
            cout << endl;
            cout << "Enter choice: ";
            cin >> choice;
            cout << endl;
            while(choice > 3 || choice < 1){
                cout << "Please enter a valid option..." << endl;
                cin >> choice;
            }
            //flee option
            if(choice == 3){
                cout << "You fled the battle!" << endl << endl;
                break;
            }
            //attack option
            else if(choice == 1){
                b->updateEnemyHp(enemyHp, c);
                if(enemyHp > 0 ){
                b->updateUserHp(c,c);
                }
            }
            //heal option
            else if (choice == 2){
                b->healthBoost(c);
                if(enemyHp > 0){
                b->updateUserHp(c,c);
                }
            }
        }
    }
    //rest option
    if(option == 2){
        c->setHealth(100);
        cout << "Health fully restored!" << endl << endl;
        c->getCharacterStats();
        cout << endl;
    }
    //shop option
    if(option == 3){
        choice = 0;
        while(choice != 4){
            int amount;
            a.shop();
            cout << "Enter choice: ";
            cin >> choice;
            cout << endl;
            while(choice > 4 || choice < 1){
                cout << "Please enter a valid option" << endl;
                cin >> choice;
                cout << endl;
            }
            if(choice == 1){
                cout << "Enter attack amount: " << endl;
                cin >> amount;
                attackIncrease(amount, c);
            }
            if(choice == 2){
                cout <<"Enter defense amount: " << endl;
                cin >> amount;
                defenseIncrease(amount, c);    
            }
            if(choice == 3){
                cout << "Enter health potions amount: " << endl;
                cin >> amount;
                c->buyHealthItems(amount);
            }
            if(choice == 4){
                cout << "Thank you for shopping!" << endl;
                cout << endl;
                c->getCharacterStats();
                cout << endl;
                break;
            }
        }   
    }
    //exit and save option
    if(option == 4){
        saveGame(c);
        cout << "Thank you for playing!" << endl;
        exit(0);
    }
    //exit no save option
    if(option == 5){
        cout << "Thank you for playing!" << endl;
        exit(0);
    }
    }
    return false;
}

//Shop upgrading attack
bool Manage::attackIncrease(int VC, Character* & Char)
{
    if(VC > Char->getVC()){
        cout << "Not enough funds" << endl;
        cout << endl;
        return false;
    }
    else{
    Char->setVC(Char->getVC() - VC);
    Char->setAttack(Char->getAttack() + VC);
    cout << "Attack upgraded!" << endl;
    cout << endl;
    }
    return true;
}

bool Manage::defenseIncrease(int VC, Character* &Char)
{
    if(VC > Char->getVC()){
        cout << "Not enough funds" << endl;
        cout << endl;
        return false;
    }
    else{
    Char->setVC(Char->getVC() - VC);
    Char->setDefense(Char->getDefense() + VC);
    cout << "Defense upgraded!" << endl;
    cout << endl;
    }
    return true;
}

//Save Game function
void Manage::saveGame(Character* &player)
{
    ofstream outFile("savegame.txt");

    if(outFile.is_open()){
        outFile << player->getType() << endl;
        outFile << player->getName() << endl;
        outFile << player->getHealth() << endl;
        outFile << player->getExp() << endl;
        outFile << player->getAttack() << endl;
        outFile << player->getDefense() << endl;
        outFile << player->getWeaponAttack() << endl;
        outFile << player->getWeaponDefense() << endl;
        outFile << player->getHealthItems() << endl;
        outFile << player->getVC() << endl;
        outFile << player->getLevel() << endl;
        outFile.close();
        cout << "Game saved successfully!" << endl;
    }
    else{
        cout <<"Unable to save the game!" << endl;
    }

}

void Manage::loadGame(){

     ifstream inFile("savegame.txt");
    
    if (inFile.is_open())
    {
        string type, name;
        int health, exp, attack, defense, weaponAttack, weaponDefense, healthItems, VC, level;

        inFile >> type >> name >> health >> exp >> attack >> defense >> weaponAttack >> weaponDefense >> healthItems >> VC >> level;

        Character* player = nullptr;


        if (type == "Wizard") {
            player = new Wizard();
        }
        else if (type == "Knight") {
            player = new Knight();
        }
        else if (type == "Archer") {
            player = new Archer();
        }

        player->setName(name);
        player->setHealth(health);
        player->gainExp(exp);
        player->setAttack(attack);
        player->setDefense(defense);
        player->setWeaponAttack(weaponAttack);
        player->setWeaponDefense(weaponDefense);
        player->setHealthItems(healthItems);
        player->setVC(VC);
        player->setLevel(level);

        inFile.close();
        cout << "Game loaded successfully!" << endl;

        gameMenu(player);
    }
    else
    {
        cout << "Unable to open the save game file for loading." << endl;
    }

}
