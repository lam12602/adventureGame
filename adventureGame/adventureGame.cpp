// adventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Player.h"
#include "Monster.h"
#include "Item.h"
#include "Feature.h"
#include "Area.h"

void printstatementP(Player Info)
{
    std::cout << Info.health << " health\n" << Info.attack << " attack\n" << Info.armour << " has armour\n" << Info.description << "\n" << Info.equipment[0] << ", " << Info.equipment[1] << "\n" << Info.inventory[0] << ", " << Info.inventory[1] << "\n";
}

void printstatementM(Monster Info)
{
    std::cout << Info.health << " health\n" << Info.attack << " attack\n" << Info.name << "\n";
}

void printstatementI(Item Info)
{
    std::cout << Info.description << "\n" << Info.name << "\n";
}

void printstatementF(Feature Info)
{
    std::cout << Info.description << "\n" << Info.name << "\n";
}

void printstatementA(Area Info)
{
    std::cout << Info.description << "\n" << Info.name << "\n" << Info.connectingAreas[0] << "\n" << Info.connectingAreas[1] << "\n" << Info.exits[0] << "\n" << Info.exits[1] << "\n";
}

int main()
{
    Player P1;

    //push back for vector
    P1.attack = 6;
    P1.health = 10;
    P1.armour = "yes";
    P1.description = "Beig";
    P1.equipment.push_back("sword");
    P1.inventory.push_back("key");
    P1.equipment.push_back("sheild");
    P1.inventory.push_back("book");

    Monster M1;

    M1.attack = 3;
    M1.name = "ah";
    M1.health = 5;

    Item I1;

    I1.name = "Key";
    I1.description = "A rusty key";

    Area AA;
    AA.name = "West wing";

    Area AB;
    AB.name = "East wing";

    Area A1;
    A1.name = "North wing";
    A1.connectingAreas.push_back(AA.name);
    A1.connectingAreas.push_back(AB.name);
    A1.description = "dark and gloomy";
    A1.exits.push_back("west");
    A1.exits.push_back("east");

    Feature F1;
    F1.name = "Event1";
    F1.description = "Thia is opening of a door";

    printstatementP(P1);
    printstatementM(M1);
    printstatementI(I1);
    printstatementF(F1);
    printstatementA(A1);
    A1.look();
    A1.go();


}


