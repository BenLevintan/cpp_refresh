#include "Character.h" // Import .h blueprint
#include <iostream>


using namespace std;

Character::Character(string charName, int hp, float startingDamage){
    // Variable type decided by the .h file
    name = charName;
    this->hp = hp; // Same var name implimentation
    baseDamage = startingDamage;
    level = 1;
    isAlive = true;
    isFleeing = false;
}

void Character::printSheet(){
    cout << name << " | HP: " << hp << " | DMG: " << baseDamage << endl;
}