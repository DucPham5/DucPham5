#include "Art.h"
#include <iostream>
using namespace std;

void Art::drawMenu()
{
    cout << endl << endl;
cout << " ____        _   _   _        ____  ____   ____" << endl; 
cout << "  __ )  __ _| |_| |_| | ___  |  _ \\|  _ \\ / ___|" << endl;
cout << "|  _ \\ / _` | __| __| |/ _ \\ | |_) | |_) | |  _" << endl; 
cout << "| |_) | (_| | |_| |_| |  __/ |  _ <|  __/| |_| |" << endl;
cout << "|____/ \\__,_|\\__|\\__|_|\\___| |_| \\_\\_|    \\____|" << endl << endl;;
    cout << "Welcome user, your journey awaits..." << endl;
    cout << "====================================" << endl;
    cout << "Enter 1 to create new game" << endl;
    cout << "Enter 2 to load a saved game" << endl;
    cout << "Enter 3 to quit!" << endl;
    cout << "====================================" << endl;
    cout << endl;
}

void Art::drawCharacterSelect()
{
    cout << "Select your Archetype!: " << endl;
    cout << "======================= " << endl;
    cout << "Option 1: |Wizard| Attack: 8 Defense: 8" << endl;
    cout << "Option 2: |Knight| Attack: 12 Defense: 5" << endl;
    cout << "Option 3: |Archer| Attack: 4  Defense: 13" << endl;
    cout << endl;
}   

void Art::drawGameMenu()
{
    cout << "Enter 1 to enter battle..." << endl;
    cout << "Enter 2 to rest..." << endl;
    cout << "Enter 3 to enter shop..." << endl;
    cout << "Enter 4 to exit and save..." << endl;
    cout << "Enter 5 to exit (No Save)..." << endl;
    cout << endl;
}

void Art::drawWizard()
{ cout <<"     __{}__ " << endl;
cout << ". _ .\\\\''// " << endl;
cout << "-( )-/_||_\\ " << endl;
cout << " .'. \\_()_/ " << endl;
cout << "  |   | . \\ " << endl;
cout << "  |   | .  \\ " << endl;
cout << " .'., \\_____' " << endl;
}

void Art::drawKnight()
{cout << "    !" << endl;
 cout << "   .-." << endl;
cout <<" __|=|__" << endl;
cout<<"(_/`-`\\_)" << endl;
cout<<"//\\___/\\\\ " << endl;
cout<<"<>/   \\<>" << endl;
cout<<" \\|_._|/" << endl;
cout <<"  <_I_>" << endl;
cout <<"   |||" << endl;
cout <<"  /_|_\\" << endl;
}

void Art::drawArcher()
{
cout << ">>>>>>>_____________________\\`-._" << endl;
cout << ">>>>>>>                     /.-'" << endl;
}

void Art::battle()
{
    cout << "Enter 1 to attack" << endl;
    cout << "Enter 2 to restore health" << endl;
    cout << "Enter 3 flee" << endl;
    cout << endl;
}

void Art::shop()
{  
    cout << "Welcome to the shop, what can I do for you?" << endl;
    cout << "Enter 1 to upgrade attack" << endl;
    cout << "Enter 2 to upgrade defense" << endl;
    cout << "Enter 3 to buy health potions" << endl;
    cout << "Enter 4 to exit shop" << endl;
    cout << endl;
}

void Art::drawStaff()
{cout << "(`-._o_.-')" << endl;
 cout << " (`- | -')" << endl;
 cout << "  `-.|.-'" << endl;
 cout << "    o|o " << endl;
 cout << "   ( | )" << endl;
 cout << "    `!'" << endl;
 cout << "    (|)" << endl;
 cout << "     X" << endl;
 cout << "    (|)" << endl;
 cout << "    '|`" << endl;
}

void Art::drawSword()
{cout << "     /| ________________" << endl;
 cout << "O|===|*>________________>" << endl;
 cout << "     \\|" << endl;
}

void Art::drawBow()
{cout << "  (" << endl;
 cout << "   \\" << endl;
 cout << "    )" << endl;
 cout << "##-------->" << endl;        
 cout << "    )" << endl;
 cout << "   /" << endl;
 cout << "  (" << endl;
}
