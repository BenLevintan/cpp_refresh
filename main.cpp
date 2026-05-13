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
    Character(string charName, int hp, float startingDamge){
        // constructor assigned values
        name = charName;
        this->hp = hp;      // how to use this pointer when there is a name collision (could also just use different name)
        baseDamage = startingDamge;

        // defualt values
        level = 1;
        critMultiplier = 1.5;
        isAlive = true;
    }

    void printSheet(){
        cout << "--- Character Sheet ---" << endl;
        cout << "Name:   " << name << endl;
        cout << "Level:  " << level << " (Max: " << MAX_LEVEL << ")" << endl;
        cout << "HP:     " << hp << endl;
        cout << "Damage: " << baseDamage << endl;
        cout << "Alive:  " << isAlive << endl;
    }
    
    string getName(){
        return name;
    }

    bool checkIsAlive(){
        return isAlive;
    }

    void takeDamage(int damageAmount){
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

};

int main() {
    Character hero("Arthur", 100, 14.5f);
    
    // Using the getter to read the private name
    cout << "A wild goblin attacks " << hero.getName() << "!\n" << endl;

    hero.printSheet();

    // Simulating combat
    hero.takeDamage(40);
    hero.takeDamage(70);
    hero.takeDamage(10); // Trying to attack after death

    cout << "\nPost-Battle Status:" << endl;
    hero.printSheet();

    return 0;
}