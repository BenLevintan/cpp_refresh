#include <iostream>
#include "Character.h" // Quotes mean "look in my current folder for this file"

using namespace std;

int main() {
    Character hero("Arthur", 100, 14.5f);
    int choice = 0;
    int healAmount = 0;

    do {
        cout << "what is you next move?\n1. attack\n2. heal\n3. flee" << endl;
        cin >> choice;

        switch (choice) {
            case 1: hero.attack(); break;
            case 2:
                cout << "How much would " << hero.getName() << " heal?" << endl;
                cin >> healAmount;
                hero.heal(healAmount);
                break;
            case 3: hero.flee(); break;
            default: cout << "Invalid choice." << endl; break;
        }

    } while (hero.checkIsAlive() && !hero.checkIsFleeing());

    if (!hero.checkIsAlive()) {
        cout << "Game Over." << endl;
    }

    return 0;
}