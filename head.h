#include <iostream>
#include <cstring>
#include <cctype>
#include <stdlib.h>

using namespace std;

class Character {

    public:
        float health;
        Item weapon;
        Item helmet;
        Item armor;
        Item legs;
        Item boots;
        Location playerPos;
    private: 
        Character();
        
}

struct Location {
    string name;
    string description;
    Location * connection;
};

class Item {
    public: 
        Item();
        Item(int itemID, string name, string desc, int atk, int def, int value, int stackSize);

    private: 
        int itemID; // Database ID 
        string name; // item's name
        string desc; // item's description
        int atk; // item's attack power
        int def; // item's defense (HOW WILL DEFENSE WORK?)
        int hands; // one or two handed?
        int value; // gold value. 
        int stackSize; // how big of a stack will it have?
        int quantity; // getter and setter in inventory. 
};

/*
PROTOTYPES HERE
*/
void introduction();
