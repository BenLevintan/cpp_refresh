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

string Character::getName() { return name; }
bool Character::checkIsAlive(){ return isAlive; }
bool Character::checkIsFleeing(){ return isFleeing; }

void Character::takeDamage(int damageAmount){
        if(!isAlive){
        cout << name << " is already dead!" << endl;
        return;
    }

    hp -= damageAmount;

    if (hp <= 0){
        isAlive = false;
        hp = 0;
        cout << name << " took " << damageAmount << " amount of damage and now is dead" << endl;
    }
    else{
    cout << name << " took " << damageAmount << " amount of damage and has " << hp << "hp left." << endl;
    }
}

void Character::heal(int healAmount){
        if (!isAlive){
            cout << name << " is too dead to be heald." << endl;  
        }

        hp += healAmount;
        cout << name << " was healed " << healAmount << " and now has " << hp << "hp" << endl;
    }

void Character::attack(){
        cout << name << " dealed " << baseDamage << " amount of damage" << endl;
        }

void Character::flee(){
        isFleeing = true;
        cout << "byebye" << endl;
}