#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Character {
protected:
    // memebers 
    string name;
    int hp, level;
    float baseDamage;
    double critMultiplier;
    bool isAlive, isFleeing;
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
        isFleeing = false;
    }

    void printSheet(){
        cout << name << " | HP: " << hp << " | DMG: " << baseDamage << endl;
    }
    
    string getName(){return name;}

    bool checkIsAlive(){
        return isAlive;
    }

    bool checkIsFleeing(){
        return isFleeing;
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

    void heal(int healAmount){
        if (!isAlive){
            cout << name << " is too dead to be heald." << endl;  
        }

        hp += healAmount;
        cout << name << " was healed " << healAmount << " and now has " << hp << "hp" << endl;
        }

    void attack(){
        cout << name << " dealed " << baseDamage << " amount of damage" << endl;
        }

    void flee(){
        isFleeing = true;
        cout << "byebye" << endl;
    }
};

class Mage : public Character{
    private:
        int mana;

    Mage(string charName, int hp, float startingDamge, int startingMana) : Character(charName, hp, startingDamge){
        mana = startingMana; 
    }


    void castSpell(){
        if (mana >= 10) {
            cout << name << " casts Fireball for " << (baseDamage * 2.0f) << " damage!" << endl;
            mana -= 10;
            cout << "Remaining Mana: " << mana << endl;
        } else {
            cout << name << " is out of mana!" << endl;
        }
    }
};

int main() {
    Character hero("Arthur", 100, 14.5f);
    int choice = 0;
    int healAmount = 0;
    
    do{
        cout << "what is you next move?\n1. attack\n2. heal\n3. flee" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            hero.attack();
            break;

        case 2:
            cout << "How much would " << hero.getName() << " heal?" << endl;
            cin >> healAmount;
            hero.heal(healAmount);
            break;

        case 3:
            hero.flee();
            break;
        
        default:
            cout << "Invalid choice." << endl;
            break;
        }

    }while (hero.checkIsAlive() && !hero.checkIsFleeing());

    if (!hero.checkIsAlive()){
        cout << "Game Over." << endl;
    }
  
    

    return 0;
}