#include "Mage.h"
#include <iostream>

using namespace std;

Mage::Mage(string charName, int hp, float startingDamage, int startingMana)
    : Character(charName, hp, startingDamage){

    mana = startingMana;
    }

void Mage::castSpell() {
    if (mana >= 10) {
        cout << name << " casted fireball for " << (baseDamage * 2.0) << " Damage!" << endl;
        mana -= 10;
        cout << "Remaining Mans: " << mana << endl;
    } else {
        cout << name << " is out of mana!" << endl;
    }
}