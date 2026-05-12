#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    string name;
    int hp;
    int level;
    float baseDamage;
    double critMultiplier;
    bool isAlive;
    const int MAX_LEVEL = 99;

public:
    Character(string charName, int startingHP, float startingDamge){
        // constructor assigned values
        name = charName;
        hp = startingHP;
        baseDamage = startingDamge;

        // defualt values
        level = 1;
        double critMultiplier = 1.5;
        bool isAlive = true;
    }

    void printSheet(){
        cout << "--- Character Sheet ---" << endl;
        cout << "Name:   " << name << endl;
        cout << "Level:  " << level << " (Max: " << MAX_LEVEL << ")" << endl;
        cout << "HP:     " << hp << endl;
        cout << "Damage: " << baseDamage << endl;
        cout << "Alive:  " << isAlive << endl;
    }
};

int main() {
cout << "RPG player system initializing...\n";

    // Instantiate an object
    Character hero("Arthur", 100, 14.5f);
    
    // Call the public method
    hero.printSheet();

    return 0;
}