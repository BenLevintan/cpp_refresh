#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "RPG player system.\n";

    string charName = "Aurthor";

    int hp = 100;
    int level = 1;

    float baseDamage = 14.5f;
    double critMultiplier = 1.5;

    bool isAlive = true;

    const int MAX_LEVEL = 99;

    cout << "--- Character Sheet ---" << std::endl;
    cout << "Name:   " << charName << std::endl;
    cout << "Level:  " << level << " (Max: " << MAX_LEVEL << ")" << std::endl;
    cout << "HP:     " << hp << std::endl;
    cout << "Damage: " << baseDamage << std::endl;
    cout << "Alive:  " << isAlive << std::endl;

    return 0;
}