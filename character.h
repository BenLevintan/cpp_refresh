#pragma once // CRITICAL: Prevents the compiler from accidentally including this file twice.
#include <string>

class Character {
protected:
    std::string name;
    int hp, level;
    float baseDamage;
    double critMultiplier;
    bool isAlive, isFleeing;
    const int MAX_LEVEL = 99;

public:
    // Only the signatures (names and parameters) go here
    Character(std::string charName, int hp, float startingDamage);
    
    void printSheet();
    std::string getName();
    bool checkIsAlive();
    bool checkIsFleeing();
    void takeDamage(int damageAmount);
    void heal(int healAmount);
    void attack();
    void flee();
};