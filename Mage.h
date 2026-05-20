#pragma once
#include "Character.h"

class Mage : public Character{
private:
    int mana;

public:
    // Signature for the constructor
    Mage(std::string charName, int hp, float startingDamage, int startingMana);
    
    // Signature for the unique method
    void castSpell();
};